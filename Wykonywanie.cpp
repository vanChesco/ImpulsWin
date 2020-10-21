#include <iostream>
#include <cstdlib>
#include <vector>
#include "Klasy.h"
#include <cmath>

//using namespace std;
/*
int main()
{
	Plik wav1(48000, 24, 1, 1, "Dziedziczenie");

	wav1.wyswietl_menu();

	wav1.utworz_naglowek();


////////////// Tworzenie wektora o dlugosci x sampli //////////////

	int dl_wek=wav1.dlugosc*wav1.SamplingRate;
	vector<int> wektor(dl_wek, 0);


/////////// Wykonanie funkcji na wektorze ////////////////////////

	Funkcje f1(wav1);

	Marker0:

	wav1.wybor();

	switch (wav1.i)
	{
	case 1:
		f1.parametry_impulsu();
		f1.impuls_idealny(f1.fm, wav1, wektor);
		break;
	case 2:
		f1.parametry_sinusa();
		f1.sinus(f1.A, f1.f, f1.ph, wektor);
		break;
	case 3:
		f1.sumowanie_golden_ratio(wektor);
		break;
	case 4:
		f1.sin_frame(2048, wektor);
		break;
	case 5:
		f1.parametry_szumu();
		f1.suma_sinusoid(wektor, wav1);
		break;
	case 6:
		wav1.properties();
		break;
	default:
		goto Marker0;
	}


///// Dopisywanie wygenerowanego wektora do pliku i finalizowanie naglowka /////////////

	wav1.dopisz_funkcje(wektor);
	wav1.wpisz_rozmiar_do_naglowka();

	return 0;
}
*/