#include <stdio.h>

/*	QUEST�O 03: 
	Jo�ozinho investiu Q reais
	em uma aplica��o com rendimento fixo de
	R% ao m�s. Pede-se a implementa��o de
	um programa que calcule o valor (e exiba-o) dispon�vel na 
	conta de Jo�ozinho ap�s A anos de investimento. */

int main() {

	int i, anos, meses;
	float valor, rendimento;

	printf("\tInvestimento\n\n");
	
	printf("Valor investido: R$");
	scanf("%f", &valor);
	
	printf("Porcentagem de rendimento p/mes: %%");
	scanf("%f", &rendimento);
	
	printf("Anos de investimento: ");
	scanf("%d", &anos);
	
	// um ano possui 12 meses, portanto
	meses = 12*anos;
	
	// percorrendo os meses, e calculando rendimento por cada m�s
	for(i=1;i<=meses;i++) {
		
		valor = valor + (valor*rendimento)/100;
	}
	
	printf("\nRendimento total = R$%.2f", valor);
	
}

