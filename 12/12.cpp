/* 
12 - Elaborar um programa que simule um jogo de adivinhação, onde o usuário deve informar um valor aleatório 
e o programa deve testar se o resultado está certo ou errado, calculando o número de vezes que o usuário necessitou 
para acertar. Em cada interação o programa deve fornecer uma pista.
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
		printf("\t\t\t=========Jogo da adivinhação =========\n");
		printf("\t\t\t======================================\n\n\n");
		printf("\t\t\tTetativas: %i \n\n", vezes);
		printf("\t\t\tDigite um número:\n");
		printf("\t\t\t>>");
		scanf("%i", &num);
		
		if(num == numeroSecreto){
			++vezes;
			printf("\n\t\t\tAcertou - %i tentativas \n\n\n", vezes);
			acertou();
			system("pause");
			break;
		}else if(num < 0){
			printf("\n\t\t\tNão digite numeros negativos\n\n");
			system("pause");
		}else{
			printf("\n\t\t\tContinue tentando -");
			if(num > numeroSecreto){
				printf("  O numero secreto é menor do que: %i \n\n\n",num);
			}else if(num < numeroSecreto){
				printf("  O numero secreto é maior %i \n\n\n ", num);
			}
			++vezes;
			system("pause");
		}
		
		
	}while(true);

	return 0;
}



