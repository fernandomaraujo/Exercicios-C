#include <stdio.h>

/*	QUESTÃO 03: 
	As vendas parceladas se
	tornaram uma ótima opção para os lojistas que,
	a cada dia, criam novas promoções para tentar
	conquistar novos clientes. Faça um algoritmo
	que permita ao lojista informar o preço do
	produto e receber as seguintes informações: 
	
	a) O valor com 10% de desconto para
	pagamento à vista;
	
	b) O valor da prestação para parcelamento
	sem juros, em 5x;
	
	c) O valor da prestação para parcelamento
	com juros, em 10x, com 20% de acréscimo
	no valor do produto. */

int main() {
	
	float valor, acrescimo, desconto, prestacaoCinco, prestacaoDez;
	
	printf("\tLoja ParceLar\n");
	printf("Valor do produto: R$");
	scanf("%f", &valor);

	// pagamento a vista, 10% de desconto
	desconto = (valor*10)/100;
	
	// parcelamento em 5x
	prestacaoCinco = valor/5;
	
	// parcelamento com juros, 10x, 20% acréscimo
	prestacaoDez = valor/10;
	acrescimo = (valor*20)/100;
	
	// exibindo valores
	printf("Pagamento a vista com 10%% de desconto = R$%.2f\n", valor-desconto);
	printf("Pagamento parcelado em 5 vezez = R$%.2f\n", prestacaoCinco);
	printf("Pagamento em 10 vezes com juros de 20%% = R$%.2f", valor+acrescimo);
	
}
