#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <time.h>

int main() {//komentarz
	/*

	//zadania na lekcji
	printf("Witaj \n");
	int a, b = 2; //%d
	float floatA = 3.321; //%f 4 bajty
	double doubleA = 3.123123; //%lf 8 bajtow
	//char znak='a'; //%c %s

	printf("Wartosc liczby b= %d\n", b);
	printf("Wartosc liczby floatA= %f\n", floatA);
	printf("Wartosc liczby doubleA= %lf\n", doubleA);
	//printf("Znak = %c\n", znak);
	//printf("Znak = %s\n", znak);

	printf("Podaj Liczbe:");
	scanf_s("%ds", &a);
	printf("Wczytana liczba %d:  \n",a);
	
	int a;
	printf("Podaj liczbe: "); //ctrl +d kopia lini
	scanf_s("%d",&a);
	if (a % 2 == 0) printf("Liczba parzysta\n");
	else printf("Liczba nieparzysta\n");
	

	//zadanie 1 - na lekcji

	int nralbumu;
	printf("\nPodaj swoj nr albumu studenta: ");
	scanf_s("%d", &nralbumu);
	printf("\nTwoj nr studenta to: %d",nralbumu);

	

	//zadanie 2
	int liczba;

	printf("\nPodaj Liczbe: ");
	scanf_s("%d", &liczba);
	if (liczba % 2 == 0) 
	{ 
		printf("Liczba jest parzysta\n"); 
	}
	else 
	{ 
		printf("Liczba jest nieparzysta\n"); 
	}

	

	//zadanie 3
	//+ - * / % - mod
	// < > <+ >= != ==
	// AND OR NOT && || ! &

	float a,b;
	printf("\nPodaj liczbe A: ");
	scanf_s("%f", &a);
	printf("\nPodaj Liczbe B: ");
	scanf_s("%f", &b);
	if (a > b) { //blok instrukcji
		printf("\nA jest wieksze od B");
	}
	else if (a == b) {
		printf("\nA jest rowne B");
	}
	else {
		printf("\nB jest wieksze od A");
	}

	

	//zadanie 4
	float a, b, c, d,wynik;
	printf("Liczenie sredniej arytmetycznej 4 liczb zmiennoprzecinkowych \n");
	printf("\nPodaj A: "); scanf_s("%f", &a);
	printf("\nPodaj B: "); scanf_s("%f", &b);
	printf("\nPodaj C: "); scanf_s("%f", &c);
	printf("\nPodaj D: "); scanf_s("%f", &d);
	wynik = (a + b + c + d) / 4;
	printf("Srednia arytmetyczna 4 liczb zmiennoprzecinkowych : %.2f",wynik);//dwa miejsca po przecinku w wyniku

	*/

	//zadanie 5 + dodatkowe

	int wybor;
	printf("======Kalkulator=====\n");
	printf("1.Suma\n");
	printf("2.Roznica\n");
	printf("3.Iloczyn\n");
	printf("4.Iloraz\n");
	printf("5.Pierwiastek kwadratowy\n");
	printf("6.Potegowanie\n");
	printf("7.Wartosc bezwzgledna\n");
	printf("8.Obliczanie SINUSA\n");
	printf("9.Obliczanie COSINUSA\n");
	printf("10.Obliczanie Tg\n");
	printf("11.Obliczanie Ctg\n");
	printf("12.Wyjscie\n");
	printf("===================\n");
	scanf_s("%d", &wybor);

	int a, b;
	double c, d;
	double PI = 3.141592653589;
	double wynik = 0;
	switch (wybor) {
	case 1: // ci¹g instrukcji 1
		printf("\nPodaj A: "); scanf_s("%d", &a);
		printf("\nPodaj B: "); scanf_s("%d", &b);
		printf("\nSuma %d + %d = %d", a, b, (a + b));
		break;
	case 2:
		printf("\nPodaj A: "); scanf_s("%d", &a);
		printf("\nPodaj B: "); scanf_s("%d", &b);
		printf("\nSuma %d - %d = %d", a, b, (a - b));
		break;
	case 3:
		printf("\nPodaj A: "); scanf_s("%d", &a);
		printf("\nPodaj B: "); scanf_s("%d", &b);
		printf("\nSuma %d * %d = %d", a, b, (a * b));
		break;
	case 4:
		printf("\nPodaj A: "); scanf_s("%lf", &c);
		printf("\nPodaj B: "); scanf_s("%lf", &d);
		if (d == 0) {
			printf("\nMianownik nie moze byc rowny 0");
			printf("\nZa B przyjmuje 1");
			printf("\nIloraz %.1lf / 1 = %.1lf", c, c);
		}
		else {
			printf("\nSuma %.2lf / %.2lf = %.2lf", c, d, (c / d));
		}
		break;
	case 12:
		printf("\nWyjscie");
		break;
	case 5:
		printf("\nPodaj liczbe: "); scanf_s("%lf", &c);
		printf("\nPierwiastek kwadratowy z %lf = %lf", c, sqrt(c));
		break;
	case 6:
		printf("\nPodaj podstawe potegi: "); scanf_s("%lf", &c);
		printf("\nPodaj wykladnik: "); scanf_s("%lf", &d);
		printf("\nPotega %.2lf do %.2lf = %lf", c, d, pow(c, d));
		break;
	case 7:
		printf("\nPodaj liczbe: "); scanf_s("%d", &a);
		printf("\nWartosc bezwzgledna z %d = %d", a, abs(a));
		break;
	case 8:
		printf("\nPodaj kat sin: "); scanf_s("%lf", &c);
		wynik = sin(c * (PI / 180.0));
		printf("\nSinus kata o mierze %.0lf wynosi %.2lf", c, wynik);
		break;
	case 9:
		printf("\nPodaj kat : "); scanf_s("%lf", &c);
		wynik = cos(c * (PI / 180.0));
		printf("\nCosinus kata o mierze %.0lf wynosi %.2lf", c, wynik);
		break;
	case 10:
		printf("\nPodaj kat : "); scanf_s("%lf", &c);
		wynik = tan(c * (PI / 180.0));
		printf("\nTangens kata o mierze %.0lf wynosi %.2lf", c, wynik);
		break;
	case 11:
		printf("\nPodaj kat : "); scanf_s("%lf", &c);
		wynik = 1 / tan(c * (PI / 180.0));
		printf("\nCoTangens kata o mierze %.0lf wynosi %.2lf", c, wynik);
		break;
	}


	return 0;
}//koniec main