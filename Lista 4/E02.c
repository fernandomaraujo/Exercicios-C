#include <stdio.h>

/* 	QUESTÃO 02: 
	Desenvolver um programa que calcule
	a soma dos números de 1 a N, sendo N um número 
	inteiro fornecido pelo usuário. */

int main(){

	int i, n, soma=0;
	
	printf("Informe N: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
		
		soma = soma+i;
	}
	
	printf("Soma de 1 a %d = %d", n, soma);
}
