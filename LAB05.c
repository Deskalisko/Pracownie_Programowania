#include <stdio.h> //Standardowa biblioteka wejœcia/wyjœcia.
#include <string.h>// Zawiera funkcje takie jak strlen, strcpy, strcat, strcmp, strchr itp.
#include <stdlib.h>//Zawiera funkcje takie jak malloc, free, atoi, rand, srand itp.
#include <ctype.h>//Zawiera funkcje takie jak isdigit, isalpha, isalnum, toupper, tolower itp.
#include <time.h>//Zawiera funkcje takie jak time, ctime, difftime, clock, localtime itp.
#include <Windows.h>//awiera definicje i deklaracje dla funkcji specyficznych dla systemu Windows, takich jak manipulacja oknami, operacje na plikach, synchronizacja w¹tków itp.
#include <math.h>//Zawiera funkcje takie jak sqrt, pow, sin, cos, tan, exp, log itp.
//_CRT_SECURE_NO_WARNINGS

//funkcje deklarujemy przed main
//typ funkcji :void nazwa_f
void View(); //deklaracja funkcji 

int suma(int a, int b);
int InputInt();

int silnia(int n);//rekurencja (funkcja)

void wypiszTAB(int arr[], int n);//przekazywanie tablic do funkcji
void licznik();
int zadanie2();
int NWD();
int wynik();
void binary();
int fibona();
int Fun();

int main() {
	/*
	//funkcje -u¿ywamy aby grupowaæ/definiowaæ dane fragmenty kodu i wykorzystywaæ je w programie

	View();//wywo³anie funkcji
	for (int i = 0; i <1;  i++)
	{
		View();
	}
	for (int i = 0; i < 5; i++)
	{
		printf("Suma = %d + %d = %d\n", i, i + 1, suma(i, i + 1));
	}
	int a = InputInt();
	int b = InputInt();
	printf("suma wynosi: %d\n", suma(a, b));

	//Funkcja rekurencyjna to funkcja, która wywo³uje sam¹ siebie w swoim ciele.
	// Rekurencja jest czêsto u¿ywana do rozwi¹zywania problemów, które mo¿na podzieliæ na mniejsze, 
	// podobne podproblemy.Ka¿de wywo³anie funkcji rekurencyjnej przetwarza podproblem, 
	// a¿ do osi¹gniêcia przypadków bazowych, które nie wywo³uj¹ ju¿ funkcji rekurencyjnej.

	int ag = InputInt();
	if (ag >= 0) printf("Silnia %d = %d\n", ag, silnia(ag));
	else printf("Silnia moze byc tylko dodatnia\n");


	licznik(); //zmienna statyczna
	licznik();

	//zadanie 1 
	int abez = InputInt();
	if (abez >= 0) printf("Silnia %d = %d", abez, silnia(abez));
	else printf("Silnia moze byc tylko dodatnia");
	

	//zadanie 2
	for (int i = 0; i < 3; i++)//w celu sprawdzenia dzia³ania zrobi³em pêtle
	{
		int a = InputInt();
		if (a >= 1)printf("%d wyraz ciagu wynosi: %d\n", a, zadanie2(a));
		else printf("Brak rozwiazan dla takiego n\n");
	}
	
	//zadanie 3
	int c = InputInt();
	int d = InputInt();
	printf("NWD liczby %d i %d wynosi: %d\n", c, d, NWD(c, d));
	
	//zadanie 4

	int a = InputInt();
	printf("wynikiem funkcji jest: %d\n", wynik(a));

	//dodatkowo dla mnie 
	int tab[7];
	for (int i = 2; i <=8; i++)
	{
		tab[i - 2] = wynik(i);
		printf("%d el.= %d\n", i,tab[i - 2]);
	}
	
	//zadanie 5 
	printf("Zamiana liczby z systemu 10 na system binarny\n");
	int a = InputInt();
	printf("Liczba %d w systemie 2 to: ", a); binary(a);

	
	//zadanie 6
	int a;
	printf("Podaj n pierwszych elementow ciagu fibonacciego: ");
	scanf("%d", &a);
	printf("%d\n", fibona(a));
	for (int j = 0; j < 5; j++)
	{
		printf("\n%d\n", fibona(j));
	}
	

	//zadanie 8
	for (int i = 0; i < 5; i++)
	{
		int x, n;
		printf("Podaj x : ");
		scanf("%d", &x);
		printf("\nPodaj n (dodatnia liczba calkowita): ");
		scanf("%d", &n);
		if (n > 0) {
			printf("Wynik Funkcji F(%d,%d): %d\n", x, n, Fun(x, n));
		}
		else printf("\ndruga liczba (n) musi byc dodatnia\n");
	}
	*/
	



	return 0;
}

int Fun(int x, int n) {
	if (n == 1) return x;
	else if (n % 3 == 0) {
		int k = Fun(x, n / 3);
		return k * k * k;
	}
	else {
		return x * Fun(x, n - 1);
	}
}

int fibona(int fibo) {
	if (fibo == 0) return 0;
	else if (fibo == 1)return 1;
	else if (fibo > 1) return fibona(fibo - 2) + fibona(fibo - 1);
}


void binary(int bin) {
	if (bin > 1) {
		binary(bin / 2);
	}
	printf("%d", bin % 2);
}


int wynik(int i) {
	if (i < 3) return 1;
	else if (i % 2 == 0) return wynik(i - 3) + wynik(i - 1) + 1;
	else return wynik(i - 1) % 7;
};

//int NWD(int a,int b) {
//	if (b == 0) return a;
//	else return NWD(b, a%b);
//}

int NWD(int a, int b) {
	if (a == b) return a;
	else if (a > b)return NWD(a - b, b);
	else return NWD(a, b - a);
}


int zadanie2(int n) {
	if (n == 1)	return -1;
	else return -zadanie2(n - 1) * n-2;
};

//implementacja funkcji
void View() {
	printf("Witaj!\n");//cia³o funkcji
}

int suma(int a, int b) {
	return a + b;
}

int InputInt() {
	int value;
	printf("Podaj liczbe: ");
	scanf_s("%d", &value);
	return value;
}

int silnia(int n) {
	if (n == 0)return 1;
	return n * silnia(n - 1);
};

void wypiszTAB(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
}

void licznik() {
	static int a = 0; //zadklerowana statycznie, istnieje przez caly czas dzialania programu, a kazde wywolanie zwieksza jej wartosc o 1, ale nie inicjuje jej wartosci od poczatku a=0;
	a++;
	printf("Liczba: %d\n", a);
}
