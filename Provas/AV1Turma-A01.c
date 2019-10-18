#include <stdio.h>

/*	Questão 01 [2,5 pontos]:
	Considerando o programa em C a seguir, apresente a
	saída do mesmo (ou seja, tudo que ele exibe).

	ATENÇÃO: A proposta do exercício é você analisar
	o código, e escrever a saída EM PAPEL. Depois, você
	pode checar se acertou =) */

void main () {
	
 int i, j, k;
 
 for (i=1;i<=10;i+=3) {
	j = i;
 	while (j < 7) {
 		
		for (k=1;k<j;k++) {
	 		printf("%d %d %d\n", i, j, k);
	 	}
	 	
	 	j=j+2;
 		}
	}
}

