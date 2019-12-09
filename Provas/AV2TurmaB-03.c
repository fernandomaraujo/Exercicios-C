#include <stdio.h>
#include <string.h>

/*	Questão 03 [2,5 pontos]:
	Fazer uma função que crie um endereço de e-mail da 
	FAETERJ-Rio, dados o nome e a data de nascimento da
	pessoa, respeitando as regras definidas abaixo:
	 
	i. 	A data de nascimento fornecida estará no formato
		DD/MM/AAAA;
	ii.	O endereço de e-mail será representado pelas 
		inicias do nome da pessoa, um ponto (.), e a data de
		nascimento (sem as barras), seguidos da sequência
		@faeterj-rio.edu.br.
	
	Exemplo:
	
	Nome: Joao Silva Pereira
	Data de nascimento: 15/10/1998
	
	e-mail gerado: JSP.15101998@faeterj-rio.edu.br
*/

void montarEmail(char nome[], char data[], char email[]){
	
	int i, tam = 1;
	
	// Primeira inicial do nome, também é o começo do email
	email[0] = nome[0];
	
	// Percorrendo o nome, e começando do indíce 1
	for(i=1;i<strlen(nome);i++){
		
		if(nome[i] == ' '){
			
			// Indíce do email também começa pelo 1
			email[tam] = nome[i+1];
			tam++;
		}
	}
	
	// Depois das iniciais do nome, o ponto é inserido
	email[tam] = '.';
	tam++;
	
	// Percorrendo a data
	for(i=0;i<strlen(data);i++){
		
		if(data[i] != '/'){
			
			email[tam] = data[i];
			tam++;
		}
	
	}
	
	// ?
	email[tam] = '\0';
	
	strcat(email, "@faeterj-rio.edu.br");
}


int main(){
	
	char n[27] = "Fernando Marinho de Araujo";
	char d[11] = "16/12/1996";
	char e[19];
	
	montarEmail(n, d, e);
	
	printf("Email = %s", e); 
}
