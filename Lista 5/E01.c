#include <stdio.h>

/* 	QUESTÃO 01: 
	Faça um programa que leia
	um número inteiro x e, em seguida, solicite
	ao usuário outros 50 valores inteiros. Ao
	final, o programa deve exibir o total de
	múltiplos de x fornecidos. */

// constante em C
#define QUANT 10

void main() {

	int i, x, num, mult=0;

	printf("Informe um numero: ");
	scanf("%d", &x);
	
	for(i=1;i<=QUANT;i++) {
		printf("Informe o %do valor: ", i);
		scanf("%d", &num);
		
		// verificando se num é multiplo de x
		if(num%x==0) {
			// se sim, guardar quantidade de múltiplos
			mult++;
		}
	}
	
	printf("\nQuantidade de multiplos de %d fornecidos = %d", x, mult);
}

