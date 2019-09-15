#include <stdio.h>

int main() {
	/* QUEST�O 07:
	Escreva um algoritmo para calcular o sal�rio
	semanal de uma pessoa, determinado pelas
	condi��es que seguem: se o n�mero de horas
	trabalhado for inferior ou igual a 40, a pessoa
	recebe x reais por hora; caso contr�rio, a
	pessoa recebe um adicional de 50% para cada
	hora trabalhada acima das 40 iniciais */
	
	int horas;
	float adicional, pagHora, salario, horasAcima, horasAcimaValor;

	printf("Horas trabalhadas: ");
	scanf("%d", &horas);
	
	printf("Valor por horas de trabalho:\nR$");
	scanf("%f", &pagHora);
	
	if(horas<=40) {
		salario = horas*pagHora;
		
		// pagamento
		printf("Salario semanal = R$%.2f", salario);
	} else {
		salario = horas*pagHora;
		
		// horas trabalhadas acima de 40h
		horasAcima = horas - 40;
		
		// valor do pagamento pelas horas acima de 40h
		horasAcimaValor = horasAcima * pagHora;
		
		// 50% do pagamento por hora
		adicional = (horasAcimaValor*50)/100;
		
		// pagamento
		printf("Adicional = R$%.2f\n", adicional);
		printf("Salario semanal = R$%.2f", salario+adicional);		
	}

}

