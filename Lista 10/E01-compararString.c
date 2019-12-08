#include <stdio.h>
#include <string.h>

// Caso strcmp não existisse, seu funcionamento seria mais ou menos assim

// Retorna um número negativo, zero ou positivo
int comparar(char s1[], char s2[]){
	
	int i;
	
	/*	Condições:
		Caso as letras sejam todas iguais E
		Enquanto indíce do s1 for diferente de \0 E
		Enquanto indíce do s2 for diferente de \0
	*/
	for(i=0; (s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'); i++);
	
	// Se o /0 estiver no mesmo indíce, nas duas strings
	if( (s1[i] == '\0') && (s2[i] == '\0') ) {
		
		return 0;
		
	} else {
		
		// Alfabeticamente, s1 vem antes
		if(s1[i] < s2[i]) {
			
			return -1;
			
		} else {
			
			// Alfabeticamente, s2 vem antes
			return 1;
		}
	}
	
}

int main(){
	
	int retorno;
	
	char nomeUm[5] = "abcd";
	char nomeDois[5] = "efgh";
	
	retorno = comparar(nomeUm, nomeDois);
	
	printf("%d", retorno);
}
