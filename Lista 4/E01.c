#include <stdio.h>

/* 	QUEST�O 01: 
	Dado um n�mero inteiro N, fazer um programa que exiba
	os n�meros pares iguais ou inferiores a N. */

int main(){

	int i, n;
	
	printf("Informe N: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
		// n�meros pares
		if(i%2==0){
			printf("%d ", i);
		}
	}
}
