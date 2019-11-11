#include <stdio.h>

/*	QUESTÃO 03:
	Pede-se a implementação de uma função que,
	dado um vetor contendo números reais,
	determine se o mesmo encontra-se ordenado
	de forma crescente. */


int seOrdenado(float vetorB[10]){
	
	int i, cont=0;
	
	// Percorrendo do indíce 0 a 9 (total de 10 posições)
	for(i=0;i<10;i++){
		
		// Se o valor da posicão atual for MENOR do que o valor da próxima posição
		if(vetorB[i] < vetorB[i+1]){
			
			// cont recebe 1, para ordem crescente
			cont = 1;
			
		} else {
			
			/* 	Caso o valor da posição atual for MAIOR do que o valor da próxima posição,
				cont recebe 0, para ordem não crescente 
				
				Já usando return, porque caso APENAS UM valor não esteja de forma crescente,
				isso já quer dizer que o vetor não está ordenado da forma esperada
				 */
			return 0;
		}
	}
	
	// Caso esteja em ordem crescente, o retorno será feito por aqui
	return cont;
	
}


int main(){
	
	int res;
	
	// Vetor preenchido de forma crescente, pode alterar os valores para testes
	float vetorA[10] = {1.6, 2.7, 3, 4.8, 5.9, 6.9, 7.8, 8, 9.4, 10};
	
	// Chamando a função passando o vetor, e guardando o valor do retorno da função
	res = seOrdenado(vetorA);
	
	if(res > 0) {		
		printf("Ordenado");
		
	} else {
		printf("Desordenado");
	}
}
