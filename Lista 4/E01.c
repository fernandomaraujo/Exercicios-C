#include <stdio.h>

/* 	QUESTÃO 01: 
	Dado um número inteiro N, fazer um programa que exiba
	os números pares iguais ou inferiores a N. */

int main(){

	int i, n;
	
	printf("Informe N: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
		// números pares
		if(i%2==0){
			printf("%d ", i);
		}
	}
}
