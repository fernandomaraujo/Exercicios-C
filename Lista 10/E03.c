#include <stdio.h>
#include <string.h>

/* 	Questão 03:
	Desenvolver uma função que, dada uma string
	s, crie uma substring que inicie na posição p de
	s e contenha n caracteres.
	
	Observações: se p e/ou n forem inválidos, a
	substring será vazia; ii) se s não possuir n
	caracteres além de p, a substring a ser criada
	começará em p e terminará no final de s. */


void substring(char s[], char sub[], int p, int n) {
	
	int i, quant=0;
	int tam = strlen(s);
	
	/*	Se a posição informada for de um número negativo OU
		Se a posição for maior que a quantidades de caracteres da string OU
		Se o número de caracteres for maior que a string
	*/
	
	if( (p < 0) || (p >= tam) || (n > tam) ){
		
		// Substring vazia
		sub[0] = '\0'; // OU strcpy(sub, "");
		
	} else {
		
		/*	Condições:	
			Enquanto o i (8) for menor do que a soma de p + n (14) que
			no exemplo, fará o for rodar p vezes (6) E
			Enquanto valores na string forem diferentes de /0
		*/
		
		for(i=p; (i < p + n) && (s[i] != '\0'); i++){
			
			sub[quant] = s[i];
			quant++; // quant é o indíce da substring
		}
		
		/* 	Como o for percorreu a string ATÉ encontrar o /0, o mesmo 
			não foi inserido na string, então esse é o momento pra inserir
		*/
		sub[quant] = '\0'; // TODA string precisa finalizar com o \0
	}
}

int main(){
	
	char s1[14] = "Pão de queijo";
	char s2[14];
	
	int posicao = 8;
	int letras = 6;
	
	substring(s1, s2, posicao, letras);
	
	printf("Substring = %s", s2);
}
