#include <stdio.h>

int main(){

int a, b;
int wynik=0;

printf("Podaj a: "); scanf("%d", &a);
printf("Podaj b: "); scanf("%d", &b);

	for (int i = 0; i < b; ++i){
		wynik += a;
	}
	
	printf("Wynik mnozenia wynosi: %d\n", wynik);

return 0;
}
