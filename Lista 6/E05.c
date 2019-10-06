#include <stdio.h>

/* 	QUESTÃO 05: 
	Uma pesquisa foi feita
	coletando informações (idade, altura e
	peso) de um grupo de pessoas.
	Pede-se a implementação de um programa
	que proceda com a leitura de tais
	informações (até que o usuário opte por
	concluir a entrada de dados) e calcule: 
	
	- A quantidade de pessoas com idade
	superior a 50 anos;
	
	- A média de altura das pessoas com mais de
	80 kg;

	- O maior peso dentre as pessoas acima de
	1.65 m de altura e com idade inferior a 30
	anos. */

void main() {

	int idade, cont50=0, cont80=0;
	char opcao;
	float altura, peso, alturaMedia=0, maiorPeso=0;

	do {
		
		printf("\nInforme idade: ");
		scanf("%d", &idade);
		
		printf("Informe altura: ");
		scanf("%f", &altura);
		
		printf("Informe peso: ");
		scanf("%f", &peso);
		
		// quantidade de pessoas com mais de 50 anos
		if(idade > 50) {
			cont50++;
		}
		
		// media de altura das pessoas com mais de 80kg
		if(peso > 80) {
			alturaMedia = alturaMedia + altura;
			cont80++;
		}
		
		// maior peso dentre pessoas acima de 1.65m e idade menor que 30 anos
		if(altura > 1.65 && idade < 30) {
			
			if(peso > maiorPeso) {
				maiorPeso = peso;
			}
		}
		
		printf("\nDeseja continuar a leitura de dados? Sim [s] ou Nao [n]: ");
		fflush(stdin);
		scanf("%c", &opcao);
		
	}while(opcao == 's');
	
	printf("\nQuantidade de pessoas com mais de 50 anos = %d\n", cont50);
	printf("Media de altura das pessoas com mais de 80Kg = %.2f\n", alturaMedia/cont80);
	printf("Maior peso dentre pessoas acima de 1.65m e idade menor que 30 anos = %.2f", maiorPeso);
}

