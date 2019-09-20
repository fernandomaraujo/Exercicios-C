#include <stdio.h>

/*	QUESTÃO 05: 
	Faça um programa que exiba
	na tela os 50 primeiros termos da seguinte
	série: 1, -2, 3, -4, 5, -6 ... */

int main() {
	
	int i;

	for(i=1;i<=50;i++) {
		
		// se i for par, então numero negativo, caso não, numero positivo
		if(i%2==0) {
			printf(" -%d ", i);
		} else {
			printf("%d", i);
		}
	}
}

