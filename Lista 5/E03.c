#include <stdio.h>

/* 	QUESTÃO 03: 
	Implementar um programa
	que calcule o valor de base expoente, onde
	base e expoente são números inteiros
	dados pelo usuário. */

int main() {

	/*
		2(4) = 2 x 2 x 2 x 2 = 16
		2 é a base, 4 é o expoente, e 16 é a potência
	*/

	int i, base, exp, res=0, aux=1, pot=0;
	
	printf("Informe valor da base: ");
	scanf("%d", &base);
	
	printf("Informe valor do expoente: ");
	scanf("%d", &exp);
	
	// se expoente igual a 0, a potencia é igual 1
	if(exp == 1) {
		pot = 1;
		
	} else {
		
		for(i=1;i<exp;i++) {
			
		}
	}
	
	
	/*for(i=1;i<=base;i++) {
		
		// aux guarda resultado da multiplicação da base por base
		res = base * base; 
		
		// e pot guarda o resultado das repetições da multiplicação
		// aux = aux + res;
		
		//pot = aux * base;
	}*/
	
	printf("\nPotencia de %d sobre %d: %d", base, exp, pot);
	
}

