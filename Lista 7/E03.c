#include <stdio.h>

/*	QUESTÃO 03:
	Desenvolver uma função que calcule o n-ésimo
	termo da sequência de Fibonacci. */

int sequencia(int termo){
	
	int i, a, b, fib;
	
	a=0;
	b=1;
	
	// Sequência = 0, 1, 1, 2, 3, 5, 8, 13, ...
	
	for(i=1;i<=termo;i++){
		
		// se primeiro e segundo termos, caso não
		if(i == 1) {
			fib = a;
			
		} else if(i == 2) {
			fib = b;
			
		} else {
			
			/* 	A partir do terceiro termo e em diante,
				faça a soma dos valores iniciais (a + b = 0 + 1).
				 
				Após guardar o resultado da soma na váriavel fib, 
				os valores iniciais são substituidos, fazendo assim, 
				atualizar seus valores anteriores e ir somando a cada
				iteração do for (que roda até o termo desejado pelo usuário)
			 */
			
			fib = a + b;
			a = b;
			b = fib;
		}
	}
	
	return fib;
}

int main(){
	
	int n, t;
	
	printf("Informe o termo desejado da sequencia: ");
	scanf("%d", &n);
	
	t = sequencia(n);
	
	printf("%do termo da sequencia de Fibonacci = %d", n, t);
}
