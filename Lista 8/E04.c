#include <stdio.h>

/*	QUESTÃO 04:
	Fazer uma função que armazene em um vetor
	os 50 primeiros termos da seguinte sequência:
	S = 1, 2, 4, 7, 11, 16, ...
	
	Nota: observem que a diferença entre o 1o e 2o
	elementos é igual a 1, entre o 2o e 3o é igual a
	2, entre o 3o e o 4o é igual a 3, e assim
	sucessivamente. */
	
void sequencia(){
	
	int i, aux=1, j=1;
	int vetorA[50];
	
	// Percorrendo do indíce 0 a 49 (total de 50 posições)
	for(i=0;i<50;i++){
		
		// Prenchendo vetor com valor atual de aux
		vetorA[i] = aux;
		
		// Exibindo, mas caso seja pra retornar o vetor, o código será atualizado
		printf("%d | ", vetorA[i]);
		
		// Atualizando valores com o contador j
		aux = aux + j;
		
		// Que vai crescendo de um em um, assim fazendo a diferença entre cada elemento do vetor
		j++;
	}
}

int main(){
	
	// Chamando a função
	sequencia();
}
