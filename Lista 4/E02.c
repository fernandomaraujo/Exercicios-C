#include <stdio.h>

/* 	QUEST�O 02: 
	Desenvolver um programa que calcule
	a soma dos n�meros de 1 a N, sendo N um n�mero 
	inteiro fornecido pelo usu�rio. */

int main(){

	int i, n, soma=0;
	
	printf("Informe N: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
		
		soma = soma+i;
	}
	
	printf("Soma de 1 a %d = %d", n, soma);
}
