// 17 - Elaborar um programa em C que calcula o fatorial de um número informado pelo usuário, utilizando função.
#include <stdio.h>
#include <math.h>
int fatorial(int n){
	if ( n == 1 || n == 0 ) {
      int i = 1;
      printf("Fatorial: 1\n");
    }
    else {
    	int i = 1;
      	for (i = 1; n > 1; n--) {
		i = i * n;
    }
      printf("Fatorial: %d\n",i);
    }
}
int main() {

  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

  if ( n < 0 ) {
    printf("Nao existe fatorial de numero negativo, meu querido\n");
  }
  else {
  	fatorial(n);
  }

  return(0);
}

