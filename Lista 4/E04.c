#include <stdio.h>

/* 	QUESTÃO 04: 
	Implementar um programa que exiba os N primeiros termos
 	de uma PA (Progressão Aritmética) com primeiro termo a1 e razão r.  */

int main(){
	
	int i, n, a1, r, aux=0;
	
	printf("Quantos termos deseja? (n): ");
	scanf("%d", &n);
	
	printf("Primeiro termo (a1): ");
	scanf("%d", &a1);
	
	printf("Razao (r): ");
	scanf("%d", &r);
		
	// inicializando com o primeiro termo
	aux = a1;
	printf("%d ", a1);
	for(i=1;i<n;i++) {
		
		aux = aux + r;
		
		printf(" %d ", aux);
	}
}
