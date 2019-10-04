#include <stdio.h>

/* 	QUEST�O 03: 
	Implementar um programa
	que calcule o valor de base expoente, onde
	base e expoente s�o n�meros inteiros
	dados pelo usu�rio. */

int main() {

	/*
		2(4) = 2 x 2 x 2 x 2 = 16
		2 � a base, 4 � o expoente, e 16 � a pot�ncia
	*/

	int i, base, exp, res=0, aux=1, pot=1;
	
	printf("Informe valor da base: ");
	scanf("%d", &base);
	
	printf("Informe valor do expoente: ");
	scanf("%d", &exp);
	
	// se expoente igual a 0, a potencia � igual 1
	if(exp == 0) {
		
		// valor inicial da potencia � 1, ent�o basta exibir pot
		printf("\nPotencia: %d", pot);
		
		// caso n�o
	} else {
		
		/*
			fa�a
				a potencia guardar o resultado da multiplica��o
				consecutivas pela base
			
				e decrementar (at� 0) o valor do expoente, fazendo assim 
				a repeti��o executar tantas vezes o seu valor
		
			enquanto (valor do expoente for maior que 0)
		*/
		
		do {
			pot = pot * base;
			exp--;
			
		} while(exp>0); 
		
		printf("\nPotencia: %d", pot);
	}
}

