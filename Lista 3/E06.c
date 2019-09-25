#include <stdio.h>

/* 	Faça um programa que leia
	um número N inteiro, menor que do que 20 (se
	for maior ou igual a 20, o programa deve 
	exibir uma mensagem de erro). Após isso,
	o programa deve imprimir os números no 
	intervalo de 1 a 99 cujos algarismos somem N. */

int main(){

	int i, j, n;
	
	printf("Informe N: ");
	scanf("%d", &n);
	
	if(n<20) {
		
		// decimal
		for(i=1;i<=9;i++) {
		
			// unidade
			for(j=0;j<=9;j++) {
				
				if(i+j==n) {
					printf("%d + %d = %d\n", i, j, n);
				}
			}
		}
			
	} else {
		printf("Informe um numero menor que 20.");	
	}
	
}

