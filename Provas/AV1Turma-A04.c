#include <stdio.h>

/* 	Questão 04 [2,5 pontos]:
	Dados três números inteiros a, b e c, implementar um
	programa que exiba os números do intervalo definido
	por a e b (sempre começando em a e terminando em
	b), com exceção daqueles que sejam múltiplos de c.

	Exemplos:
	a = 10, b = 20, c = 3
	Saída: 10, 11, 13, 14, 16, 17, 19, 20

	a = 25, b = 18, c = 5
	Saída: 24, 23, 22, 21, 19, 18 

	Nota: devem ser apresentadas três versões do
	programa, uma para cada estrutura de repetição
	estudada. */

int main() {

	int i, a, b, c, inicio, fim;

	printf("Informe A: ");
	scanf("%d", &a);
	
	printf("Informe B: ");
	scanf("%d", &b);
	
	printf("Informe C: ");
	scanf("%d", &c);
	
	// testando se A e B são divisiveis por C
	
	if(a%c==0) {
		inicio = a-1;
	} else {
		inicio = a;
	}
	
	if(b%c==0) {
		fim = b-1;
	} else {
		fim = b;
	}
	

	// Solução em for
	if(a<=b) {
		
		for(i=inicio;i<=fim;i++) {
		
			if(i%c!=0) {
				printf("%d ", i);
			}
		}
		
	} else {
		
		for(i=inicio;i>=fim;i--) {
		
			if(i%c!=0) {
				printf("%d ", i);
			}
		}
	}
	
	
	// Solução em while
	
	i = inicio; // inicializando i
	
	if(a<=b) {
				
		while(i<=fim) {
			if(i%c!=0) {
				printf("%d ", i);
			}
			
			i++;	
		}
		
	} else {
		
		while(i>=fim) {
			if(i%c!=0) {
				printf("%d ", i);
			}
			
			i--;	
		}
	}
	
	// solução em do while
	
	i = inicio; // inicializando i
	
	if(a<=b) {
		
		do {
			if(i%c!=0) {
				printf("%d ", i);
			}
			
			i++;
		} while(i<=fim);
		
	} else {
		
		do {
			if(i%c!=0) {
				printf("%d ", i);
			}
			
			i--;
		} while(i>=fim);
		
	}
}

