#include <stdio.h>

/*	QUESTÃO 11:
	Fazer um função que, dados dois vetores A e B
	com números inteiros, gerar o vetor C que
	consiste na intersecção dos dois primeiros. */


void interseccao(int x[], int y[], int z[], int TAM, int *vezes){
	
	int i, j, k=0, cont;
	
	// Inicializando
	*vezes = 0;
	
	// Percorrendo do indíce 0 a 3 (total de 4 posições)
	for(i=0;i<TAM;i++){
		
		// Percorrendo do indíce 0 a 3 OU caso o mesmo valor ter sido encontrado nos dois vetores
		for(j=0;j<TAM || (cont==1);j++){
			
			/*
				Comparando um valor do vetor x, com os demais valores do vetor y
				Se forem iguais, adiciona o valor no vetor z
				k representa o indice do vetor z
				quando um valor é adicionado, ele incrementa, indo ao próximo indice do vetor
			*/
			if(x[i] == y[j]){
				
				z[k] = x[i];
				
				// Se o mesmo número foi encontrado nos dois vetores, não tem porquê continuar as demais comparações
				cont = 1;
				
				// Contador para quantidade elementos no vetor de intersecção
				*vezes = *vezes + 1;
				
				k++;
			}
			
			// Zerando contador de continuidade, pra ele não se manter sempre em 1
			cont = 0;
		}
	}
}

int main(){
	
	int i, quant;
	int a[4] = {1, 2, 4, 8};
	int b[4] = {2, 6, 7, 8};
	int c[4];
	
	// Vetores e valor, são parâmetros de entrada
	// &quant, parâmetro de saída
	interseccao(a, b, c, 4, &quant);
	
	if(quant == 0){
		printf("Nao existe interseccao!");
	}
	
	// for de exibição rodando a quantidade de elementos da interseccão
	for(i=0;i<quant;i++){
		printf("%d | ", c[i]);
	}
}
