#include <stdio.h>

/* Questão 6:
	Faça um programa que leia
	um número N inteiro, menor que do que 18 (se
	for maior ou igual a 18, o programa deve 
	exibir uma mensagem de erro). Após isso,
	o programa deve imprimir os números no 
	intervalo de 1 a 99 cujos algarismos somem N. */

int main(){

	int i, j, n;
	
	printf("Informe N (de 1 a 18): ");
	scanf("%d", &n);
	
	if(n<=0 || n>18) {
		
		printf("Informe um numero menor que 20.");
			
	} else {
		
		// decimal
		for(i=1;i<=9;i++) {
		
			// unidade
			for(j=0;j<=9;j++) {
				
				if(i+j==n) {
					printf("%d%d ", i, j);
				}
			}
		}
		
		// OU
		/*
		declarar as variaveis dez e uni
		for(i=1;i<=99;i++) {
			
			dez = i/10;
			uni = i%10;
			
			if(dez+uni==n) {
				printf("%d", i);
			}
		
		} */
		
	}
	
}

