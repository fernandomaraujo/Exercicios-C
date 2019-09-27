#include <stdio.h>

/* 	QUESTÃO 07:
	Desenvolver um programa no qual o
	usuário entre com vários números inteiros
	e positivos e imprima o produto dos
	números ímpares e a soma dos números
	pares.  */

int main() {
	
	int num=1, par=0, impar=1;
	
	// enquanto os números forem positivos
	while(num > 0){
		
		printf("Informe um numero: ");
		scanf("%d", &num);
		
		if(num> 0) {
			// se impar		
			if(num%2==1) {
				// produto é o resultado de uma multiplicação
				impar = impar * num;
				
			} else {
				// se par
				par = par + num;		
			}
		}
	
	}
	
	printf("\nProduto dos impares = %d\n", impar);
	printf("Soma dos pares = %d\n", par);
}


