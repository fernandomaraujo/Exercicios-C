#include <stdio.h>
#include <ctype.h> // fun��o toupper()

int main() {
	/* QUEST�O 08:
	Fa�a um algoritmo para calcular a conta final de
	um h�spede de um hotel, considerando que:

	a) Devem ser obtidos o nome do h�spede, o
	tipo do apartamento utilizado (A, B, C ou D),
	o n�mero de di�rias utilizadas pelo h�spede
	e o valor do consumo interno do h�spede;

	b) O valor da di�ria � determinado pela
	seguinte tabela:

	Apartamento A / R$350,00
	Apartamento B / R$275,00
	Apartamento C / R$200,00
	Apartamento D / R$150,00

	c) O valor da taxa de servi�o equivale a
	10% da conta.

	A conta a ser apresentada ao cliente deve
	conter: o nome do h�spede, o tipo do
	apartamento, o valor total das di�rias, o
	valor do consumo interno, o subtotal, o
	valor da taxa de servi�o e o total geral. */

	// OBS: No momento, ignorar o nome do h�spede
	
	// v�riaveis
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
	
	// regra de neg�cio
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
	
	// sa�da
	printf("\n\tClasse %c.\n", toupper(apartamento)); // letra mai�scula
	printf("\tValor das diarias: R$%.2f\n", valorD);
	printf("\tConsumo interno: R$%.2f\n", consumo);
	printf("\tSubtotal: R$%.2f\n", subTotal = valorD+consumo);
	printf("\tTaxa de servico: R$%.2f\n", taxaS = (subTotal*10)/100);
	printf("\tTotal: R$%.2f", subTotal + taxaS);
	
}
