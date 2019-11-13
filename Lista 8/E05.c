#include <stdio.h>

/*	QUESTÃO 05:
	Elaborar uma função que, dado um conjunto de
	300 valores inteiros, distribua-os em 2 vetores
	conforme forem pares ou ímpares. 
	 
	OBS: Adaptado para 20 valores, mas a lógica 
	funciona pra quaisquer valores pares. */
	
void paresImpares(){
	
	int i, cont=1, par=0, impar=0;
	
	int vetor[20];
	
	int vImpar[10], vPar[10];
	
	// Preenchendo automáticamente o vetor, com os valores de 1 a 20
	for(i=0;i<20;i++){
		
		vetor[i] = cont++;
		
	}
	
	// Depois de preenchido o vetor, fazer a checagem de valores pares e impares
	for(i=0;i<20;i++){
		
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
	
	// Exibindo, mas caso seja pra retornar os vetores, o código será atualizado
	
	for(i=0;i<10;i++){
		
		printf("%d |", vImpar[i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<10;i++){
		
		printf("%d |", vPar[i]);
	}
}


int main(){
	
	// Chamando a função
	paresImpares();
}
