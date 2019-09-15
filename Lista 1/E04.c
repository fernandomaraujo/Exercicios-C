#include <stdio.h>

int main() {
	/* QUESTÃO 04:
	Um banco concederá um crédito especial aos
	seus clientes, variável com o saldo médio no
	último ano. Faça um algoritmo que calcule o
	valor do crédito de acordo com a tabela abaixo. */
	
	float saldo, ce;
	
	printf("Saldo medio? \nR$");
	scanf("%f", &saldo);
	
	if(saldo<1000) {
		printf("Nenhum credito.");
	} else if(saldo<=1499.99) {
		printf("20%% do saldo medio.\n");
		printf("C.E. de R$%.2f", ce = (saldo*20)/100);
	} else if(saldo<=2499.99) {
		printf("30%% do saldo medio.\n");
		printf("C.E. de R$%.2f", ce = (saldo*30)/100);
	} else {
		printf("40%% do saldo medio.\n");
		printf("C.E. de R$.2f", ce = (saldo*40)/100);
	}
	
}

