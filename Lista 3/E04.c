#include <stdio.h>

/* QUEST�O 04: 
	Fa�a um programa que leia
	300 n�meros reais. Ao final, devem ser
	exibidas as seguintes informa��es:
		
	a) A quantidade de valores negativos
	digitados;

	b) A m�dia dos valores positivos. */

/* 	uma constante � onde um valor n�o pode ser modificado
	para criar uma constante em C, usa-se o #define
	e para diferenciar de outras vari�veis, pode escrever
	a constante em letras maisc�las 
	
	pela praticidade, ser� lido 10 valores	*/ 
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

