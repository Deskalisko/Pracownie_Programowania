#include <stdio.h>
#include <time.h>
#include <string.h> // biblioteki do 
#include <stdlib.h> // tablic
#define ROZMIAR 20 // sta³a preprocesorowa do zadania 3 
#define NELEMENT 15 // do zadania 4 i 5 

//zmienne globalne
const int roz = 10; //sta³a zmienna której nie mo¿na zmieniæ

int main() { //tablice
	/*
	int tabInt[5]; // w nawiasach [] podajemy rozmiar tablicy
	int tabInt[5] = {-31,22,43,65,234}; //deklaracja tablicy wraz z inicjalizacj¹ wartoœci
	int tabInt[] = {-31,22,43,65,234}; //mo¿na pomin¹æ rozmiar tablicy
	// indeksujemy od 0 1  2  3  4  , pi¹ty element to indeks 4

	int macierz[3][3]; //macierz 3 na 3 elementy


	int tabInt[5] = { -31,22,43,65,234 };
	printf("%d", tabInt[0]);
	tabInt[2] = 23;

	for (int i = 0; i < 5; i++) {
		printf("Element o indexie [%d] = \t %d \n",i, tabInt[i]);
	}

	int tab[100];
	int tabCopy[100];
	memset(tab, 0, sizeof(tab)); //funkcja która pozwala uzupe³niæ tablice (jak¹, czym, i rozmiar)
	printf("%d", sizeof(tab)); // sizeof zwraca rozmiar tablicy w bajtach
	printf("\n%d", sizeof(tab[0])); // pierwszy element ma 4 bajty
	printf("\n dlugosc tablicy %d", (sizeof(tab)/sizeof(tab[0])); //ilosc elementow tablicy
	memcpy(tabCopy, tab, sizeof(tab)); //kopia ca³ej tablicy


	//zadanie 1- na lekcji

	int arr[10],x=3;
	int lenghtArr = sizeof(arr) / sizeof(arr[0]); //dlugosc tablicy
	printf("Elementy tablicy: \n");
	for (int i = 0; i < lenghtArr; i++)
	{
		arr[i] = x;
		printf("%d ", arr[i]);
		x += 3;
	}
	//for each //nie wystepuje w C, w c++ jest


	//zadanie 2
	int arr[10], x = 3;
	int lenghtArr = sizeof(arr) / sizeof(arr[0]); //dlugosc tablicy
	printf("Elementy tablicy: \n");
	for (int i = 0; i < lenghtArr; i++)
	{
		arr[i] = x;
		if(i%2==0)printf("%d ", arr[i]);
		x += 3;
	}


	//zadanie 3

	int a;
	//const int n = 25;
	//printf("Podaj rozmiar tablicy: "); scanf_s("%d",&n);
	printf("\nPodaj wartosc A: "); scanf_s("%d", &a);
	int tab[ROZMIAR];
	for (int i = ROZMIAR - 1; i >= 0; i--)
	{
		tab[i] = a;
		a -= 5;
	}
	for (int i = 0; i < ROZMIAR; i++)
	{
		printf("\n Element tablicy %d = %d", i + 1, tab[i]);
	}
	
	//zadanie 4 
	//zmienna N -elementow jest zdefiniowana wy¿ej.
	srand(time(NULL));
	int tab[NELEMENT],min;
	for (int i = 0; i < NELEMENT; i++)
	{	
		tab[i] = rand() % 74 - 23;
		printf("%d.Element tablicy n-elementowej wynosi: %d\n",i+1,tab[i]);
		if (i==0)min = tab[i];
		else if (min > tab[i])min = tab[i];
	}
	printf("\nMinimalna wylosowana wartosc w tablicy :%d\n", min);
	

	//zadanie 5

	int tab[NELEMENT],a,b;
	printf("Podaj pierwsza wartosc tablicy: "); scanf_s("%d",&a);
	printf("\nPodaj druga wartosc tablicy: "); scanf_s("%d",&b);
	tab[0] = a;	tab[1] = b;
	for (int i = 2; i < NELEMENT; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
	}
	for (int i = 0; i < NELEMENT; i++)
	{
		printf("%d .Element tablicy wynosi: %d\n",i+1,tab[i]);
	}
	

	//zadanie 6

	int tab[20] = {9,8,7,6,5,4,3,2,1,0};

	for (int i = 0; i < 10; i++)
	{
		tab[i+10]=tab[i];
	}

	for (int i = 0; i < 20; i++)
	{
		printf("%d .Element tablicy wynosi: %d\n",i+1,tab[i]);
	}
	
	//zadanie 7
	//int wiersze = 3, kolumny = 3; 
	int suma = 0;
	int tab2D[3][3] = { 55,1,1,2,55,2,3,3,55 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if(i==j)suma += tab2D[i][j];
		}
	}
	printf("Suma przekatnej tablicy wynosi: %d",suma);
	*/


	//zadanie 8
	int tab1[3][3] = { 11,12,13,21,22,23,31,32,33 };
	int tab2[3][3] = { 1,2,3,1,2,3,1,2,7 };
	int tabdodany[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			tabdodany[i][j] = tab1[i][j]+tab2[i][j];
		}
	}
	printf("Macierz po dodaniu wyglada nastepujaco\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d \t", tabdodany[i][j]);
		}
		printf("\n");
	}

	return 0;
}