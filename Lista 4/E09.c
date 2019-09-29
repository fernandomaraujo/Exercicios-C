#include <stdio.h>

/* 	QUESTÃO 09:
	Escrever um programa que encontre o
	quinto número maior que 1000, cuja
	divisão por 11 tenha resto 5. */

int main() {

	int i, num=0, cont=0;

	for(i=1000;cont<=5;i++) {
		
		/* 	se a divisão do i por 11 der resto 5, incrementa contador.
			quando contador chegar em 6 (número maior que a condição do for), 
			o for terminará e o número desejado será o penultimo registrado no i */
		if(i%11==5) {
			cont++;
		}
		
		// guardando o quinto numero, antes da saída do for
		num = i;
	}
	
	printf("O numero %d tem resto %d", num, num%11);
}

