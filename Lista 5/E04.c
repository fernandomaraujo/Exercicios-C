#include <stdio.h>

/*	QUESTÃO 04: 
	A prefeitura de uma cidade
	fez uma pesquisa com 300 de seus
	habitantes, coletando dados sobre o
	salário e número de filhos. A prefeitura
	deseja saber:

	a) média do salário da população;
	b) média do número de filhos;
	c) maior salário;
	d) percentual de pessoas com salário até
	R$ 1.000,00. */

// constante em C
#define QUANT 5

void main() {
	
	int filhos, cont=1, ateMil=0;
	float salario, mediaSalarial=0, mediaFilhos=0, maiorSalario=0;
		
	do {
			
		printf("\nInforme salario: R$");
		scanf("%f", &salario);
		
		printf("Informe quantidade de filhos: ");
		scanf("%d", &filhos);
		
		// média do salário da população
		mediaSalarial = mediaSalarial + salario;
		
		// média do número de filhos
		mediaFilhos = mediaFilhos + filhos;
		
		// maior salário
		if(salario > maiorSalario) {
			maiorSalario = salario;
		}
		
		// pessoas com salário até R$1000
		if(salario <= 1000) {
			ateMil++;
		}
		
		// incrementando contador
		cont++;
		
	}while (cont <= QUANT);
	
	printf("\nMedia salarial da populacao = R$%.2f\n", mediaSalarial/QUANT);
	printf("Media de filhos = %.2f\n", mediaFilhos/QUANT);
	printf("Maior salario = R$%.2f\n", maiorSalario);
	printf("Percentual de pessoas com salario ate mil: %.2f", (ateMil*QUANT)/100);
	
}
