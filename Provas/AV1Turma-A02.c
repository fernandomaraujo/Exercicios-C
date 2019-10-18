#include <stdio.h>

/* 	Questão 02 [2,5 pontos]:
	Construir um programa que permita ao usuário calcular
	a área de diferentes figuras geométricas. Para isto,
	permanecerá apresentando um menu de opções
	([C]írculo, [R]etângulo, [Q]uadrado, [T]riângulo e [S]air)
	até que o usuário opte por terminar a execução do programa.

	Notas:
	1. Fórmulas para o cálculo das áreas:
	a. Acírculo = p.raio2, onde p = 3.14159;
	b. Aretângulo = base.altura;
	c. Aquadrado = lado2; (lado ao quadrado)
	d. Atriângulo = (base.altura)/2;

	2. Caso o usuário escolha uma opção inválida, uma
	mensagem de erro deve ser exibida e uma nova
	escolha solicitada. */

int main() {

	char opcao;
	float p=3.14159, raio, base, altura, lado;
	float aCirculo, aRetangulo, aQuadrado, aTriangulo;

	do {
		
		// menu
		printf("\n\n");
		printf("[C]irculo, [R]etangulo, [Q]uadrado, [T]riangulo e [S]air\n");
		printf("Escolha uma opcao: ");
		fflush(stdin);
		scanf("%c", &opcao);
		
		// caso opção seja inválida
		while(opcao != 'c' && opcao != 'r' && opcao != 'q' && opcao != 't' && opcao != 's') {
			
			// menu
			printf("\n\n");
			printf("Erro! Opcao invalida\n");
			printf("[C]irculo, [R]etangulo, [Q]uadrado, [T]riangulo e [S]air\n");
			printf("Escolha uma opcao: ");
			fflush(stdin);
			scanf("%c", &opcao);
		}
		
		switch(opcao) {
			
			case 'c':
				printf("\n");
				printf("Informe raio: ");
				scanf("%f", &raio);
				
				aCirculo = p*(raio*raio);
				printf("Area do Circulo: %.2f", aCirculo);
				
				break;
			
			case 'r':
				printf("\n");
				printf("Informe area da base: ");
				scanf("%f", &base);
				
				printf("Informe altura: ");
				scanf("%f", &altura);
				
				aRetangulo = base*altura;
				printf("Area do Retangulo: %.2f", aRetangulo);
				
				break;
				
			case 'q':
				printf("\n");
				printf("Informe area dos lados: ");
				scanf("%f", &lado);
				
				aQuadrado = lado*lado;
				printf("Area do Quadrado: %.2f", aQuadrado);
				
				break;
				
			case 't':
				printf("\n");
				printf("Informe area da base: ");
				scanf("%f", &base);
				
				printf("Informe altura: ");
				scanf("%f", &altura);
				
				aTriangulo = (base*altura)/2;
				printf("Area do Triangulo: %.2f", aTriangulo);
		}
		
			
	} while(opcao!='s');
	
	printf("Calculadora finalizada.");
}

