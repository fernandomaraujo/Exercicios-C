#include <stdio.h>

/*	QUESTÃO 06:
	Faça uma função que, dado um vetor de reais,
	altere todas as ocorrências do número A pelo
	número B. 
	
	OBS: Considerando que o número exista no vetor */
	
void ocorrencias(float vetor[8], float a, float b){
	
	int i;
	
	for(i=0;i<8;i++){
		
		if(vetor[i] == a){
			
			vetor[i] = b;
		}
		
	}
}


int main(){
	
	int i;
	float x, y;
	
	// Preenchendo vetor manualmente
	float v[8] = {9.9, 4.6, 7.9, 8.1, 2.2, 6.9, 3.7, 9.9};
	
	printf("Substituir o numero: ");
	scanf("%f", &x);
	
	printf("Pelo numero: ");
	scanf("%f", &y);
	
	ocorrencias(v, x ,y);
	
	for(i=0;i<8;i++){
		
		printf("%.1f |", v[i]);
	}
}
