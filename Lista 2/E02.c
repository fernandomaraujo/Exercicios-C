#include <stdio.h>

/* 	QUEST�O 02: 
	Escrever um algoritmo que
	obtenha o peso de uma pessoa na Terra e o
	n�mero de um planeta. Ao final, com aux�lio da
	tabela abaixo, calcular o peso desta pessoa no
	planeta escolhido.

	1, Merc�rio, 0,37
	2, V�nus, 0,88
	3, Marte, 0,38
	4, J�piter, 2,64
	5, Saturno, 1,15
	6, Urano, 1,17

	Para calcular o peso no planeta escolhido,
	utilize a seguinte f�rmula:

	pesoPLaneta = (pesoTerra/10) * gravidadePlaneta */

int main() {

	int planeta;
	float pesoTerra, pesoPlaneta;

	printf("Seu peso na Terra: ");
	scanf("%f", &pesoTerra);
	
	printf("Numero de um planeta: ");
	scanf("%d", &planeta);
	
	switch(planeta) {
		case 1:
			pesoPlaneta = (pesoTerra/10)*0.37;
			printf("Seu peso em Mercurio = %.2fKg", pesoPlaneta);
			break;
		case 2:
			pesoPlaneta = (pesoTerra/10)*0.88;
			printf("Seu peso em Venus = %.2fKg", pesoPlaneta);
			break;
		case 3:
			pesoPlaneta = (pesoTerra/10)*0.38;
			printf("Seu peso em Marte = %.2fKg", pesoPlaneta);
			break;
		case 4:
			pesoPlaneta = (pesoTerra/10)*2.64;
			printf("Seu peso em Jupiter = %.2fKg", pesoPlaneta);
			break;
		case 5:
			pesoPlaneta = (pesoTerra/10)*1.15;
			printf("Seu peso em Saturno = %.2fKg", pesoPlaneta);
			break;
		case 6:
			pesoPlaneta = (pesoTerra/10)*1.17;
			printf("Seu peso em Urano = %.2fKg", pesoPlaneta);
			break;
		
		// verifica��o n�o pedida, mas caso n�mero do planeta seja incorreto
		default:
			printf("Planeta invalido.");
	}
}
