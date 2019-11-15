#include <stdio.h>

/*	QUESTÃO 05:
	Elaborar uma função que, dado um conjunto de
	300 valores inteiros, distribua-os em 2 vetores
	conforme forem pares ou ímpares. 
	 
	OBS: Adaptado para 20 valores, mas a lógica 
	funciona pra quaisquer valores pares. */
	
void paresImpares(int vetor[], int vImpar[], int vPar[], int TAM){
	
	int i, par=0, impar=0;
	
	// Depois de preenchido o vetor, fazer a checagem de valores pares e impares
	for(i=0;i<TAM;i++){
		
		// Se impar
		if(vetor[i] % 2 == 1 ){
			
			// Inserir valor no vetor de impares
			vImpar[impar] = vetor[i];
			
			// O contador representa a posição do índice, no vetor de impares
			impar++;
			
		} else {
			// Se par
			
			// Inserir valor no vetor de pares
			vPar[par] = vetor[i];
			
			// O contador representa a posição do índice, no vetor de pares
			par++;
		}
		
		
	}
	
}


int main(){
	
	int i, cont=0;
	int v[20]; // variável de entrada
	int vetImpar[10], vetPar[10]; // variáveis de saída
	
	// Preenchendo automáticamente o vetor, com os valores de 1 a 20
	for(i=0;i<20;i++){
		
		v[i] = cont++;
		
	}
	
	// Chamando a função, passando os parâmetros
	paresImpares(v, vetImpar, vetPar, 20);
	
	// Exibindo vetores
	for(i=0;i<10;i++){
		
		printf("%d |", vetImpar[i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<10;i++){
		
		printf("%d |", vetPar[i]);
	}
}
