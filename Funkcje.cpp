#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <cmath>
#include <vector>
#include "Klasy.h"

// using namespace std;


Funkcje::Funkcje(Plik file) : Plik(SamplingRate, Bits, Channels, dlugosc, nazwa_pliku)
{
	SamplingRate=file.SamplingRate;
	Bits=file.Bits;
	Channels=file.Channels;
	dlugosc=file.dlugosc;
	nazwa_pliku=file.nazwa_pliku;
	dziedzina=SamplingRate*dlugosc-1;
}


//|||||||||||| Funkcja generujaca impuls idealny dla zakresu od 1 do fm Hz ||||||||||||||||||||||

void Funkcje::impuls_idealny(int fm, Plik qq, std::vector<int> &tablica)
{
	fmax=fm; // sampling/2.0;

	for (i=1; i<=dziedzina; i++)
	{
		x=2*PI*i/SamplingRate;

/////////////////////////////////// FUNKCJA DO WYKONANIA ////////////////////////////////////////

//        y=0.00005*(-cos(fmax*abs(x))/abs(x)-cos(fmax*x)/x+cos(20*abs(x))/abs(x)-cos(20*x)/x);
		y=sin((2*PI/((1-1/fmax)*x+2*PI/fmax))*x)*(2*PI/((1-1/fmax)*x+2*PI/fmax))/fmax;

/////////////////////////////////////////////////////////////////////////////////////////////////

		y_int=y*(pow(2, Bits)-1)/2;

		if (Bits<=8) y_int+=128;

		tablica[i]=y_int;
	}
}


////////////////// ZLOTY PODZIAL - sumowanie bezczelne ///////////////////////////

void Funkcje::sumowanie_golden_ratio(std::vector<int> &tablica)
{
	fmax=24000.0;

	k=2;
	m=3;
	for (j=5; j<=fmax; j=k+m)
	{
		for (i=1; i<=dziedzina; i++)
		{
			x=2*PI*i/SamplingRate;

			y=0.1*sin(j*x);

			y_int=y*(pow(2, Bits)-1)/2;

			if (Bits<=8) y_int+=128;

			tablica[i]=(tablica[i]+y_int);
		}
		k=m;
		m=j;
	}
}


///////////////// Generator sinusa //////////////////////////////////////////////

void Funkcje::sinus(float A, float f, float ph, std::vector<int> &tablica)
{
	for (i=1; i<=dziedzina; i++)
	{
		x=2*PI*i/SamplingRate;
		p=(ph/360)*2*PI;

		y=A*sin(f*x+p);

		if (y>=1) y=1;
		if (y<=-1) y=-1;

		y_int=y*(pow(2, Bits)-1)/2;

		if (Bits<=8) y_int+=128;

		tablica[i]=y_int;
	}
}


///////////////// Funkcja generujaca sinusoidy w odstepach o wielkosci okna FFT //////////////

void Funkcje::sin_frame(int fr_smp, std::vector<int> &tablica)
{
	fmax=24000.0;

	for (j=1; j<=fmax; j++)//j=j+fr_smp)
	{
		for (i=1; i<=dziedzina; i++)
		{
			x=2*PI*i/SamplingRate;

			y=0.05*sin(j*x);

			y_int=y*(pow(2, Bits)-1)/2;

			if (Bits<=8) y_int+=128;

			tablica[i]+=y_int;

			if (tablica[i]>=0.5*pow(2, Bits)-1) tablica[i]=0.25*pow(2, Bits)-10;   //???
			if (tablica[i]<=-0.5*pow(2, Bits)+1) tablica[i]=-0.25*pow(2, Bits)+10;
		}
	}
	std::cout << tablica[3563];
}


void Funkcje::suma_sinusoid(std::vector<int> &tablica, Plik pplik)
{
	tablica.assign(tablica.capacity(), 0);      // zerowanie wektora

	for (k=1; k<fm; k+=delta)
	{
		if (((k-1)/delta)%2!=0) przesuwnik=1; 
			else przesuwnik=0;

		for (i=0; i<tablica.size(); i++)        // Generowanie sinusoidy dla kolejnego mnoznika k
		{
			x=2*PI*i/SamplingRate;
			y=sin(k*x+(1/3)*przesuwnik*PI)/(fm/delta);

			y_int=y*(pow(2, Bits)-1)/2;
			tablica[i]-=y_int;
		}
	}
}