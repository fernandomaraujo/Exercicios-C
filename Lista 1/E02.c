#include <stdio.h>

int main(){
	/* QUESTÃO 02:
	Elabore um algoritmo que, dada a idade de um
	nadador, classifique-o em uma das seguintes
	categorias:
	
	Infantil A, 0 - 4 anos
	Infantil B, 5 - 7 anos
	Infantil C, 8 - 10 anos
	Juvenil A, 11 - 13 anos
	Juvenil B, 14 - 17 anos
	Adulto, 18 anos ou mais */
	
	int idade;
	
	printf("Idade do nadador? ");
	scanf("%d", &idade);
	
	if(idade<=4){
		printf("Infantil A");
		
	}else if(idade<=7){
		printf("Infantil B");
		
	}else if(idade<=10) {
		printf("Infantil C");
		
	}else if(idade<=13) {
		
		printf("Juvenil A");
	}else if(idade<=17) {
		
		printf("Juvenil B");
	}else {
		printf("Adulto");
	}
}

