#include <stdio.h>

/*	QUESTÃO 01:
	Desenvolver uma função que determine o
	número de ocorrências de um número inteiro x
	em um vetor A. */
	

int ocorrencias(int x, int vetor[], int TAM){
	
	int i, cont=0;
	
	// Percorrendo do indíce 0 a 9 (total de 10 posições)
	for(i=0;i<TAM;i++){
		
		// Se encontrar o valor de x, incrementa contador
		if(vetor[i] == x){
			cont++;
		}
	}
	
	// Depois de verificar as ocorrências, retornar o seu valor
	return cont;
}


int main(){
	
	int num, total;
	
	// Vetor de dez posições
	int v[10] = {1, 2, 3, 9, 7, 20, 20, 90, 85, 9};
	
	printf("Informe inteiro: ");
	scanf("%d", &num);
	
	// Chamando a função passando as varíaveis, e guardando seu retorno
	total = ocorrencias(num, v, 10);
	
	printf("Numero de ocorrencias do numero %d no vetor A = %d", num, total);
}
