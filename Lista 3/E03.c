#include <stdio.h>

/*	QUESTÃO 03: 
	Joãozinho investiu Q reais
	em uma aplicação com rendimento fixo de
	R% ao mês. Pede-se a implementação de
	um programa que calcule o valor (e exiba-o) disponível na 
	conta de Joãozinho após A anos de investimento. */

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
	
	// percorrendo os meses, e calculando rendimento por cada mês
	for(i=1;i<=meses;i++) {
		
		valor = valor + (valor*rendimento)/100;
	}
	
	printf("\nRendimento total = R$%.2f", valor);
	
}

