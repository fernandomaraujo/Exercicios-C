#include <stdio.h>

/* 	QUEST�O 05:
	Criar um programa que exiba os N
	primeiros termos da seguinte s�rie:
	1,2,4,8,16,32,... */

void main() {
	
	int i, n, num=1;
	
	printf("Informe N: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
		printf("%d ", num);
		
		num = num * 2;
	}	
}
