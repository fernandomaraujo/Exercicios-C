#include <stdio.h>

/* 	QUEST�O 03: Fa�a um programa que exiba
na tela as tabuadas dos n�meros de 1 a 9. */

void main() {

	int i, j;
	
	for(i=1;i<=9;i++) {
		printf("\n");
		
		for(j=0;j<=9;j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}
}

