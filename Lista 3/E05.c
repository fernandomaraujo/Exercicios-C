#include <stdio.h>

/*	QUEST�O 05: 
	Fa�a um programa que exiba
	na tela os 50 primeiros termos da seguinte
	s�rie: 1, -2, 3, -4, 5, -6 ... */

int main() {
	
	int i;

	for(i=1;i<=50;i++) {
		
		// se i for par, ent�o numero negativo, caso n�o, numero positivo
		if(i%2==0) {
			printf(" -%d ", i);
		} else {
			printf("%d", i);
		}
	}
}

