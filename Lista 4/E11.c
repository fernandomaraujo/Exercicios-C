#include <stdio.h>

/* 	QUEST�O 11:
	Implementar um programa no qual o
	usu�rio informa um n�mero e verifica-se se
	ele � um n�mero triangular.
	Obs.: Um n�mero � triangular quando ele
	for resultado do produto de tr�s n�meros
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

