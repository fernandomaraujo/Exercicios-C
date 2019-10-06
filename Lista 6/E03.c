#include <stdio.h>

/* 	QUESTÃO 03: Faça um programa que exiba
na tela as tabuadas dos números de 1 a 9. */

void main() {

	int i, j;
	
	for(i=1;i<=9;i++) {
		printf("\n");
		
		for(j=0;j<=9;j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}
}

