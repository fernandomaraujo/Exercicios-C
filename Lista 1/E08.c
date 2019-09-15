#include <stdio.h>
#include <ctype.h> // função toupper()

int main() {
	/* QUESTÃO 08:
	Faça um algoritmo para calcular a conta final de
	um hóspede de um hotel, considerando que:

	a) Devem ser obtidos o nome do hóspede, o
	tipo do apartamento utilizado (A, B, C ou D),
	o número de diárias utilizadas pelo hóspede
	e o valor do consumo interno do hóspede;

	b) O valor da diária é determinado pela
	seguinte tabela:

	Apartamento A / R$350,00
	Apartamento B / R$275,00
	Apartamento C / R$200,00
	Apartamento D / R$150,00

	c) O valor da taxa de serviço equivale a
	10% da conta.

	A conta a ser apresentada ao cliente deve
	conter: o nome do hóspede, o tipo do
	apartamento, o valor total das diárias, o
	valor do consumo interno, o subtotal, o
	valor da taxa de serviço e o total geral. */

	// OBS: No momento, ignorar o nome do hóspede
	
	// váriaveis
	char apartamento;
	float consumo, valorD, subTotal, taxaS;
	int diaria;
	
	// entrada de dados
	printf("\tHoteldispor\n");
	printf("Tipo de apartamento. Classe: ");
	fflush(stdin);
	scanf("%c", &apartamento);
	
	printf("Diarias: ");
	scanf("%d", &diaria);
	
	printf("Consumo interno. R$");
	scanf("%f", &consumo);
	
	// regra de negócio
	switch(apartamento) {
		case 'a':
			valorD = diaria*350;
			break;
		case 'b':
			valorD = diaria*275;
			break;
		case 'c':
			valorD = diaria*200;
			break;
		case 'd':
			valorD = diaria*150;
			break;
	}
	
	// saída
	printf("\n\tClasse %c.\n", toupper(apartamento)); // letra maiúscula
	printf("\tValor das diarias: R$%.2f\n", valorD);
	printf("\tConsumo interno: R$%.2f\n", consumo);
	printf("\tSubtotal: R$%.2f\n", subTotal = valorD+consumo);
	printf("\tTaxa de servico: R$%.2f\n", taxaS = (subTotal*10)/100);
	printf("\tTotal: R$%.2f", subTotal + taxaS);
	
}
