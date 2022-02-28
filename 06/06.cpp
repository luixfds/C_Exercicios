/* 06 - Elaborar um programa em C que decida qual o maior entre 
três números digitados por um usuário e o apresente na tela. */
#include <stdio.h>
int main(){
	int a, b, c;
	printf("Numero 1:");
	scanf("%d", &a);
	printf("Numero 2:");
	scanf("%d", &b);
	printf("Numero 3:");
	scanf("%d", &c);
	
	if(a > b && a > c) 
		printf("Maior : %d", a);
	if(b > a && b > c)
		printf("Maior : %d", b);
	if(c > b && c > a)
		printf("Maior : %d", c);	
}
