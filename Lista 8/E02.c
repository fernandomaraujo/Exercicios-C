#include <stdio.h>

void trocarElementos(float vetorB[], int TAM){
	
	int i;
	float anterior;
	
	/*	Percorrendo do indíce 0 a 4 (total de 6 posições)
		E trabalhando com duas posições de cada vez, como no caso:
		
		Indice 0 e 1
		Indice 2 e 3
		Indice 3 e 4
		Indice 5 e 6
	*/
	for(i=0, j=1;j<TAM;i+=2, j+=2){	
		
		// Guarda o valor do primeiro indice
		anterior = vetorB[i];
		
		// Troca o valor do primeiro indice pelo valor do próximo
		vetorB[i] = vetorB[j];
		
		// E próximo indice recebe o valor do primeiro
		vetorB[j] = anterior;
		
	}

	// Voltando a main
	
}


int main(){
	
	int i, TAM=5;
	
	// Variável de entrada
	float v[6] = {2.6, 1, 4.8, 3.9, 6};
	
	// Chamada da função, passando o vetor como parâmetro
	trocarElementos(v, TAM);
	
	// Os valores do vetor foram alterados, então vamos os exibir
	for(i=0;i<TAM;i++){
		
		printf("%.1f | ", v[i]);
	}
	
}
