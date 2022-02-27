// Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.

#include <stdio.h>

int main() {
    
    float metros = 0.0, decimetros = 0.0, centimetros = 0.0, milimetros = 0.0;    
    puts("Entre com a quantidade de metros: ");
    scanf("%f", &metros);
    
    // decimetros
    decimetros = metros * 10;
    printf("\n- decimetros: %.2f", decimetros);
    
    // centimetros
    centimetros = metros * 100;
    printf("\n- centimetros: %.2f", centimetros);
    
    // milimetro
    milimetros = metros * 1000;
    printf("\n- milimetros: %.2f", milimetros);
    
    
    return 0;
}