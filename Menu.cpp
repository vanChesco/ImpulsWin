#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include "Klasy.h"

// using namespace std;

/*
void Plik::wyswietl_menu()
{
	Marker1:

	system ("cls");

	cout << "Rozdzielczosc bitowa: " << endl << endl
			<< "1. 8 bit" << endl
			<< "2. 16 bit" << endl
			<< "3. 24 bit" << endl
			<< "4. 32 bit" << endl;

	cin >> i;

	switch (i)
	{
	case 1:
		Bits=8;
		break;
	case 2:
		Bits=16;
		break;
	case 3:
		Bits=24;
		break;
	case 4:
		Bits=32;
		break;
	default:
		cout << "Nie wybrales poprawnej rozdzielczosci bitowej. Wybierz sposrod dostepnych." << endl << endl;
		goto Marker1;
	}

	system("cls");

	cout << "Czestotliwosc probkowania: " << endl << endl
			<< "1. 11025Hz" << endl
			<< "2. 22050Hz" << endl
			<< "3. 44100Hz" << endl
			<< "4. 48000Hz" << endl
			<< "5. 96000Hz" << endl;

	cin >> i;

	switch (i)
	{
	case 1:
		SamplingRate=11025;
		break;
	case 2:
		SamplingRate=22050;
		break;
	case 3:
		SamplingRate=44100;
		break;
	case 4:
		SamplingRate=48000;
		break;
	case 5:
		SamplingRate=96000;
		break;
	default:
		cout << "Nie wybrales standardowej czestotliwosci probkowania. Ustaw wlasna: " << endl;
		cin >> SamplingRate;
		break;
	}

	Marker2:

	system("cls");

	cout << "Liczba kanalow (1-8): ";
	cin >> Channels;
	if (Channels <1 || Channels >8)
	{
		cout << "Liczba kanalow musi byc nie mniejsza niz 1 i nie wieksza niz 8. Podaj liczbe kanalow: " << endl << endl;
		goto Marker2;
	}

	system("cls");

	cout <<"Dlugosc dzwieku: ";
	cin >> dlugosc;

	system("cls");

	cout << "Nazwa pliku: ";
	cin >> filename;
	path=".\\Wave\\";
	nazwa_pliku=path+filename+"."+ext;
}


void Plik::wybor()
{
	system ("cls");

	cout << "Jaki plik wygenerowac? " << endl << endl
			<< "1. Impuls idealny" << endl
			<< "2. Sinus" << endl
			<< "3. Suma sinusow Fibonacciego" << endl
			<< "4. Suma sinusow w odstepach okna FFT" << endl
			<< "5. Suma ujemna sinusoid w odstepach" << endl
			<< "6. Odczytaj wlasciwosci pliku audio" << endl;

	cin >> i;
}

void Funkcje::parametry_impulsu()
{
	system ("cls");
	cout << "Podaj czestotliwosc max.: " << endl;

	cin >> fm;
}

void Funkcje::parametry_szumu()
{
	system ("cls");
	cout << "Podaj czestotliwosc max.: " << endl;
	cin >> fm;

	cout << "Podaj odstep miedzy kolejnymi sinusoidami:" << endl;
	cin >> delta;
}


void Funkcje::parametry_sinusa()
{
	system ("cls");

	cout << "Amplituda: ";
	cin >> A;
	cout << "Czestotliwosc: ";
	cin >> f;
	cout << "Przesuniecie fazowe: ";
	cin >> ph;
}
*/