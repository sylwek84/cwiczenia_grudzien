#include <stdio.h>

int main(){

int a=0;
int b=1;
int c;

int index;

printf("Podaj indeks w ciagu Fibonacciego: ");
scanf("%d", &index);

	for (int i=0; i<index; ++i){
		c=a+b;
		a=b;
		b=c;
		}

printf("%d wyraz ciagu fibonacciego wynosi: %d", index, a);

return 0;

}
