#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include "Klasy.h"

//using namespace std;


//|||||||||||||||||| KONSTRUKTOR WAVE'a |||||||||||||||||||||||||||||||||||||||||||


Plik::Plik(int Sampling, short int Bity, short int Chan, float dl, std::string filename)
{
	SamplingRate=Sampling;
	Bits=Bity;
	Channels=Chan;
	dlugosc=dl;

	ext="wav";
	nazwa_pliku=filename+"."+ext;
}


/////////////////// Funkcja zapisujaca naglowek pliku wav /////////////////////////

void Plik::utworz_naglowek()
{
	/////////// Utworzenie nowego pliku ///////////////////////////

	std::ofstream plik;

	plik.open(nazwa_pliku.c_str(), std::ios_base::trunc);
	plik.close();


		//przestawienie na zapis binarny i dopisywanie danych

	plik.open(nazwa_pliku.c_str(), std::ios_base::binary | std::ios_base::app);


		//Zapis poczatku RIFF

	plik << "RIFF";


		// Dopisanie rozmiaru pliku (wstepnie; finalna wartosc dodawana jest w funkcji dopisz_rozmiar_do_naglowka) /////////

	rozmiar=36+dlugosc*SamplingRate*Channels*Bits/8;
	plik.write((const char*)&rozmiar, sizeof rozmiar);


		// Dopisanie typu pliku WAVE

	plik << "WAVE";
	plik << "fmt ";


		// Rozmiar fragmentu zawierajacego naglowek (zazwyczaj 16)

	format_chunk=16;
	plik.write((const char*)&format_chunk, sizeof format_chunk);


		// Okreslenie metody kompresji (PCM nieskompresowany = 01)

	compression=1;
	plik.write((const char*)&compression, sizeof compression);

		// Okreslenie ilosci kanalow (od 1 do 8)

	plik.write((const char*)&Channels, sizeof Channels);


		// Czestotliwosc probkowania

	plik.write((const char*)&SamplingRate, sizeof SamplingRate);


		// Œrednio bitow na sekunde

	BytesPerSecond=SamplingRate*(Bits/8)*Channels;
	plik.write((const char*)&BytesPerSecond, sizeof BytesPerSecond);


		// BlockAlign - blok danych zlozony z liczby kanalow pomnozonej przez ilosc bitow potrzebnych do zapisu jednej sampli

	BlockAlign=(Bits/8)*Channels;
	plik.write((const char*)&BlockAlign, sizeof BlockAlign);


		// Rozdzielczosc bitowa

	plik.write((const char*)&Bits, sizeof Bits);


		// Oznaczenie poczatku bloku danych

	plik << "data";


		// Deklaracja wielkosci bloku danych dla 'dlugosc' sekundy ???

	DataChunkSize=dlugosc*SamplingRate*Channels*Bits/8;
	plik.write((const char*)&DataChunkSize, sizeof DataChunkSize);


		// Pierwsza sampla zerowa

	FirstSample=0;
	for (j=1; j<=Channels; j++)
	{
		plik.write((const char*)&FirstSample, sizeof FirstSample-(4-Bits/8));
	}

	plik.close();
}


///////////////// Funkcja dopisujaca wektor danych do pliku ///////////////////////

void Plik::dopisz_funkcje(std::vector<int> &fx)
{
	std::ofstream plik;
	plik.open(nazwa_pliku.c_str(), std::ios_base::binary | std::ios_base::app);
	for (i=1; i<=SamplingRate*dlugosc-1; i++)
	{
		for (j=1; j<=Channels; j++)
			plik.write((const char*)&fx[i], sizeof fx[i]-(4-Bits/8));
	}
	plik.close();
}


/////////// Funkcja finalizyjaca naglowek pliku wav //////////////////////////////

void Plik::wpisz_rozmiar_do_naglowka()
{
	Size1Chunk=dlugosc*SamplingRate*Channels*Bits/8+36;

	std::ofstream plik;
	plik.open(nazwa_pliku.c_str(), std::ios_base::binary | std::ios_base::in | std::ios_base::out);
	plik.seekp(4, std::ios_base::beg);
	plik.write((const char*)&Size1Chunk,4);
	plik.close();

	system("cls");
	std::cout << std::endl << "      Plik " << nazwa_pliku << " zostal wygenerowany pomyslnie." << std::endl << std::endl;
}


//////////// Funkcja oczytująca dane naglowka pliku wave //////////////////////////

void Plik::properties()
{
	//cout << "Podaj nazwe pliku .wav:";
	//cin >> filename;
	nazwa_pliku=filename+"."+ext;

	std::ifstream plik;
	plik.open("123.wav", std::ios_base::binary | std::ios_base::in);

	plik.seekg(5, std::ios_base::beg);
	plik >> Size1Chunk;
	std::cout << Size1Chunk;

	plik.close();

}
