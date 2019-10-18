#include <stdio.h>

/*	Questão 03 [2,5 pontos]:
	Desenvolver um programa que leia um número inteiro
	(no intervalo de 1 a 2000) e exiba o número romano
	equivalente. */

int main() {

	int i, num;
	int resMil, restoMil, resQuin, restoQuin, resCem, restoCem, resCinq, restoCinq, resDez, restoDez;
	int resNove, restoNove, resOito, restoOito, resSete, restoSete, resSeis, restoSeis, resCinco, restoCinco;
	int resQuatro, restoQuatro;

	printf("Informa um numero: ");
	scanf("%d", &num);
	
	if(num <= 0 || num > 2000) {
		printf("Numero invalido.");
		
	} else {
		
		// 1000 - M
		resMil = num/1000;
		restoMil = num%1000;
		
		for(i=1;i<=resMil;i++) {
			printf("M");
		}
		
		// 500 - D
		resQuin = restoMil/500;
		restoQuin = restoMil%500;
		
		for(i=1;i<=resQuin;i++) {
			printf("D");
		}
		
		// C - 100
		resCem = restoQuin/100;
		restoCem = restoQuin%100;
		
		for(i=1;i<=resCem;i++) {
			printf("C");
		} 
		
		// L - 50
		resCinq = restoCem/50;
		restoCinq = restoCem%50;
		
		for(i=1;i<=resCinq;i++) {
			printf("L");
		}
		
		// X - 10
		
		resDez = restoCinq/10;
		restoDez = restoCinq%10;
		
		for(i=1;i<=resDez;i++) {
			printf("X");
		}
		
		// 9 - IX
		
		resNove = restoDez/9;
		restoNove = restoDez%9;
		
		for(i=1;i<=resNove;i++) {
			printf("IX");
		}
		
		// 8 - VIII
		
		resOito = restoNove/8;
		restoOito = restoNove%8;
		
		for(i=1;i<=resOito;i++) {
			printf("VIII");
		}
		
		// 7 - VII
		
		resSete = restoOito/7;
		restoSete = restoOito%7;
		
		for(i=1;i<=resSete;i++) {
			printf("VII");
		}
		
		// 6 - VI
		
		resSeis = restoSete/6;
		restoSeis = restoSete%6;
		
		for(i=1;i<=resSeis;i++) {
			printf("VI");
		}
		
		// 5 - V
		
		resCinco = restoSeis/5;
		restoCinco = restoSeis%5;
		
		for(i=1;i<=resCinco;i++) {
			printf("V");
		}
		
		// 4 - IV
		
		resQuatro = restoCinco/4;
		restoQuatro = restoCinco%4;
		
		for(i=1;i<=resQuatro;i++) {
			printf("V");
		}
		
		// 3, 2, 1 - III, II, I
		for(i=i;i<=restoQuatro;i++) {
			
			//if(restoQuatro%i==0) {
				printf("I");
			//}
		}
	}
}

