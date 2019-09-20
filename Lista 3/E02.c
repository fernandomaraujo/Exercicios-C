#include <stdio.h>

/* 	QUESTÃO 02: 
	Faça um programa que exiba
	todos os elementos da seguinte série,
	assim como a soma destes elementos:
	1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1 */

int main() {
	
	int i, j, total; 
	
	// rodando 50x, com incremento no i, e decremento no j
	for(i=1,j=50 ; i<=50 ; i++, j-- ) {
		printf("%d, %d, ", i, j);
		
		// soma dos elementos
		total = total + i + j;
	}
	
	// exibindo soma
	printf("\n\nSoma dos elementos = %d", total);

}

