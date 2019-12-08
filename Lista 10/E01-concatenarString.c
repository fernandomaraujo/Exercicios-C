#include <stdio.h>
#include <string.h>

// Caso strcat não existisse, a concatenação de strings seria assim

void concatenar(char s1[], char s2[]){
	
	int i, j, tam = strlen(s2);
	
	printf("%d\n", tam);
	
	// Nesse caso, i=0, j=4; i<=7

	for(i=0, j=strlen(s1); i<=strlen(s2); i++, j++){
		
		s1[j] = s2[i];
	}
}

int main(){
	
	char destino[20] = "The ";
	char origem[8] = "Witcher";
	
	concatenar(destino, origem);
	
	printf("%s", destino);
}
