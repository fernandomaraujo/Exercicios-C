#include <stdio.h>

int main() {
	/*  QUESTÃO 06:
	Fazer um algoritmo que determine a ordem de
	uma data (dia e mês) no ano.
	Exemplos:
	01/01 - 1º dia do ano
	03/02 - 34º dia do ano */
	
	int dia, mes, diaAno;
	
	printf("Dia: ");
	scanf("%d", &dia);
	
	printf("Mes: ");
	scanf("%d", &mes);
	
	// ano de 2019
	switch(mes) {
		case 1:
			printf("%d/Janeiro - %do dia do ano.", dia, dia);
			break;				
		case 2:
			diaAno = 31 + dia;
			printf("%d/Fevereiro - %do dia do ano.", dia, diaAno);
			break;	
		case 3:
			diaAno = 31 + 28 + dia;
			printf("%d/Março - %do dia do ano.", dia, diaAno);
			break;
		case 4:
			diaAno = 31 + 28 + 31 + dia;
			printf("%d/Abril = %do do ano.", dia, diaAno);
			break;
		case 5:
			diaAno = 31 + 28 + 31 + 30 + dia;
			printf("%d/Marco = %do do ano.", dia, diaAno);
			break;
		case 6:
			diaAno = 31 + 28 + 31 + 30 + 31 + dia;
			printf("%d/Junho = %do do ano.", dia, diaAno);
			break;
		case 7:
			diaAno = 31 + 28 + 31 + 30 + 31 + 30 + dia;
			printf("%d/Julho = %do do ano.", dia, diaAno);
			break;
		case 8:
			diaAno = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dia;
			printf("%d/Agosto = %do do ano.", dia, diaAno);
			break;
		case 9:
			diaAno = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dia;
			printf("%d/Setembro = %do do ano.", dia, diaAno);
			break;
		case 10:
			diaAno = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia;
			printf("%d/Outubro = %do do ano.", dia, diaAno);
			break;
		case 11:
			diaAno = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia;
			printf("%d/Novembro = %do do ano.", dia, diaAno);
			break;
		case 12:
			diaAno = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia;
			printf("%d/Dezembro = %do do ano.", dia, diaAno);
			break;
			
		default:
			printf("Mes invalido.");
	}
}

