#include <stdio.h>

int main(){
	/* QUESTÃO 03: 
	Construir um algoritmo que calcule o peso ideal de uma
	pessoa, de acordo com o seu sexo e altura,
	utilizando as seguintes fórmulas:

	para homens:  (72.7*h)-58
	para mulheres:  (62.1*h)-44.7 */

	char sexo;
	float altura;

	printf("[F/f] ou [M/m]? ");
	fflush(stdin);
	scanf("%c", &sexo);
	
	printf("Altura? ");
	scanf("%f", &altura);
	
	if(sexo == 'f') {
		printf("Feminino.\n");
		printf("Peso ideal: %.2f", (62.1*altura)-44.7);
		
	}else {
		printf("Masculino.\n");
		printf("Peso ideal: %.2f", (72.7*altura)-58);
		
	}
}

