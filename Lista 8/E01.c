#include <stdio.h>

/*  QUESTÃO 01:
    Desenvolver uma função que exiba os múltiplos
    de N compreendidos no intervalo definido por
    A e B. */


void intervalo(int x, int y, int z) {

  int i;

  for(i=x;i<=y;i++) {

    if(i%z==0) {
      printf("%d ", i);
    }
  }
}

int main() {

  int a, b, n;

  printf("Informe primeiro numero: ");
  scanf("%d", &a);

  printf("Informe segundo numero: ");
  scanf("%d", &b);

  printf("Informe numero pra checagem de multiplos: ");
  scanf("%d", &n);

  intervalo(a, b, n);
}
