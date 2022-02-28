//04 - Elaborar um programa em C que a partir da idade do usuário 
//decida se o mesmo é jovem (idade < 21), adulto (21 < idade < 70) ou idoso (idade > 70).

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <math.h>

int main(){
	int idade;
	
	printf("entre com a sua idade: ");
	scanf("%i",&idade);
	
	if(idade<=21){
		printf("jovem");
	}else if(21<idade<70){
		printf("Adulto");
	}else{
		printf("Idoso");
	}
}
