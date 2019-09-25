#include <stdio.h>

/* 	QUEST�O 08: 
	Em uma empresa deseja-se
	fazer um levantamento sobre algumas
	informa��es dos seus 250 funcion�rios.
	Cada funcion�rio dever� responder um
	question�rio ao qual informar� os
	seguintes dados: matr�cula, sexo, idade,
	sal�rio e tempo (em anos) de trabalho na
	empresa. A execu��o do programa deve
	exibir os seguintes itens:	

	a) Matr�cula de todos os funcion�rios
	que ingressaram na empresa com
	menos de 21 anos;
	(OBS: como ainda n�o foi visto vetores,
	ser� exibida UMA matr�cula a cada
	execu��o)

	b) Quantidade de funcion�rios do
	sexo feminino;

	c) M�dia salarial dos homens. */

// constante
#define QUANT 4

int main() {

	int i, mat, idade, anos, fem=0, mas=0;
	char sexo;
	float salario, media=0;

	for(i=1;i<=QUANT;i++) {
		
		printf("\n");
		printf("Matricula: ");
		scanf("%d", &mat);
				
		printf("Sexo [f] ou [m]: ");
		fflush(stdin);
		scanf("%c", &sexo);
		
		printf("Idade: ");
		scanf("%d", &idade);
				
		printf("Salario: R$");
		scanf("%f", &salario);
		
		printf("Anos de trabalho: ");
		scanf("%d", &anos);
		
		// a) matr�cula do funcion�rio que ingresssou com menos de 21 anos
		// idade, tempo de trabalho
		if((idade-anos) < 21) {
			printf("\n\tFuncionario %d entrou com menos de 21 anos\n\n", mat);
		}
		
		// b) quantidade de funcion�rias
		if(sexo == 'f') {
			fem++;
		} else {
			// c) quantidade de funcion�rios, e media de sal�rio
			mas++;
			media += salario; // media = media + salario;
		}
		
	}
	
	printf("\n\tQuantidade de funcionarias = %d", fem);
	printf("\n\tMedia salarial de funcionarios = R$%.2f", media/mas);
	
}

