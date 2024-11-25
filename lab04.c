#include <stdio.h>
#include <stdlib.h>
#include <string.h>// Biblioteka potrzebna do funkcji strcat
#include <ctype.h> // Dla funkcji tolower\toupper
//_CRT_SECURE_NO_WARNINGS


int main() {
	/*
	char myString[] = "Hello"; // inicjalizacja przez litera³ ³añcuchowy
	char myString1[] = { "Hello" };
	char myString2[] = { 'H', 'e','l','l','o','\0' }; //inicjalizacja zbiorcza
	char myString3[6] = { 'H', 'e','l','l','o' }; //inicjalizacja zbiorcza

	char znak = '1'; //znaki 
	char tekst[] = "Hello World";
	printf("%s\n",tekst);

	tekst[9] = 'a'; //podmiana 9 elementu na a
	printf("%s\n", tekst);

	//kopiowanie tekstu
	char output[50]; //na outpucie mamy tablice w ktorej moze byc 49 znakow
	char src[] = "Tekst do kopiowania";

	//kopiowanie (char'a) src do outputa
	strcpy(output, src); //_CRT_SECURE_NO_WARNINGS
	printf("Skopiowano napis: %s\t\n",output);


	//£¹czenie napisów
	char str1[50]="";// Inicjalizacja pustym ³añcuchem znaków
	char str2[] = "Jan";
	strcat(str1,str2);//do tablicy str1 doklej elementy z str2
	printf("Tekst po polaczeniu (konkatenacji): %s\n", str1);

	//porównywanie napisów
	char str3[] = "ala11";
	char str4[] = "ala12";
	int wynik = strcmp(str3, str4);
	if (wynik == 0)printf("napisy sa rowne\n");
	else if (wynik < 0)printf("Pierwszy napis jest mniejszy\n");
	else printf("pierwszy napis jest wiekszy\n");

	//sprawdzanie dlugoœci/ ilosci znaków
	char str5[] = "Ala ma kota, kot ma Aleeee";
	size_t dlugosc = strlen(str5);
	printf("Dlugosc napisu: %lu\n", dlugosc);

	//strchr()
	//strstr()
	
	//wprowadzanie tekstu do tablicy
	char str10[20];
	printf("Wprowadz tekst: ");
	//scanf("%49s",str1);//maksymalnie mo¿emy wprowadziæ 49 znakow bo ostatni element to \0 
	//scanf zczytuje do momentu wyst¹pieniu bia³ego elementu wiêc do pierwszej spacji 
	//gets(str1); //nie kontrolujemy ilosci wprowadzonych znakow 
	//fgets(str1, sizeof(str1), stdin); //poprawna metoda, zczytuje co najwy¿ej rozmiar sizeof()
	fgets(str10, sizeof(str10), stdin);
	printf("Wprowadzony napis to: %s\n", str10);

	////funckje strupr i strlwr
	//char a[] = "ALA";
	//char b[] = "ala";
	//printf_s("%s\n", strlwr(a));
	//printf_s("%s\n", strupr(b));

	//zadanie 1 
	printf("\n=============ZADANIE1==============\n");
	char zadanie1[50] = "";
	char zadanie1_2[50];
	printf("Wprowadz napis: ");
	fgets(zadanie1, sizeof(zadanie1), stdin);
	printf("Wprowadzony napis to: %s",zadanie1);
	strcpy(zadanie1_2,zadanie1);
	printf("Skopiowany napis to: %s", zadanie1_2);
	strcat(zadanie1, zadanie1_2);
	printf("Polaczony napis to: %s", zadanie1);
	size_t dlugosc_zad1 = strlen(zadanie1_2);
	printf("Dlugosc skopiowanego napisu: %lu\n", dlugosc_zad1);


	//zadanie 2

	char znak = 'a';
	printf("Literka -a- ma wartosc w kodzie ASCII: %d \n\n", znak);
	char az[] = "abcdefghijklmnopqrstuvwxyz";
	char AZ[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char num[] = "0123456789";
	
	
	printf("\n==========Kody ASCII dla znakow od a do z \n");
	for (int i = 0; i < strlen(az); i++)
	{
		printf("Znak -%c- ma kod:%d\n", az[i], az[i]);
	}
	printf("\n==========Kody ASCII dla znakow od A do Z \n");
	for (int i = 0; i < strlen(AZ); i++)
	{
		printf("Znak -%c- ma kod:%d\n", AZ[i], AZ[i]);
	}
	printf("\n=======Kody ASCII dla cyfr od 0 do 9	\n");
	for (int i = 0; i < strlen(num); i++)
	{
		printf("Cyfra -%c- ma kod:%d\n", num[i], num[i]);
	}

	//zadanie 3
	char tekst[150]; int samogloski = 0; int spolgloski = 0;
	//tworze liste wszystkich samoglosek
	char listasamoglosek[] = "aeiouyAEIOYU";
	printf("Wprowadz tekst: ");
	fgets(tekst, sizeof(tekst), stdin);
	for (int i = 0; tekst[i]!='\0'; i++)//wykonuj dopóki nie napotkasz znaku koñca \0
	{	//najpierw sprawdza czy element listy jest liter¹
		if (isalpha(tekst[i])) {
			if (strchr(listasamoglosek, tekst[i]))samogloski++;// Sprawda czy znak jest na liœcie samog³osek
			else spolgloski++;
		}
	}
	printf("Liczba spolglosek wynosi: %d\nLiczba samoglosek wynosi:%d\n", spolgloski, samogloski);
	
	
	//zadanie 4
	char tekst[55];
	printf("Podaj tekst: ");
	fgets(tekst, sizeof(tekst), stdin);
	printf("Wprowadzony napis: %s\n", tekst);
	size_t len = strlen(tekst);
	if (len > 0 && tekst[len - 1] == "\n") {//usuwa nowa linie po wpisanym tekscie \n
		tekst[len - 1] = '\0';
		len--;
	}
	printf("Odwracam napis i zamieniam male litery na duze: ");
	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c",toupper(tekst[i]));
	}


	//zadanie 5
	//const char cyfry[] = { "zero", "jeden", "dwa","trzy", "cztery", "piêæ", "szeœæ", "siedem", "osiem", "dziewiêæ" };
	char liczba[100];
	printf("\nPodaj liczbe: ");
	fgets(liczba, sizeof(liczba), stdin);
	printf("Podana liczba to: %s\n", liczba);

	//funcje (void) - z laba5 opcjonalnie
	int dlugosc = strlen(liczba);//usuniecie znaku nowej lini wczytanej przez fgets
	if (liczba[dlugosc - 1] == '\n') {
		liczba[dlugosc - 1] = '\0';
		dlugosc--;
	}
	printf("Dlugosc napisu: %lu\n", dlugosc);

	for (int i = 0; i < dlugosc; i++)
	{
		switch (liczba[i]) { 
		case '0': printf("zero "); break;
		case '1': printf("jeden "); break;
		case '2': printf("dwa "); break;
		case '3': printf("trzy "); break;
		case '4': printf("cztery "); break;
		case '5': printf("piec "); break;
		case '6': printf("szesc "); break;
		case '7': printf("siedem "); break;
		case '8': printf("osiem "); break;
		case '9': printf("dziewiec "); break;
		default: break; //jesli znak nie bedzie cyfra przechodzi do nastêpnego znaku
		}
	}
	*/
	
	//zadanie 6
	printf("\n============= ZADANIE 6 ==============\n");
	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "zyxwvutsrqponmlkjihgfedcba";
	char zadanie[100];
	char output[100]="";
	printf("Wprowadz napis: ");
	fgets(zadanie, sizeof(zadanie), stdin);
	printf("Wprowadzony napis to: %s", zadanie);

	int dlugosc = strlen(zadanie);
	int s1_length = strlen(s1);
	if (zadanie[dlugosc - 1] == '\n') {
		zadanie[dlugosc - 1] = '\0'; 
		dlugosc--;
	}
	for (int i = 0; zadanie[i] != '\0'; i++)//dziala do momentu zakonczenia tablicy znakow \0
	{
		int problem = 0;
		for (int j = 0; j < s1_length; j++)
		{
			if (zadanie[i] == s1[j]) {
				output[i] = s2[j];
				problem = 1;
				break;
			}
		}
		if (!problem) output[i] = zadanie[i];//jeœli zmienna problem NIE jest rowna 0 nastepuje kopiowanie znaku nie znalezionego w s1
	}
	output[dlugosc] = '\0'; // Zakoñczenie ci¹gu znaków
	printf("Przetworzony ciag: %s", output);



	return 0;
}