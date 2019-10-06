#include <stdio.h>

/* 	QUEST�O 04: 
	Fa�a um programa que leia
	um n�mero inteiro N e informe se o
	mesmo � ou n�o primo.
	Nota: um n�mero � dito primo quando for
	divis�vel apenas por 1 e por ele mesmo. */

	// N�o entrando no m�rito se 1 � ou n�o primo

void main() {
	
	int i, num, cont=0;

	printf("Informe um numero: ");
	scanf("%d", &num);
	
	/*
		todo n�mero � divis�vel por 1 e ele mesmo,
		ent�o n�o precisa fazer essa checagem.
		o for come�a no 2, e roda at� o valor
		anterior ao n�mero E caso o contador
		esteja zerado
	*/
	for(i=2;i<num && (cont==0);i++) {
		
		// se numero for divis�vel por outro
		if(num%i==0) {
			cont++; // incrementa contadot
		}
	}
	
	if(cont == 0){
		printf("%d eh primo", num);
	} else {
		printf("%d nao eh primo", num);
	}

}

