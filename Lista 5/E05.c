#include <stdio.h>

/* 	QUESTÃO 05: 
	Elabore um programa que
	calcule a média ponderada de n elementos.

	Observação:  na média ponderada, cada
	elemento possui um peso que representa a
	sua contribuição no cálculo da média final. */

void main() {
	
	int i;
	float n, num=0, nota, peso, den=0;

	printf("Quantas notas deseja para compor a media? ");
	scanf("%f", &n);

	for(i=1;i<=n;i++) {
		
		printf("\nInforme a %da nota: ", i);
		scanf("%f", &nota);
		
		printf("Informe peso: ");
		scanf("%f", &peso);
		
		// numerador e denominador
		num += nota * peso;
		den+=peso;
	}
	
	printf("\nMedia total = %.2f", num/den);
}

