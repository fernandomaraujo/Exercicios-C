#include <stdio.h>

/* 	QUEST�O 03: 
	Implementar um programa
	que calcule o valor de base expoente, onde
	base e expoente s�o n�meros inteiros
	dados pelo usu�rio. */

int main() {

	/*
		2(4) = 2 x 2 x 2 x 2 = 16
		2 � a base, 4 � o expoente, e 16 � a pot�ncia
	*/

	int i, base, exp, res=0, aux=1, pot=0;
	
	printf("Informe valor da base: ");
	scanf("%d", &base);
	
	printf("Informe valor do expoente: ");
	scanf("%d", &exp);
	
	// se expoente igual a 0, a potencia � igual 1
	if(exp == 1) {
		pot = 1;
		
	} else {
		
		for(i=1;i<exp;i++) {
			
		}
	}
	
	
	/*for(i=1;i<=base;i++) {
		
		// aux guarda resultado da multiplica��o da base por base
		res = base * base; 
		
		// e pot guarda o resultado das repeti��es da multiplica��o
		// aux = aux + res;
		
		//pot = aux * base;
	}*/
	
	printf("\nPotencia de %d sobre %d: %d", base, exp, pot);
	
}

