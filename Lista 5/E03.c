#include <stdio.h>

/* 	QUESTÃO 03: 
	Implementar um programa
	que calcule o valor de base expoente, onde
	base e expoente são números inteiros
	dados pelo usuário. */

int main() {

	/*
		2(4) = 2 x 2 x 2 x 2 = 16
		2 é a base, 4 é o expoente, e 16 é a potência
	*/

	int i, base, exp, res=0, aux=1, pot=1;
	
	printf("Informe valor da base: ");
	scanf("%d", &base);
	
	printf("Informe valor do expoente: ");
	scanf("%d", &exp);
	
	// se expoente igual a 0, a potencia é igual 1
	if(exp == 0) {
		
		// valor inicial da potencia é 1, então basta exibir pot
		printf("\nPotencia: %d", pot);
		
		// caso não
	} else {
		
		/*
			faça
				a potencia guardar o resultado da multiplicação
				consecutivas pela base
			
				e decrementar (até 0) o valor do expoente, fazendo assim 
				a repetição executar tantas vezes o seu valor
		
			enquanto (valor do expoente for maior que 0)
		*/
		
		do {
			pot = pot * base;
			exp--;
			
		} while(exp>0); 
		
		printf("\nPotencia: %d", pot);
	}
}

