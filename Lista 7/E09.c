#include <stdio.h>

/*	QUESTÃO 09:
	Implementar uma função que, dado um
	número inteiro, calcule (e retorne) a soma e a
	média de seus divisores. */


void somaMediaDivisores(int n, int *soma, float *media){
	
	int i, s=0, cont=0;
	float m;
	
	for(i=1;i<=n;i++){
		
		if(n%i == 0){
			// somando divisores e incrementando suas quantidades
			s = s + i;
			cont++;
		}
	}
	
	/* 	calculando média e realizando casting em uma das váriaveis,
		já que é o resultado de uma média, que pode conter número reais*/
	m = (float)s/cont;
	
	// atribuindo resultado nas váriaveis de saída
	*soma = s;
	*media = m;
	
}

int main(){
	
	int num, sum;
	float avarege;
	
	printf("Informe inteiro: ");
	scanf("%d", &num);
	
	// parâmetro de entrada = num
	// parâmetros de saída = sum, avarege
	somaMediaDivisores(num, &sum, &avarege);
	
	printf("Soma = %d e Media = %.1f", sum, avarege);
}
