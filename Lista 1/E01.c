#include <stdio.h>

int main(){
	/* QUEST�O 01:
	O custo ao consumidor de um carro novo � a
	soma do custo de f�brica com a porcentagem
	do distribuidor e dos impostos (aplicados ao
	custo de f�brica). Desenvolver um algoritmo
	que calcule o custo ao consumidor de
	determinado carro.	*/

	int custo, totalD, totalI;
	int perDist, perImp;

	printf("Custo de fabrica? R$");
	scanf("%d", &custo);
	
	printf("Porcentagem do distribuidor? %%");
	scanf("%d", &perDist);
	
	printf("Porcentagem dos impostos? %%");
	scanf("%d", &perImp);
	
	
	printf("\nDistribuicao: R$%d\n", totalD = (custo*perDist)/100);
	printf("Impostos: R$%d\n", totalI = (custo*perImp)/100);
	printf("Valor final: R$%d", custo+totalD+totalI);
}

