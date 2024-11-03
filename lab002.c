#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <math.h>

int main() {

	/*

	printf("Petla for\n");
	printf("======================\n");
	//petle : while , do while, for, foreach;
	for (int i = 2; i < 8; i++) {
		printf("%d\t", i);
	}//wiemy ile razy wyswietlamy dany element

	printf("Petla while\n");
	printf("======================\n");
	int a = 0;
	while (a < 5) {//while(true) - petla nieskonczona
		printf("%d\t", a);
		a++;
	}
	printf("Wartosc a: %d",a);


	int a = 0;
	do//petla do while - najpierw wykonuje, poxniej sprawdza warunek
	{
		printf("%d\t", a);
		a++;
	} while (a < 5);

	for (int i = 0; i < 10; i++) {
		if (i == 7)break; // przerwanie dzia³ania gdy i=7;
		if (i % 2 == 0)continue; // pomin kod poni¿ej dla elementow parzystych
		printf("%d\n", i);
	}

	int licznik = 1;
	while (1) {
		printf("\nWykonanie petli numer: %d", licznik);
		licznik++;
		if (licznik > 10)break;
	}


	//zadanie 1
	float liczba, suma = 0, min, max,srednia=0;
	int i = 0;
	do
	{
		printf("\nPodaj liczbe : ");
		scanf_s("%f", &liczba);
		if (liczba > 0) {
			if (i == 0) {
				min = liczba;
				max = liczba;
			}
			else {
				if (min > liczba)min = liczba;
				else if (max < liczba)max = liczba;
			}
			suma += liczba; // suma=suma+liczba
		}
		i++;
	} while (liczba>0);

	if (i > 1) {
		i = i - 1;
	srednia = suma / (float)i;//rzutowanie zmiennej int na float
	printf("\nSrednia liczb: %f", srednia);
	printf("\nSuma liczb: %f", suma);
	printf("\nMAX wartosc: %f", max);
	printf("\nMIN wartosc: %f", min);
	}
	else printf("Nie podano liczb dodatnich");


	//zadanie 2
	float liczba, sumaplus = 0, sumaminus = 0;
	int iloscplus = 0, iloscminus = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("\nPodaj liczbe %d: ",i+1);
		scanf_s("%f", &liczba);
		if (liczba >= 0) {
			iloscplus = iloscplus + 1;
			sumaplus += liczba;
		}
		else {
			iloscminus = iloscminus + 1;
			sumaminus += liczba;
		}
	}
	printf("\nIlosc dodatnich: %d", iloscplus);
	printf("\nsuma dodatnich: %f", sumaplus);
	printf("\nIlosc ujemnych: %d", iloscminus);
	printf("\nsuma ujemnych: %f", sumaminus);



	//zadanie 3
	int ile;
	float liczba,suma=0;
	printf("Podaj ilosc elementow listy: ");
	scanf_s("%d", &ile);

	if (ile > 0) {
		for (int i = 0; i < ile; i++) {
			printf("\nPodaj %d liczbe: ", i + 1);
			scanf_s("%f", &liczba);
			suma += liczba;
		}
		printf("Suma elementow ci¹gu %d elementowego wynosi: %f", ile, suma);
	}
	else {
		printf("Za malo elementow listy ");
	}



	//zadanie 4

	int ile_liczb, liczba, suma = 0;
	printf("Podaj ile elementow chcesz wylosowac z zakresu (-10,45) : ");
	scanf_s("%d", &ile_liczb);

	if (ile_liczb > 0) {
		for (int i = 0; i < ile_liczb; i++) {
			liczba = rand() % 56 - 10;
			printf("%d Wylosowana liczba to: %d\n", i + 1, liczba);
			if (liczba % 2 == 0) { suma += liczba; }
		}
		printf("Suma parzystych elementow wynosi: %d", suma);
	}
	else {
		printf("\nBrak wylosowanych liczb");
	}


	//zadanie 5
	int studenci;
	int i = 0;
	float punkty, sredniaa, sumap=0;
	printf("Podaj ilosc studentow: "); scanf_s("%d", &studenci);

	if (studenci > 0) {
		while (i < studenci) {
			printf("\nPodaj punkty dla %d studenta :", i + 1); scanf_s("%f", &punkty);
			sumap += punkty;
			i++;

		}
		sredniaa = sumap / (float)studenci;
		printf("Srednia punktow grupy wynosi: %f", sredniaa);
	}
	else printf("\nBrak studentow");



	//zadanie 6
	for (int i = 0; i < 100; i++) {
		printf("%d ", i + 1);
	};
	printf("\n===============================================================\n");

	for (int i = 100; i >=0; i--) {
		printf("%d ", i);
	};
	printf("\n===============================================================\n");

	for (int i = 7; i < 78; i++) {
		if(i%7==0)printf("%d ", i);
	};
	printf("\n===============================================================\n");

	for (int i = 20; i >= 0; i--) {
		if (i % 2 == 0)printf("%d ", i);
	};
	printf("\n===============================================================\n");

	*/
	printf("\nOryginal\n");
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++)
			printf("X");
		printf("\n");
	}
	printf("\nPierwszy obrazek ===============================================================\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j <10-i; j++)
			printf("X");
		printf("\n");
	}
	printf("\nDrugi obrazek ===============================================================\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10 - 1-i; j++) {
			printf(" ");
		}
		for (j = 0; j <=i; j++) {
			printf("X");
		}
		printf("\n");
	}

	printf("\nTrzeci obrazek ===============================================================\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j <=i; j++) {
			printf(" ");
		}
		for (j = 0; j <10-i; j++) {
			printf("X");
		}
		printf("\n");
	}
	printf("\nCzwarty obrazek ===============================================================\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j <10- i; j++) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("XX");
		}
		printf("\n");
	}


	return 0;
};