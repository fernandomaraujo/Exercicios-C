#include <stdio.h>

/* 	QUESTÃO 01: 
	O IMC (Índice de Massa Corporal)
	é um critério da Organização Mundial de Saúde
	para dar uma indicação sobre a condição de
	peso de uma pessoa adulta. A fórmula é: 

		IMC = peso / altura(ao quadrado)
	
	Elabore um algoritmo que, dados o peso e a
	altura de um adulto, determine a sua condição
	de acordo com a tabela abaixo:
		
	IMC < 18,5 - Abaixo do peso
	18,5 <= IMC < 25,0 - Peso ideal
	25,0 <= IMC < 30,0 - Sobrepeso
	30,0 <= IMC < 35,0 - Obesidade grau I
	35,0 <= IMC < 40,0 - Obesidade grau II
	IMC > 40,0 - Obesidade grau III */

int main() {
	
	float altura, peso, imc;
	
	printf("Sua altura: ");
	scanf("%f", &altura);	

	printf("Seu peso: ");
	scanf("%f", &peso);
	
	// calculo do imc
	imc = peso / (altura*altura);
	
	if(imc < 18.5) {
		printf("IMC = %.2f, abaixo do peso", imc);
		
	} else if(imc < 25.0){
		printf("IMC = %.2f, peso ideal", imc);
		
	} else if(imc < 30.0) {
		printf("IMC = %.2f, sobrepeso", imc);
		
	} else if(imc < 35.0) {
		printf("IMC = %.2f, obesidade grau I", imc);
		
	} else if(imc < 40.0) {
		printf("IMC = %.2f, obesidade grau II", imc);
		
	} else {
		printf("IMC = %.2f, obesidade grau III", imc);
	}
	
}
