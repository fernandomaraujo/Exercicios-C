#include <stdio.h>

/* 	QUEST�O 05: 
	Elabore um programa que
	calcule a m�dia ponderada de n elementos.

	Observa��o:  na m�dia ponderada, cada
	elemento possui um peso que representa a
	sua contribui��o no c�lculo da m�dia final. */

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

