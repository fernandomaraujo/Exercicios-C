#include <stdio.h>

/* 	QUEST�O 01: 
	Fa�a um programa que leia
	um n�mero inteiro x e, em seguida, solicite
	ao usu�rio outros 50 valores inteiros. Ao
	final, o programa deve exibir o total de
	m�ltiplos de x fornecidos. */

// constante em C
#define QUANT 10

void main() {

	int i, x, num, mult=0;

	printf("Informe um numero: ");
	scanf("%d", &x);
	
	for(i=1;i<=QUANT;i++) {
		printf("Informe o %do valor: ", i);
		scanf("%d", &num);
		
		// verificando se num � multiplo de x
		if(num%x==0) {
			// se sim, guardar quantidade de m�ltiplos
			mult++;
		}
	}
	
	printf("\nQuantidade de multiplos de %d fornecidos = %d", x, mult);
}

