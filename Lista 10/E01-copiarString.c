#include <stdio.h>
#include <string.h>

// Caso strcpy não existisse, a copia de uma string para outra seria assim 

void copiar(char dest[], char orig[]){
	
	int i, tam;
	
	// Tamanho da string de origem
	tam = strlen(orig);
	
	for(i=0;i<=tam;i++){
		
		dest[i] = orig[i];
	}
	
}


int main(){
	
	char s1[8];
	char s2[8] = "Abacaxi";
	
	// destino, origem
	copiar(s1, s2);
	
	
	printf("S1 = %s", s1); // Abacaxi
}
