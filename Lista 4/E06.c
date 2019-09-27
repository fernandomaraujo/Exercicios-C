#include <stdio.h>

/*	QUESTÃO 06:
	Criar um programa que exiba os N
	primeiros termos da seguinte série:
	1,2,8,64,1024,... */

int main() {

	int n, i, j, num=1, res=1;
	
	printf("Informe numero: ");
	scanf("%d", &n);
	
	printf("%d ", num);
	
	for(i=1;i<n;i++) {
		
		num = num * 2;
		
		res = res * num;
			
		printf("%d ", res);
		
	}
	
	/* 	Lógica:
	
		(multiplicando x multiplicador = produto)
	
		Usando os resultados obtidos no exercício 5 como
		multiplicador (linha 19).
		Depois, o valor da váriavel res foi multiplicada por
		num, e assim o valor de res será atualizado a cada
		execução do for (linha 21). 
	
		1 = primeiro termo (fora do for, linha 15)
		2 =  1 x 2
		8 =  2 x 4
		64 = 8 x 8
		1024 = 64 x 16
	*/
}

