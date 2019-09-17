#include <stdio.h>

/* 	QUEST�O 04: 
	Desenvolva um algoritmo que
	calcule o consumo de combust�vel de um
	autom�vel em determinada viagem. Para isso,
	devem ser obtidos: i) o percurso (em
	quil�metros) da viagem; ii) o n�mero de
	quil�metros que o carro percorre com um litro
	de combust�vel (km/l); e iii) o pre�o do litro do
	combust�vel.
	
	Ao final, o algoritmo deve determinar:
	
	- A quantidade de combust�vel, em litros,
	consumida durante a viagem;
	
	- O custo total de combust�vel. */

int main() {

	float km, kmPorLitro, custo, consumoTotal;
	
	printf("\tPosto Terminal && Shell\n");
	
	printf("Percuso (em Km) da viagem: ");
	scanf("%f", &km);
	
	printf("Gasto de litro(s) por Km: ");
	scanf("%f", &kmPorLitro);
	
	printf("Custo do litro: R$");
	scanf("%f", &custo);

	// regras de neg�cio
	
	consumoTotal = km/kmPorLitro;
	
	printf("Combustivel necessario = %.2fL\n", consumoTotal);
	printf("Custo total do combustivel = R$%.2f", consumoTotal*custo);

}

