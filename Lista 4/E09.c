#include <stdio.h>

/* 	QUEST�O 09:
	Escrever um programa que encontre o
	quinto n�mero maior que 1000, cuja
	divis�o por 11 tenha resto 5. */

int main() {

	int i, num=0, cont=0;

	for(i=1000;cont<=5;i++) {
		
		/* 	se a divis�o do i por 11 der resto 5, incrementa contador.
			quando contador chegar em 6 (n�mero maior que a condi��o do for), 
			o for terminar� e o n�mero desejado ser� o penultimo registrado no i */
		if(i%11==5) {
			cont++;
		}
		
		// guardando o quinto numero, antes da sa�da do for
		num = i;
	}
	
	printf("O numero %d tem resto %d", num, num%11);
}

