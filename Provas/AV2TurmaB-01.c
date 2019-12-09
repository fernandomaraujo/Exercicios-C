#include <stdio.h>
#include <string.h>

/*	Questão 01 [2,5 pontos]:
	Desenvolver uma função que permaneça lendo valores
	inteiros até que um negativo seja fornecido. Ao final,
	devem ser ser retornados: 
	
	i) a quantidade de elementos fornecidos;
	ii) o maior deles;
	iii) a média dos ímpares.
	 
	Nota: além da implementação da função, deve ser
	apresentada a main chamando-a, com a devida
	manipulação dos argumentos de entrada e/ou saída.
*/


float lerValores(int *quant, int *m, float *media){
	
	int num, contImpar=0;
	
	// Lendo valores até um negativo ser inserido
	do{
		
		printf("Informe numero: ");
		scanf("%d", &num);
		
		// Se número for positivo, contando apenas com eles
		if(num >= 0){
			
			// iii)
			if(num%2 != 0){
				
				*media = *media + num;
				contImpar++;
			}
			
			// ii)
			if(num > *m){
				
				*m = num;
			}
			
			// i)
			*quant = *quant + 1;
			
		}
	
		
	} while(num >= 0);
	
	printf("\n");
	
	// Casting, para o total ser em float
	return (float)(*media)/contImpar;
}

int main(){
	
	int quantidade=0, maior=0; 
	float med, res;
	
	res = lerValores(&quantidade, &maior, &med);
	
	printf("Elementos fornecidos = %d\n", quantidade);
	printf("Maior deles = %d\n", maior);
	printf("Media dos impares = %.2f\n", res);
}
