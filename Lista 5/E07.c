#include <stdio.h>

/* QUEST�O 07: 
	Fa�a um programa que leia
	150 n�meros reais e, ao final, exiba:

	a) A soma dos 50 primeiros;
	b) menor n�mero do 50� ao 100�
	valores fornecidos;
	c) A m�dia entre os �ltimos 50
	valores. */
	
	// Adaptada
	
#define QUANT 15

void main(){

	int num, cont=1, somaNum=0, menorNum=9999;
	float media=0;

	do {
		
		printf("Informe o %d numero: ", cont);
		scanf("%d", &num);
		
		if(cont<=5) {
			somaNum = somaNum + num;
			
		}else if(cont<=10){
		
			if(num<menorNum) {
				menorNum = num; 
			}
			
		} else if(cont<=15) {
			media = media + num;
		}
		
		cont++;
		
	}while(cont<=QUANT);
	
	
	printf("Soma dos 5 primeiros numeros = %d \n", somaNum);
	printf("Menor numero entre 5 e 10 = %d \n", menorNum);
	printf("Media entre os 5 ultimos numeros = %.2f \n", media/5);
	
}

