#include <stdio.h>

/* 	QUEST�O 07: 
	Uma determinada empresa
	fez uma pesquisa de mercado para saber
	se as pessoas gostaram ou n�o de um novo
	produto que foi lan�ado. Para cada pessoa
	entrevistada foram coletados os seguintes
	dados: sexo (M ou F) e resposta (G
	[Gostou] ou N [N�o Gostou]). Sabendo-se
	que foram entrevistadas X pessoas, fa�a
	um programa que forne�a:
	
	a) N�mero de pessoas que gostaram
	do produto;	
	
	b) N�mero de pessoas que n�o
	gostaram do produto;

	c) Informa��o dizendo em que sexo o
	produto teve uma melhor
	aceita��o. */

int main() {
	
	int i, p, pos=0, neg=0, fem=0, mas=0;
	char sexo, opniao;
	
	printf("Quantas pessoas foram entrevistadas? ");
	scanf("%d", &p);
	
	printf("\n\tRegras\n");
	printf("\tSexo (m ou f)\n");
	printf("\tResposta (g [Gostou] ou n [Nao Gostou])\n");
	
	for(i=1;i<=5;i++) {
		
		printf("\nSexo? ");
		fflush(stdin);
		scanf("%c", &sexo);
		
		printf("Gostou do produto? ");
		fflush(stdin);
		scanf("%c", &opniao);
		
		// n�mero de pessoas que gostaram, e que n�o gostaram
		if(opniao == 'g') {
			pos++;
			
			// quantidade de pessoas que gostaram, por cada sexo
			if(sexo == 'f') {
				fem++;
			} else {
				mas++;
			}
						
		} else {
			neg++;
		}
		
	}
	
	
	printf("\n\ta) Pessoas que aprovaram o produto = %d", pos);
	printf("\n\tb) Pessoas que nao aprovaram o produto = %d", neg);
	
	// julgando que n�o haver� n�meros iguais aceita��o
	// if else pra checar maior aceita��o de p�blico
	printf((fem>mas)?"\n\tc) Maior aceitacao: Feminino":"\n\tc) Maior aceitacao: Masculino");

}

