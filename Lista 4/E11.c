#include <stdio.h>

/* 	QUESTÃO 11:
	Implementar um programa no qual o
	usuário informa um número e verifica-se se
	ele é um número triangular.
	Obs.: Um número é triangular quando ele
	for resultado do produto de três números
	consecutivos.
	Exemplo: 24 = 2 x 3 x 4.  */

int main() {

	int i, n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
			
		if(i + (i+1) + (i+2) == n) {
			printf("%d eh triangular", n);
		}
	}
}

