//15 - Elaborar um programa que passa dois argumentos (base e altura) para a função retang( ), 
// cujo propósito é desenhar retângulos de vários tamanhos na tela, correspondentes a cômodos de uma casa.

#include <stdio.h>
#include <stdlib.h>
 
void retang(float, float);
 
int main(){
	float base, altura;
	
	printf("Entre com a base : ");
	scanf("%f",&base); fflush(stdin);
	
	printf("Entre com a altura : ");
	scanf("%f",&altura); fflush(stdin);
	
	retang(base, altura);
	
	return 0;
}
 
void retang(float base, float altura){

 
	printf("\nDentro da funcao retang !\n\n");
	printf("Variavel base : %.2f\nVariavel altura : %.2f \n\n",base, altura);
	
	for( int i = 0; i < altura; ++i){
		for(int j = 0; j < base;++j){
			printf("[]");
		}
		printf("\n");
	}
	

}
