#include <stdio.h>

/*	QUESTÃO 10:
	Fazer um função que, dados dois vetores A e B
	com números inteiros, gerar o vetor C que
	consiste na união dos dois primeiros. 
	
	Nota: considerar que não existe repetição no
	conjunto A, nem no conjunto B. */


void uniao(int x[], int y[], int z[], int TAM){
	
	int i, j=0, k;
	
	/*	Percorendo do índice 0 a 4 (5 posições)
		E distribuindo seus respectivos valores do vetor x, no vetor z
		 
		I = 0, X = 0
		I = 1, X = 1
		I = 2, X = 2
		I = 3, X = 3
		I = 4, X = 4
	*/
	for(i=0;i<TAM;i++){
		
		z[i] = x[i];
	}
	
	/*	Percorendo do índice 5 a 9 (5 posições)
		E distribuindo seus respectivos valores do vetor y, no vetor z
		
		J = 5, K = 0
		J = 6, K = 1
		J = 7, K = 2
		J = 8, K = 3
		J = 9, K = 4
	*/
	for(j=i, k=0; j<TAM*2; j++, k++){
		
		z[j] = y[k];
	}
}

int main(){
	
	int i;
	int vetorA[5] = {1, 2, 3, 4, 5};
	int vetorB[5] = {6, 7, 8, 9, 10};
	int vetorC[10];
	
	// Vetores A e B são parâmetros de entrada, e o vetor C, de saída
	uniao(vetorA, vetorB, vetorC, 5);
	
	// Exibindo vetor
	for(i=0;i<10;i++){
		
		printf("%d | ", vetorC[i]);
	}
}
