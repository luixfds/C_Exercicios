//02 - Elaborar um programa que leia o nome e as 4 notas de um aluno e apresente como resultado o nome e a média aritmética das notas

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;
int main(){
	float nota1, nota2, nota3, nota4;
	string nome;
	
	cout<<"digite o nome:\n "<<endl;
	cin>>nome;
	cout<<"digite a primeira nota:\n "<<endl;
	cin>>nota1;
	cout<<"digite a segunda nota:\n "<<endl;
	cin>>nota2;
	cout<<"digite a terceira nota:\n "<<endl;
	cin>>nota3;
	cout<<"digite a quarta nota:\n "<<endl;
	cin>>nota4;
	
	cout<<"O aluno "<<nome<<" teve a media: "<<(nota1+nota2+nota3+nota4)/4<<endl;
	
	

}
