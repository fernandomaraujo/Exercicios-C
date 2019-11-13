#include <stdio.h>

/*	QUESTÃO 06:
	Faça uma função que, dado um vetor de reais,
	altere todas as ocorrências do número A pelo
	número B. 
	
	OBS: Considerando que o número exista no vetor */
	
void ocorrencias(float a, float b){
	
	int i;
	
	// Preenchendo vetor manualmente
	float vetor[8] = {9.9, 4.6, 7.9, 8.1, 2.2, 6.9, 3.7, 9.9};
	
	for(i=0;i<8;i++){
		
		if(vetor[i] == a){
			
			vetor[i] = b;
		}
		
		// Exibindo, mas caso seja pra retornar os vetores, o código será atualizado
		printf("%.1f |", vetor[i]);
	}
}


int main(){
	
	float x, y;
	
	printf("Substituir o numero: ");
	scanf("%f", &x);
	
	printf("Pelo numero: ");
	scanf("%f", &y);
	
	
	ocorrencias(x,y);
}
