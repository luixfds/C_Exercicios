/*20 – Faça um programa que contenha um menu com 4 opções:

1 – calcular o fatorial de um número dado

2 – calcular a raiz quadrada de 3 números dados

3 – imprimir a tabuada completa de 1 a 10

4 – sair do programa

Cada um dos 3 itens acima deve ser elaborado em forma de função ou

procedimento.*/



#include <stdio.h>
#include <stdlib.h>


int numero;

int main(){
	
	int num1, num2, num3, fat, result, i;
	
	printf ("EXERCICIO 20 \n\n");
	printf ("[1] Fatorial \n");
	printf ("[2] Raiz quadrada de 3 números \n");
	printf ("[3] Tabuada completa \n");
	printf ("[4] SAIR \n");
	printf ("\n Qual quer abrir? \n");
	scanf("%d", &numero);
	
	switch(numero){
		case 1 :
			system("cls");
			printf("Fatorial\n\n");
			printf("Digite um numero: \n");
			scanf("%i",&num1);
			for(fat = 1; num1 > 1; num1 = num1 - 1)
				fat = fat * num1;
 
			printf("Fatorial calculado: %d", fat);
			break;
			
		case 2 :
			system("cls");
			printf("Raiz quadrada de 3 números\n\n");
			printf("Digite um numero: \n");
			scanf("%i",&num1);
			printf("Digite outro numero: \n");
			scanf("%i",&num2);
			printf("Digite outro numero: \n");
			scanf("%i",&num3);
			
			printf("Raiz quadrada do numero 1 eh: %i do numero 2 eh: %i do numero 3 eh: %i \n\n",num1*num1,num2*num2,num3*num3);
			break;
			
		case 3 :
			system("cls");
			printf("Tabuada completa\n\n");
			for(int f = 1; f <= 10; f++){
				for(int i = 1; i <= 10; ++i){
				printf("%i x %i = %i\n",f, i,f*i);
				}
				printf("\n");
			}
			break;
			
		case 4 :
			system("cls");
			printf("Escolheu sair");
			break;
		
		default:
			system("cls");
			printf("NAO TEMOS ISSO NO MENU BOBO");
	}
	
	
}
