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

	int n, prod, n1=1, n2=2, n3=3;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	prod = n1 * n2 * n3;
	
	while(prod<n) {
		
		n1++;
		n2++;
		n3++;
		
		prod = n1 * n2 * n3;
	}
	
	if(prod == n) {
		printf("%d eh triangular", n);
		
	}else{
		printf("%d nao eh triangular", n);
	}
}

