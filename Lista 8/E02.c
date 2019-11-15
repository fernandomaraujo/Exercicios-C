#include <stdio.h>

void trocarElementos(float vetorB[], int TAM){
	
	int i;
	float anterior;
	
	/*	Percorrendo do indíce 0 a 5 (total de 6 posições)
		E trabalhando com duas posições de cada vez, como no caso:
		
		Indice 0 e 1
		Indice 2 e 3
		Indice 3 e 4
		Indice 5 e 6
	*/
	for(i=0;i<TAM;i+=2){	
		
		// Guarda o valor do primeiro indice
		anterior = vetorB[i];
		
		// Troca o valor do primeiro indice pelo valor do próximo
		vetorB[i] = vetorB[i+1];
		
		// E próximo indice recebe o valor do primeiro
		vetorB[i+1] = anterior;
		
	}

	// Voltando a main
	
}


int main(){
	
	int i;
	
	// Variável de entrada
	float v[6] = {2.6, 1, 4.8, 3.9, 6, 5.9};
	
	// Chamada da função, passando o vetor como parâmetro
	trocarElementos(v, 6);
	
	// Os valores do vetor foram alterados, então vamos os exibir
	for(i=0;i<6;i++){
		
		printf("%.1f ", v[i]);
	}
	
}
