#include <stdio.h>

/*	QUESTÃO 05: O cardápio de uma lanchonete é
	o seguinte: 

	Cachorro quente, 100, R$3,50	
	Bauru simples, 101, R$4,50
	Bauru com ovo, 102, R$5,20
	Hamburguer, 103, R$3,00
	Cheeseburguer, 104, 4,00
	Refrigerante, 105, 2,50

	Escrever um algoritmo que obtenha o código
	do item pedido, a quantidade e calcule o valor
	a ser pago.
	Considere que, a cada execução do algoritmo,
	somente será calculado o valor relacionado a
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
		
		// não solicitado, mas caso código do pedido seja inválido
		default:
			printf("Codigo invalido.");
	}
	
	printf("Custo total = R$%.2f", custo);
}
