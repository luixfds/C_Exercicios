/*
13 - Elaborar um programa que decida se um n�mero informado pelo usu�rio � o n�mero 1, 
� primo (possui apenas 2 divisores naturais) ou composto (possui mais de 2 divisores).
*/
#include <locale.h>

#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int num, i, resultado = 0;
 
 	printf("Digite um n�mero: ");
	scanf("%d", &num);
 
 
	if(num == 1){
 		printf("O n�mero � 1");
	}else{
		for (i = 2; i <= num / 2; i++) {
	   		if (num % i == 0) {
	   	  	 resultado++;
	  	     break;
	    	}
		}
	    	if (resultado == 0){
				printf("%d � um n�mero primo\n", num);
			}else{
				printf("� um n�mero composto");
			}
    }
	
	
	 
	return 0;
}
