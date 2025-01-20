#include <stdio.h> // wejúcia/wyjúcia.
#include <string.h>//strlen, strcpy, strcat, strcmp, strchr itp.
#include <stdlib.h>//malloc, free, atoi, rand, srand itp.
#include <ctype.h>// toupper, tolower itp.
#include <time.h>//Zawiera funkcje takie jak time, ctime, difftime, clock, localtime itp.
#include <math.h>//sqrt, pow, sin, cos, tan, exp, log itp.
//_CRT_SECURE_NO_WARNINGS

void suma(int* a, int* b, int* wynik) {
	*wynik = *a + *b;
}
void ZwiekszLiczbe(int* liczba);
void zwieksz_kilka(int* dl, int* wys, int* waga);
void roznica(int* a, int* b, int* wynik);
void sredniazad(int* a, int* b, int* c, int *wynik);
int InputInt();
int kwadratliczby(int* a);
int* potegowe(int* podstawa, int* wykladnik);
void wypianieznaku(int* ile, char* znak);
int* mniejszaliczb(int* a, int* b);
void podmiana(int* a, int* b);


int main() {
	//zmienna wskaünikowa bÍdzie wskazywa≥a adres w pamieci komputera

	//int a = 5;
	//int* wsk;//definicja wskaünika / zmienna wskaünikowa
	//wsk = &a;//przypisuje adres zmiennej a do wskaünika
	//printf("Wartosc a: %d\n", a);
	//printf("Adres a: %p\n", &a); // %p do adresu zmiennej a 
	//printf("Adres przechowywany we wskaüniku : %p\n", wsk);
	//printf("Wartosc wskazywana przez wskaznik wsk: %d\n", *wsk);

	//operacje na wskaünikach 
	//// & -uzyskanie adresu zmiennej							//adres
	//printf("Adres przechowywany we wskaüniku : %p\n", wsk);
	//// * - uzyskanie wartoúci przechowywanej pod adresem	//wartosc
	//printf("Wartosc wskazywana przez wskaznik wsk: %d\n", *wsk);

	//przypisywanie wartoúci '
	//int c = 25;
	//printf("\nc = %d", c);
	//int* wsk = &c;
	//*wsk = 30;
	//printf("\nPo zmianie c = %d", c);

	//tablice
	//int tab[] = { 1,22,35,4,5,6,7,8,9 };
	//int* ptrTab = tab;//wskaünik na poczπtek tablicy;
	//printf("%d\n", *ptrTab); //wyskakuje tylko 1 element
	//printf("%d\n", *(ptrTab + 1));//wyskakuje 2 element
	//printf("%d\n", *ptrTab + 2);//tez poprawny zapis, wyskakuje 3 element

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("tab[%d] = %d\n", i, *(ptrTab + i));//tutaj musi byc nawias 
	//}

	//wskaüniki do dynamicznego przydzielania pamieci 
	//funkcje malloc,calloc,free
	//int* tab1;
	//int n;
	//printf("\nPodaj ilosc elementow tablicy: ");
	//scanf_s("%d", &n);
	////alokowanie pamieci dla n elementow w tablicy 
	//tab1 = (int*)malloc(n * sizeof(int));
	////tab1 = (int*)calloc(n, sizeof(int));

	//if (tab1 == NULL) {
	//	printf("Blad alokacji pamieci\n"); 
	//	return 1;
	//}

	////przypisanie i wyswietlenie wartosci do tablicy 
	//for (int i = 0; i < n; i++)
	//{
	//	tab1[i] = i * 10;//funkcja malloc 
	//	printf("\ntab1[%d] = %d", i + 1, tab1[i]);
	//}

	////zwolnienie pamieci na koniec programu
	//free(tab1);

	//sumowanie elementow 
	//int g = 2, h = 12, wynik=0;
	//suma(&g, &h, &wynik);
	//printf("\nsuma: %d\n", wynik);

	//przyklad 1
	//int i, * p = &i;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", *p); // wypisze wartosci od 0 do 9 
	//}

	//przyklad 2 //wypisywanie elementow z tablicy - wsyzstkie robiπ to samo 
	//int i, *wsk, a[5] = { 1,2,3,4,5 };
	//wsk = a;
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d\t", a[i]);
	//}
	//printf("\n");
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d\t", *(wsk+i));
	//}
	//printf("\n");
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d\t", wsk[i]);
	//}
	//printf("\n");


	//przyklad 3 // funckcja toupper ze zmienna wskaünikowπ 
	//char* wsk, ph[100];
	//printf("Wprowadz fraze\n");
	//fgets(ph, sizeof(ph), stdin);
	//wsk = ph;
	//while (*wsk)
	//{
	//	*wsk = toupper(*wsk);
	//	*wsk++;
	//}
	//printf("%s\n", ph);

	//przyklad 4 
	//char* a = "Koniec";
	//char tablica[30];
	//do
	//{
	//	printf("Wpisz slowo\n");
	//	//fgets(tablica, sizeof(tablica), stdin);
	//	gets(tablica);
	//} while (strcmp(a,tablica));//bÍdzie dzia≥aÊ pÛki nie wpisze Koniec

	//przyklad 5
	//int i, j, punkty[4][5];
	//for (i = 0; i < 4; i++)
	//{
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d kwarta, %d zawodnik\n", i + 1, j + 1);
	//		printf("ile punktow?\n");
	//		scanf("%d", *(punkty + i) + j);
	//	}
	//}
	//printf("\n\n");
	//for (i = 0; i < 4; i++)
	//{
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d kwarta, %d zawodnik", i + 1, j + 1);
	//		printf(" %d punktow\n", *(*(punkty + i) + j));
	//	}
	//}

	//przyklad 7
	//int a=0, * wsk, ** wsk2;
	//printf("wartosc  a: %d\n", a);
	//wsk = &a;
	//wsk2 = &wsk;
	//printf("podaj wartosc\n");
	//scanf("%d", *wsk2);
	//printf("wartosc zmniennej a: %d\n", **wsk2);
	//printf("wartosc zmniennej a: %d\n", a);



	//przyklad8 wskaüniki i funkcje 
	//int numer = 6;
	//printf("\n%d", numer);
	//int* wsk = &numer;
	//ZwiekszLiczbe(wsk);//przekazujemy wskaünik (bez operatorÛw)
	//printf("\n%d", numer);
	//ZwiekszLiczbe(&numer); //przekazujemy bezpoúrednio adres zmiennej (operator &)
	//printf("\n%d", numer);

	//part 2
	//int dlugosc = 125;
	//int wysokosc = 325;
	//int waga = 15;
	//printf("\nPrzed");
	//printf("\n%d", dlugosc);
	//printf("\n%d", wysokosc);
	//printf("\n%d", waga);
	//// wywo≥anie funkcji z (&) (tak jak byúmy przekazywali wskaüniki)
	//zwieksz_kilka(&dlugosc, &wysokosc, &waga);
	//// wyúwietlenie nowych wartoúci
	//printf("\n\nPO");
	//printf("\n%d", dlugosc);
	//printf("\n%d", wysokosc);
	//printf("\n%d", waga);

	//zadanie1
	// 
	//int* wsk;
	//int a = 5;
	//wsk = &a;
	//printf("Adres zmiennej a  = %p\n", &a);
	//printf("Adres przechowywany we wskaüniku : %p\n", wsk);
	//printf("Wartosc wskazywana przez wskaznik wsk: %d\n", *wsk);
	////rÛznica elementow 
	//int c = 7, d = 5, wynik;
	//roznica(&c, &d, &wynik);
	//printf("\nRoznica: %d\n", wynik);
	//int* ptr1,*ptr2;
	//ptr1 = &c;
	//ptr2 = &d;
	//printf("Podaj wartosc a\n");
	//scanf_s("%d", ptr1);
	//printf("Podaj wartosc b\n");
	//scanf_s("%d", ptr2);
	//roznica(&c, &d, &wynik);
	//printf("\nRoznica: %d\n", wynik);
	////srednia 3 liczb 
	//int p=5, q=4, r=3,wynik1;
	//sredniazad(&p, &q, &r, &wynik1);
	//printf("\nSrednia liczb wynosi: %d", wynik1);


	////zadanie 2
	//int tab[] = { 1,22,35,4,5,6,7,8,9 };
	//int* ptrTab = tab;
	//printf("\nAdres pierwszego elementu: %p", ptrTab);
	//printf("\nAdres pierwszego elementu: %p", (void*)ptrTab);// to samo 
	//printf("\nAdres czwartego elementu: %p", (void*)(ptrTab+3));
	//
	//srand(time(NULL));
	//int n, min, max;
	//printf("\nPodaj liczbe elementow tablicy: "); 
	//scanf("%d", &n);
	//int* tablica = (int*)malloc(n * sizeof(int));//alokowanie pamieci dla n elementow w tablicy 
	//if (tablica == NULL) {
	//	printf("\nBlad alokacji pamieci.\n"); 
	//	return 1;
	//}
	//printf("\nPodaj przedzial z ktorego maja byc wylosowane liczby do tablicy");
	//printf("\nGorny zakres:");
	//scanf_s("%d", &max);
	//printf("\nDolny zakres:");
	//scanf_s("%d", &min);

	//for (int i = 0; i < n; i++)
	//{
	//	tablica[i] = rand() % (max - min + 1) + min;
	//}
	//printf("\nAdresy poszczegÛlnych elementow tablicy:\n ");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d. Element tablicy ma adres: %p\n", i+1, (void*)&tablica[i]);
	//}

	//free(tablica);// Zwolnienie przydzielonej pamiÍci

	//zadanie 3
	//int n;
	//float suma = 0, srednia;

	//printf("\nPodaj liczbe elementow tablicy: ");
	//scanf_s("%d", &n);
	//// Dynamiczne przydzielanie pamiÍci dla tablicy
	//int* tablica = (int*)malloc(n * sizeof(int));
	//if (tablica == NULL) {
	//	printf("Blad alokacji pamieci");
	//	return 1; 
	//}
	//printf("\nPodaj elementy tablicy: ");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("\nPodaj %d element tablicy: ", i + 1);
	//	scanf_s("%d", (tablica+i));
	//	suma += *(tablica + i);
	//}
	//srednia = suma / n;
	//printf("\nSrednia wynosi: %f", srednia);

	//printf("\nElementy wieksze od sredniej:\n");
	//for (int i = 0; i < n; i++)
	//{
	//	if (*(tablica + i) > srednia)printf("%d.Element = %d, jest wiekszy od sredniej\n", i + 1, *(tablica + i));
	//}

	//free(tablica);


	//zadanie 4
	//int a;
	//printf("Podaj liczbe: "); 
	//scanf_s("%d", &a);
	//printf("Kwadratem liczby %d jest %d \n", a, kwadratliczby(&a));

	////zadanie 5 
	//int liczba, potega;
	//printf("Podaj liczbe: ");
	//scanf_s("%d", &liczba);
	//printf("Podaj potege: ");
	//scanf_s("%d", &potega);
	//int* wynik = potegowe(&liczba, &potega);
	//if (wynik!=NULL) {
	//	printf("\n%d podniesiona do %d potegi = %d\n ", liczba, potega, *wynik);
	//	free(wynik);
	//}

	//zadanie6
	//int ile;
	//char znak;
	//printf("\nIle razy? :");
	//scanf_s("%d", &ile);
	//printf("\nPodaj znak:");
	//scanf(" %c", &znak);
	//wypianieznaku(&ile,&znak);

	//zadanie7
	//int a, b;
	//printf("\nPodaj pierwsza liczb "); 
	//scanf_s("%d", &a); 
	//printf("\nPodaj druga liczbe "); 
	//scanf_s("%d", &b);
	//int* mniejsza = mniejszaliczb(&a, &b);
	//printf("Mniejsza liczba to %d", mniejsza);


	//zadanie8
	int a = 15, b = 12;
	podmiana(&a, &b);
	printf("Po zamianie x= %d, y= %d\n", a,b);


	






	return 0;
}
void podmiana(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int* mniejszaliczb(int* a, int* b) {
	if (*a > *b)return *b;
	else return *a;
}

void wypianieznaku(int* ile, char* znak) {
	for (int i = 0; i < *ile; i++)
	{
		printf("%c \t", *znak);
	}
	printf("\n");
	(*ile)--;
}

int* potegowe(int* podstawa, int* wykladnik) {
	int* wynik = (int*)malloc(sizeof(int));
	if (wynik != NULL) { 
		*wynik = (int)pow(*podstawa, *wykladnik);
	}
	return wynik;
}


int kwadratliczby(int* a) {
	return (*a) * (*a);
}


int InputInt() {
	int value;
	printf("Podaj liczbe: ");
	scanf_s("%d", &value);
	return value;
}

void sredniazad(int* a, int* b, int* c, int* wynik) {
	*wynik = (*a + *b + *c) / 3;
}


void roznica(int* a, int* b, int* wynik) {
	*wynik = *a - *b;
}


void zwieksz_kilka(int* dl, int* wys, int* waga)
{
	// zmienna '*dl', '*wys' i '*waga' nie sπ kopiami
	// operowanie na nich zmienia ich wartoúÊ w "ca≥ym" programie
	// funkcja nie zwraca nic - bo nie ma sensu
	*dl = *dl * 2;
	*wys = *wys * 2;
	*waga = *waga * 2;
}

void ZwiekszLiczbe(int* liczba) {
	*liczba += 5;
}