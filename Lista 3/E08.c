#include <stdio.h>

/* 	QUESTÃO 08: 
	Em uma empresa deseja-se
	fazer um levantamento sobre algumas
	informações dos seus 250 funcionários.
	Cada funcionário deverá responder um
	questionário ao qual informará os
	seguintes dados: matrícula, sexo, idade,
	salário e tempo (em anos) de trabalho na
	empresa. A execução do programa deve
	exibir os seguintes itens:	

	a) Matrícula de todos os funcionários
	que ingressaram na empresa com
	menos de 21 anos;
	(OBS: como ainda não foi visto vetores,
	será exibida UMA matrícula a cada
	execução)

	b) Quantidade de funcionários do
	sexo feminino;

	c) Média salarial dos homens. */

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
		
		// a) matrícula do funcionário que ingresssou com menos de 21 anos
		// idade, tempo de trabalho
		if((idade-anos) < 21) {
			printf("\n\tFuncionario %d entrou com menos de 21 anos\n\n", mat);
		}
		
		// b) quantidade de funcionárias
		if(sexo == 'f') {
			fem++;
		} else {
			// c) quantidade de funcionários, e media de salário
			mas++;
			media += salario; // media = media + salario;
		}
		
	}
	
	printf("\n\tQuantidade de funcionarias = %d", fem);
	printf("\n\tMedia salarial de funcionarios = R$%.2f", media/mas);
	
}

