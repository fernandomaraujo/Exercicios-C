#include <stdio.h>

/* QUESTÃO 10:
	Foi feita uma pesquisa entre os habitantes
	de uma região e coletados os dados de
	altura e gênero das pessoas. Faça um
	programa que leia as informações de 50
	pessoas e informe:

	- a maior e a menor alturas
	encontradas;
	
	- a média de altura das mulheres;
	- a média de altura da população;

	- o percentual de homens na
	população. */

// constante em C
#define QUANT 5

void main() {
	
	int cont, contF=0, contM=0;
	char genero;
	float altura, maiorAltura=0, menorAltura=2.5, mediaAltura=0, mediaAlturaFem=0;
	float perAux, perRes;
	
	printf("\tPesquisa\n");
	
	do {
		
		printf("\n");
		printf("Altura: ");
		scanf("%f", &altura);
		
		printf("Masculino [m] || Feminino [f]\n");
		printf("Genero: ");
		fflush(stdin);
		scanf("%c", &genero);
		
		// a maior altura
		if(altura>maiorAltura) {
			maiorAltura = altura;
		}
		
		// a menor altura
		/* 	inicializando menorAltura com um valor alto 
			pessoa mais alta do mundo mede 2,465 metros */
		if(altura<menorAltura) {
			menorAltura = altura;
		}
		
		// a média de altura das mulheres
		if(genero == 'f') {
			mediaAlturaFem = mediaAlturaFem + altura;
			contF++; // contador de pessoas do sexo feminino, pra relizar divisão da média
			
		} else {
			// contador de pessoas do sexo masculino, para percentual de homens
			contM++;
		}
		
		// a media de altura da população
		mediaAltura = mediaAltura + altura;
		
		// incrementando contador
		cont++;

	} while(cont < QUANT);
	
	// o percentual de homens na população
	perAux = 5-contM;
	perRes = perAux - 5;
	
	// exibição
	printf("\t\nMaior altura = %.2f - Menor altura = %.2f", maiorAltura, menorAltura);
	printf("\t\nMedia de altura das mulheres = %.2f", mediaAlturaFem/contF);
	printf("\t\nMedia de altura da populacao = %.2f", mediaAltura/QUANT);
	printf("\t\nPercentual de homens na populacao = %.2f", perRes * 100);
	
}

