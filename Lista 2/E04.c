#include <stdio.h>

/* 	QUESTÃO 04: 
	Desenvolva um algoritmo que
	calcule o consumo de combustível de um
	automóvel em determinada viagem. Para isso,
	devem ser obtidos: i) o percurso (em
	quilômetros) da viagem; ii) o número de
	quilômetros que o carro percorre com um litro
	de combustível (km/l); e iii) o preço do litro do
	combustível.
	
	Ao final, o algoritmo deve determinar:
	
	- A quantidade de combustível, em litros,
	consumida durante a viagem;
	
	- O custo total de combustível. */

int main() {

	float km, kmPorLitro, custo, consumoTotal;
	
	printf("\tPosto Terminal && Shell\n");
	
	printf("Percuso (em Km) da viagem: ");
	scanf("%f", &km);
	
	printf("Gasto de litro(s) por Km: ");
	scanf("%f", &kmPorLitro);
	
	printf("Custo do litro: R$");
	scanf("%f", &custo);

	// regras de negócio
	
	consumoTotal = km/kmPorLitro;
	
	printf("Combustivel necessario = %.2fL\n", consumoTotal);
	printf("Custo total do combustivel = R$%.2f", consumoTotal*custo);

}

