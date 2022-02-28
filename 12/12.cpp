/* 
12 - Elaborar um programa que simule um jogo de adivinha��o, onde o usu�rio deve informar um valor aleat�rio 
e o programa deve testar se o resultado est� certo ou errado, calculando o n�mero de vezes que o usu�rio necessitou 
para acertar. Em cada intera��o o programa deve fornecer uma pista.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void acertou(){
	for(;;){
		system("Color a");
		system("Color b");
		system("Color c");
		system("Color d");
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numeroSecreto = 100;
	int pontos = 1000;
	int vezes = 0;
	do{
		system("cls");
		int num = 0;
		
		printf("\t\t\t======================================\n");
		printf("\t\t\t=========Jogo da adivinha��o =========\n");
		printf("\t\t\t======================================\n\n\n");
		printf("\t\t\tTetativas: %i \n\n", vezes);
		printf("\t\t\tDigite um n�mero:\n");
		printf("\t\t\t>>");
		scanf("%i", &num);
		
		if(num == numeroSecreto){
			++vezes;
			printf("\n\t\t\tAcertou - %i tentativas \n\n\n", vezes);
			acertou();
			system("pause");
			break;
		}else if(num < 0){
			printf("\n\t\t\tN�o digite numeros negativos\n\n");
			system("pause");
		}else{
			printf("\n\t\t\tContinue tentando -");
			if(num > numeroSecreto){
				printf("  O numero secreto � menor do que: %i \n\n\n",num);
			}else if(num < numeroSecreto){
				printf("  O numero secreto � maior %i \n\n\n ", num);
			}
			++vezes;
			system("pause");
		}
		
		
	}while(true);

	return 0;
}



