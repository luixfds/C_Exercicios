// Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 10

#include <stdio.h>

int main() {
    
    int a = 1, b = 1;
    
      for (a=1;a<=10;a++){
        for(b=1;b<=10;b++){
            printf("%i * %i = %i\n",a,b,a*b);
        }
        printf("\n");
      }
    
    return 0;
}