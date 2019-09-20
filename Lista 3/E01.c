#include <stdio.h>

/* 	QUESTÃO 01: 
	Faça um programa que leia
	um número inteiro positivo N e exiba todos
	os múltiplos de Y inferiores a N, onde N e Y
	são fornecidos pelo usuário. */

int main() {
	
	int i, n, y;
	
	printf("Valor de N: ");
	scanf("%d", &n);
	
	printf("Valor de Y: ");
	scanf("%d", &y);
	
	// se o resto da divisão de um número por outro restar 0, então eles são múlitplos
	for(i=0;i<n;i++) {
		if(i%y==0) {
			printf("%d ", i);
		}
	}

}

