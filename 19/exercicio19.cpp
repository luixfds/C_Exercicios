/*19 - Faca um programa para verificar se um n�mero inteiro lido � quadrado perfeito. 
Para que um n�mero seja quadrado perfeito a soma dos seus divisores 
deve resultar num valor igual ao n�mero.
Ex: Os divisores de 6 s�o: 1, 2, 3 que somados totalizam 6, logo 6 � quadrado perfeito. ERRADO
UM QUADRADO PERFEITO SE REFERE A SOMA DE TODOS OS NUMEROS IMPARES ANTERIORES A ELE*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

main()
 {
 int numero,c,p;
 printf("Informe um numero positivo: ");
 scanf("%d", &numero);
 while (numero > 0)
 {
 c = 1;
p = c * c;
 while (p < numero)
 {
 c++;
 p=c * c;
 }
 if (p == numero)
 printf("\nO numero informado eh quadrado perfeito.\n");
 else
 printf("\nO numero informado nao eh quadrado perfeito.\n");
 printf("Informe um numero positivo: ");
 scanf("%d", &numero);
 }
 printf("\n");
 system("pause");
 return 0;
 }
