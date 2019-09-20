#include <stdio.h>

/* QUESTÃO 04: 
	Faça um programa que leia
	300 números reais. Ao final, devem ser
	exibidas as seguintes informações:
		
	a) A quantidade de valores negativos
	digitados;

	b) A média dos valores positivos. */

/* 	uma constante é onde um valor não pode ser modificado
	para criar uma constante em C, usa-se o #define
	e para diferenciar de outras variáveis, pode escrever
	a constante em letras maiscúlas 
	
	pela praticidade, será lido 10 valores	*/ 
#define MAX 10

int main() {

	int i, contNeg=0, contPos=0;
	float num, pos;
	
	for(i=1;i<=MAX;i++) {
		printf("Informe o %do valor: ", i);
		scanf("%f", &num);
		
		if(num<0) {
			contNeg++;
			
		} else {
			contPos++;
			pos = pos + num;
		}
	}
	
	printf("\nQuantidade de valores negativos = %d\n", contNeg);
	printf("Media dos valores positivos = %.2f", pos/contPos);
}

