/* 21 - Fa�a um programa C que leia dez n�meros que representem as notas de dez alunos, 
e que apresente: 
a) a soma dos n�meros; 
b) a m�dia dos n�meros; 
c) o maior n�mero; 
d) o menor n�mero. 
Assuma que as notas s�o informadas corretamente no intervalo de 1 a 10.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float notas[10], soma, maior, menor;
	
	
	for(int i =0; i<10; i++){
		printf("\ndigite a nota %i: ",i+1);
		scanf("%f",&notas[i]);
		
		soma += notas[i];
			if(notas[i]>notas[i-1] && notas[i] > 0){
				maior = notas[i];
			}else if (notas[i]<notas[i-1] && notas[i] > 0){
				menor = notas[i];
			}
	}
	printf("\nsoma das notas eh: %.2f ",soma);
	printf("\nmedia das notas eh: %.2f ",soma/10);
	printf("\nmaior nota eh: %.2f menor nota eh: %.2f",maior, menor);
	
}
