/* 09 - A nota final de um estudante � calculada a partir de tr�s 
notas atribu�das respectivamente a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. 
A m�dia das tr�s notas mencionadas obedece aos pesos 2, 3 e 5, respectivamente. 
Elaborar um programa em C que receba as tr�s notas, calcule e mostre a m�dia ponderada e o 
conceito (A � 10 a 8; B � 8 a 7; C � 7 a 6; D � 6 a 5; E � 5 a 0). */

#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3;
	
	cout << "Digite a nota do trabalho de laborat�rio" << endl;
	cin >> n1;
	cout << "Digite a nota da avalia��o semestral" << endl;
	cin >> n2;
	cout << "Digite a nota do exame final" << endl;
	cin >> n3;
	
	float media = (n1*2 + n2*3 + n3 * 5)/10;
	
	if(media >= 8){
		cout << "Nota A" << endl;
	}else if(media >= 7 && media < 8){
		cout << "Nota B" <<endl<<"M�dia: "<< media <<endl;
	}else if(media >= 6 && media  < 7){
		cout << "Nota C" <<endl<< "M�dia: "<< media <<endl;
	}else if(media >= 5 && media < 6){
		cout << "Nota D" <<endl<< "M�dia: "<< media << endl;
	}else{
		cout << "Nota E" <<endl<< "M�dia: "<< media << endl;
	}
}
