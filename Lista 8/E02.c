#include <stdio.h>

/*	QUESTÃO 02:
	Implementar uma função que converta
	determinada temperatura em graus Celsius
	para graus Fahrenheit. */
	
	
float convTemperatura(float temperatura) {
	
	// DUAS SOLUÇÕES POSSÍVEIS
	
	// Armazenando o resultado do cálculo em uma váriavel, e depois retornar
	
	float res;
	
	res =  (temperatura * 9/5) + 32;
	
	return res;
	
	// OU retornando diretamento resultado do cálculo
	//	return (temperatura * 9/5) + 32;
}

int main() {
	
	float celsius, fah;
	
	printf("Temperatura em Celsius: ");
	scanf("%f", &celsius);
	
	/*	Chama a função convTemperatura, passando o parâmetro (celsius) pra ela 
		A variável fah armazena o valor retornado dessa função */
	 
	fah = convTemperatura(celsius);
	
	printf("%.2f grus Celsius = %.2f Fahrenheit", celsius, fah);
}
