#include <stdio.h>

/*	QUESTÃO 08:
	Fazer um programa que auxilie o orgão
	regulador no cálculo do total de recursos
	arrecadados com a aplicação de multas de
	trânsito.
	O programa deve ler as seguintes
	informações para cada motorista:  
	
	- O número da carteira de motorista;
	- Número de multas;
	- Valor de cada uma das multas.

	Deve ser exibido o valor da dívida de cada
	motorista e ao final da leitura o total de
	recursos arrecadados (somatório de todas
	as multas). O programa também deverá
	apresentar o número da carteira do
	motorista que obteve o maior número de
	multas. */

int main() {
	
	int i, cnh, multa, imprudente, maiorNumeroMulta=0;
	char opcao;
	float valorMulta, valorMultaIndividual=0, valorMultaTotal=0;
	
	printf("\tDeTransito\n");
	
	// enquanto a opção de continuar for sim, faça
	do {
		
		printf("\nNumero da CNH: ");
		scanf("%d", &cnh);
		
		printf("Numero de multas: ");
		scanf("%d", &multa);
		
		/* 	se o motorista está aqui, é porque TEM multas
			mas vamos checar caso seja digitado 0 ou um número negativo */
		if(multa <=0 ) {
			printf("Erro. Numero de multas invalido.\n");
		} else {
			printf("\n");
			
			// repetição para rodar a quantidade de multas
			for(i=1;i<=multa;i++) {
				printf("Valor da %da multa: R$", i);
				scanf("%f", &valorMulta);
				
				// valor total da multa do motorista
				valorMultaIndividual = valorMultaIndividual + valorMulta;	
			}
			
			// acrescentando valores totais das multas de cada motorista
			valorMultaTotal = valorMultaTotal + valorMultaIndividual;	
			
		}
		
		// guardando MOTORISTA com maior NUMERO de multas
		// se o número de multas atual for maior que a maior número de multas registrada
		if(multa > maiorNumeroMulta) {
			maiorNumeroMulta = multa; // guarda novo maior número de multas
			imprudente = cnh; // guardando carteira do motorista
		}
		
		// valor da dívida do motorista
		printf("\t\nMotorista de CNH %d, deve R$%.2f em multas.\n", cnh, valorMultaIndividual);
		
		/* 	zerando valor da multa individual, para próximo 
			motorista iniciar com valor de multa em 0 */
		valorMultaIndividual=0;
		
		// controle
		printf("Sim [s] ou Nao [n]\n");
		printf("Deseja continuar calculando multas? ");
		fflush(stdin);
		scanf("%c", &opcao);
		
	} while(opcao == 's');
	
	// ao final da leitura, exibir total de valores arrecadados
	printf("\t\nTotal de recursos arrecadados = R$%.2f\n", valorMultaTotal);
	
	// também ao final da leitura, exibir carteira do maior motorista imprudente
	printf("\t\nMotorista de CNH %d obteve o maior numero de multas = %d", imprudente, maiorNumeroMulta);
}

