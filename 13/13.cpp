/*
13 - Elaborar um programa que decida se um número informado pelo usuário é o número 1, 
é primo (possui apenas 2 divisores naturais) ou composto (possui mais de 2 divisores).
*/
#include <locale.h>

#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int num, i, resultado = 0;
 
 	printf("Digite um número: ");
	scanf("%d", &num);
 
 
	if(num == 1){
 		printf("O número é 1");
	}else{
		for (i = 2; i <= num / 2; i++) {
	   		if (num % i == 0) {
	   	  	 resultado++;
	  	     break;
	    	}
		}
	    	if (resultado == 0){
				printf("%d é um número primo\n", num);
			}else{
				printf("é um número composto");
			}
    }
	
	
	 
	return 0;
}
