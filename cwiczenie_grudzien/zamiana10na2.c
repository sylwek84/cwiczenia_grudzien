#include <stdio.h>

int main(){

int liczba;

printf("Podaj liczbe do konwersji systemu 10-tnego na binarny: \n");
scanf("%d", &liczba);
	
	printf("Wynik: ");

	if (liczba == 0){
		printf("0\n");
		return 0;
	}

	while (liczba / 2 != 0){
		printf("%d ", liczba % 2);
		liczba /=2;
	}

		printf("1\n");
return 0;

}
