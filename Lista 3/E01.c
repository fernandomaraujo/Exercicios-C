#include <stdio.h>

/* 	QUEST�O 01: 
	Fa�a um programa que leia
	um n�mero inteiro positivo N e exiba todos
	os m�ltiplos de Y inferiores a N, onde N e Y
	s�o fornecidos pelo usu�rio. */

int main() {
	
	int i, n, y;
	
	printf("Valor de N: ");
	scanf("%d", &n);
	
	printf("Valor de Y: ");
	scanf("%d", &y);
	
	// se o resto da divis�o de um n�mero por outro restar 0, ent�o eles s�o m�litplos
	for(i=0;i<n;i++) {
		if(i%y==0) {
			printf("%d ", i);
		}
	}

}

