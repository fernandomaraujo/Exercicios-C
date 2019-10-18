#include <stdio.h>

/* 	Quest�o 02 [2,5 pontos]:
	Construir um programa que permita ao usu�rio calcular
	a �rea de diferentes figuras geom�tricas. Para isto,
	permanecer� apresentando um menu de op��es
	([C]�rculo, [R]et�ngulo, [Q]uadrado, [T]ri�ngulo e [S]air)
	at� que o usu�rio opte por terminar a execu��o do programa.

	Notas:
	1. F�rmulas para o c�lculo das �reas:
	a. Ac�rculo = p.raio2, onde p = 3.14159;
	b. Aret�ngulo = base.altura;
	c. Aquadrado = lado2; (lado ao quadrado)
	d. Atri�ngulo = (base.altura)/2;

	2. Caso o usu�rio escolha uma op��o inv�lida, uma
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
		
		// caso op��o seja inv�lida
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

