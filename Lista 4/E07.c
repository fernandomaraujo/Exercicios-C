#include <stdio.h>

/* 	QUEST�O 07:
	Desenvolver um programa no qual o
	usu�rio entre com v�rios n�meros inteiros
	e positivos e imprima o produto dos
	n�meros �mpares e a soma dos n�meros
	pares.  */

int main() {
	
	int num=1, par=0, impar=1;
	
	// enquanto os n�meros forem positivos
	while(num > 0){
		
		printf("Informe um numero: ");
		scanf("%d", &num);
		
		if(num> 0) {
			// se impar		
			if(num%2==1) {
				// produto � o resultado de uma multiplica��o
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


