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

	int i, n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
			
		if(i + (i+1) + (i+2) == n) {
			printf("%d eh triangular", n);
		}
	}
}

