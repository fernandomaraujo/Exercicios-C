#include <stdio.h>

/*	Questão 4:
	Fazer uma função que calculo o MDC (máximo divisor comum) entre dois números. */

/*	Referência foi o cálculo do processo por divisões sucessivas:

	https://www.somatematica.com.br/fundam/mdc.php
*/

int mdc(int x, int y) {

	int menor, maior, resto=0, restoAnterior=0;
	
	// Checando maior valor
	if(x > y) {
		maior = x;
		menor = y;
		
	} else {
		maior = y;
		menor = x;
	}
	
	// Utilizando como exemplo os números 48 e 30
	
	// Pegando o resto da primeira divisão
	
	resto = maior%menor; // 48 % 30 = 18
	
	// Enquanto o resto da divisão for diferente de 0
	while(resto!=0) {
		
		restoAnterior = resto; // 18, 12, 6
		
		resto = menor%restoAnterior;
		
		// 30 % 18 = 12
		// 30 % 12 = 6
		// 30 % 6 = 0
	}
	
	// Retornando resto antes de seu valor ser 0
	return restoAnterior;
}

int main() {
	
	int a, b, res;
	
	printf("Informe primeiro numero: ");
	scanf("%d", &a);
	
	printf("Informe segundo numero: ");
	scanf("%d", &b);
	
	// Passando os parâmetros para e função, e armazenando seu retorno
	res = mdc(a,b);
	
	printf("MDC de %d e %d = %d", a, b, res);
}
