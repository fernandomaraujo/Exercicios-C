#include <stdio.h>

/*	Quest�o 01 [2,5 pontos]:
	Considerando o programa em C a seguir, apresente a
	sa�da do mesmo (ou seja, tudo que ele exibe).

	ATEN��O: A proposta do exerc�cio � voc� analisar
	o c�digo, e escrever a sa�da EM PAPEL. Depois, voc�
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

