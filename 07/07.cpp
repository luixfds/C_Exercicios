// 07 - Elaborar um programa em C que receba 3 números em qualquer ordem e 
//apresente como resultado o maior e o menor entre eles.
#include <stdio.h>

int main(){
	int a, b, c;
	
	if(a >= b && a >= c)
		printf("Maior : %d \n", a);	
	if(b >= a && b >= c)
		printf("Maior : %d \n", b);	
	if(c >= b && c >= a)
		printf("Maior : %d \n", c);
	
	if(a < b && a < c) 
		printf("Menor : %d \n", a);
	if(b < a && b < c)
		printf("Menor : %d \n", b);
	if(c < b && c , a)
		printf("Menor : %d \n", c);
}
