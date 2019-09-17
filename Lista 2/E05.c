#include <stdio.h>

/*	QUEST�O 05: O card�pio de uma lanchonete �
	o seguinte: 

	Cachorro quente, 100, R$3,50	
	Bauru simples, 101, R$4,50
	Bauru com ovo, 102, R$5,20
	Hamburguer, 103, R$3,00
	Cheeseburguer, 104, 4,00
	Refrigerante, 105, 2,50

	Escrever um algoritmo que obtenha o c�digo
	do item pedido, a quantidade e calcule o valor
	a ser pago.
	Considere que, a cada execu��o do algoritmo,
	somente ser� calculado o valor relacionado a
	um item. */

int main() {

	int cod, quant;
	float custo;

	printf("\tHungry Days\n");
	
	printf("Codigo do pedido: ");
	scanf("%d", &cod);
	
	printf("Quantidade: ");
	scanf("%d", &quant);
	
	switch(cod) {
		case 100:
			custo = quant*3.50;
			break;
		case 101:
			custo = quant*4.50;
			break;
		case 102:
			custo = quant*5.20;
			break;
		case 103:
			custo = quant*3.00;
			break;
		case 104:
			custo = quant*4.00;
			break;
		case 105:
			custo = quant*2.50;
		
		// n�o solicitado, mas caso c�digo do pedido seja inv�lido
		default:
			printf("Codigo invalido.");
	}
	
	printf("Custo total = R$%.2f", custo);
}
