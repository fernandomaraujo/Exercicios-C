#include <stdio.h>

int main() {
	/* QUEST�O 04:
	Um banco conceder� um cr�dito especial aos
	seus clientes, vari�vel com o saldo m�dio no
	�ltimo ano. Fa�a um algoritmo que calcule o
	valor do cr�dito de acordo com a tabela abaixo. */
	
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

