#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main ( ){
	
	int x, z, lin, col, cont;
	char jogo[3][3];
	
	setlocale(LC_ALL,"");
	
	for(x = 0; x < 3; x++){
		putchar('\n');
		for(z = 0; z < 3; z++){
			putchar('\t');
			jogo[x][z] = '*';
			printf("%c", jogo[x][z]);
		}
		putchar('\n');
		putchar('\n');
	}
	
	for (cont = 0; cont < 9; cont++){
		
		
		printf("\nSelecione a linha:\n");
		scanf("%d", &lin);
		fflush(stdout);
		lin--;
		
		printf("Seleciona Coluna:\n");
		scanf("%d", &col);
		fflush(stdout);
		col--;
		
		putchar('\n');
		system("cls");
		if(jogo[lin][col] == '*'){
		
			if(cont%2){
				jogo[lin][col] = 'O';
			} 
			else{
				jogo[lin][col] = 'X';
			}
			for(x = 0; x < 3; x++){
				putchar('\n');
				for(z = 0; z < 3; z++){
					putchar('\t');
					printf("%c", jogo[x][z]);
				}
				
				putchar('\n');
				putchar('\n');
			}
			if((jogo[0][0] == jogo[0][1] && jogo[0][0] == jogo[0][2] && jogo[0][0] != '*')||
			   (jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2] && jogo[0][0] != '*')||
			   (jogo[0][0] == jogo[1][0] && jogo[0][0] == jogo[2][0] && jogo[0][0] != '*')||
			   (jogo[0][1] == jogo[1][1] && jogo[0][1] == jogo[2][1] && jogo[0][1] != '*')||
			   (jogo[0][2] == jogo[1][2] && jogo[0][2] == jogo[2][2] && jogo[0][2] != '*')||
			   (jogo[1][0] == jogo[1][1] && jogo[1][0] == jogo[1][2] && jogo[1][0] != '*')||
			   (jogo[2][0] == jogo[2][1] && jogo[2][0] == jogo[2][2] && jogo[2][0] != '*')||
			   (jogo[2][0] == jogo[1][1] && jogo[2][0] == jogo[0][2] && jogo[2][0] != '*')){
					
				printf("\n\n\t\tPLAYER %d WIN!!!", (cont%2) + 1);	
				exit(0);
			}
		}
		
		else{
			printf("\nEsta casa ja esta ocupada\n");
			cont--;
			
		}
	}
	
	printf("\nA Velha ganhou! ;-;");

}
