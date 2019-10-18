#include <stdio.h>

/* 	QUESTÃO 04: 
	Faça um programa que leia
	um número inteiro N e informe se o
	mesmo é ou não primo.
	Nota: um número é dito primo quando for
	divisível apenas por 1 e por ele mesmo. */

	// Não entrando no mérito se 1 é ou não primo

void main() {
	
	int i, num, cont=0;

	printf("Informe um numero: ");
	scanf("%d", &num);
	
	/*
		todo número é divisível por 1 e ele mesmo,
		então não precisa fazer essa checagem.
		o for começa no 2, e roda até o valor
		anterior ao número E caso o contador
		esteja zerado
	*/
	for(i=2;i<num && (cont==0);i++) {
		
		// se numero for divisível por outro
		if(num%i==0) {
			cont++; // incrementa contador
		}
	}
	
	if(cont == 0){
		printf("%d eh primo", num);
	} else {
		printf("%d nao eh primo", num);
	}

}

