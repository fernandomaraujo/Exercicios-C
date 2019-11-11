#include <stdio.h>

/*	QUESTÃO 01:
	Desenvolver uma função que determine o
	número de ocorrências de um número inteiro x
	em um vetor A. */
	

int ocorrencias(int x){
	
	int i, cont=0;
	
	// Vetor de dez posições
	int vetorA[10] = {1, 2, 3, 9, 7, 20, 20, 90, 85, 9};
	
	// Percorrendo do indíce 0 a 9 (total de 10 posições)
	for(i=0;i<10;i++){
		
		// Se encontrar o valor de x, incrementa contador
		if(vetorA[i] == x){
			cont++;
		}
	}
	
	// Depois de verificar as ocorrências, retornar o seu valor
	return cont;
}


int main(){
	
	int num, total;
	
	printf("Informe inteiro: ");
	scanf("%d", &num);
	
	// Chamando a função passando a varíavel, e guardando seu retorno
	total = ocorrencias(num);
	
	printf("Numero de ocorrencias do numero %d no vetor A = %d", num, total);
}
