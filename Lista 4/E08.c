#include <stdio.h>

/*	QUEST�O 08:
	Fazer um programa que auxilie o org�o
	regulador no c�lculo do total de recursos
	arrecadados com a aplica��o de multas de
	tr�nsito.
	O programa deve ler as seguintes
	informa��es para cada motorista:  
	
	- O n�mero da carteira de motorista;
	- N�mero de multas;
	- Valor de cada uma das multas.

	Deve ser exibido o valor da d�vida de cada
	motorista e ao final da leitura o total de
	recursos arrecadados (somat�rio de todas
	as multas). O programa tamb�m dever�
	apresentar o n�mero da carteira do
	motorista que obteve o maior n�mero de
	multas. */

int main() {
	
	int i, cnh, multa, imprudente, maiorNumeroMulta=0;
	char opcao;
	float valorMulta, valorMultaIndividual=0, valorMultaTotal=0;
	
	printf("\tDeTransito\n");
	
	// enquanto a op��o de continuar for sim, fa�a
	do {
		
		printf("\nNumero da CNH: ");
		scanf("%d", &cnh);
		
		printf("Numero de multas: ");
		scanf("%d", &multa);
		
		/* 	se o motorista est� aqui, � porque TEM multas
			mas vamos checar caso seja digitado 0 ou um n�mero negativo */
		if(multa <=0 ) {
			printf("Erro. Numero de multas invalido.\n");
		} else {
			printf("\n");
			
			// repeti��o para rodar a quantidade de multas
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
		// se o n�mero de multas atual for maior que a maior n�mero de multas registrada
		if(multa > maiorNumeroMulta) {
			maiorNumeroMulta = multa; // guarda novo maior n�mero de multas
			imprudente = cnh; // guardando carteira do motorista
		}
		
		// valor da d�vida do motorista
		printf("\t\nMotorista de CNH %d, deve R$%.2f em multas.\n", cnh, valorMultaIndividual);
		
		/* 	zerando valor da multa individual, para pr�ximo 
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
	
	// tamb�m ao final da leitura, exibir carteira do maior motorista imprudente
	printf("\t\nMotorista de CNH %d obteve o maior numero de multas = %d", imprudente, maiorNumeroMulta);
}

