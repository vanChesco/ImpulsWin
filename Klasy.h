#pragma once

#include <iostream>
#include <cmath>
#include <vector>



class Plik
{
public:

///// Parametry wejsciowe pliku wav //////////////////////

	int SamplingRate;
	short int Bits;
	short int Channels;
	std::string path, filename, ext, nazwa_pliku;
	float dlugosc;

////// Obliczane dane naglowka pliku /////////////////////

private:

	int format_chunk;
	short int compression;
	int BytesPerSecond;
	short int BlockAlign;
	int DataChunkSize;
	int FirstSample;
	int rozmiar;
	int Size1Chunk;

public:

	int i, j;
	int wartosc[48001];
	std::vector<int> tablica;
	std::vector<int> wektor;

//////////// KONSTRUKTOR WAVE'a //////////////////////////////////////

	Plik(int, short int, short int, float, std::string);

///////////// Funkcje ///////////////////////////////////////////////

	void wyswietl_menu();
	void wybor();

	void utworz_naglowek();
	void dopisz_funkcje(std::vector<int>&);
	void wpisz_rozmiar_do_naglowka();
	void properties();
};



class Funkcje :public Plik
{
private:

	long double x, y, p;
	int y_int;
	int fmax;
	int k, m;

public:

	int dziedzina;
	int A, f, ph, fm, fr_smp, delta, przesuwnik;
	double PI=acos(-1);

////////// KONSTRUKTOR FUNKCJI ///////////////////////////////////////

	Funkcje(Plik);

///////////// FUNKCJE ///////////////////////////////////////////////

	void parametry_sinusa();
	void parametry_impulsu();
	void parametry_szumu();

	void impuls_idealny(int, Plik, std::vector<int>&);
	void sumowanie_golden_ratio(std::vector<int>&);
	void sinus(float, float, float, std::vector<int>&);
	void sin_frame(int, std::vector<int>&);
	void suma_sinusoid(std::vector<int> &, Plik);
};
