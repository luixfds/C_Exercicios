//03 - Elaborar um programa que receba um n�mero positivo e maior que zero
//calcule e mostre o n�mero digitado ao quadrado; o n�mero digitado ao cubo;
// a raiz quadrada do n�mero digitado e a raiz c�bica do n�mero digitado.

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
	system("cls");
	
	float num;
	
	cout<<"digite um numero:\n "<<endl;
	cin>>num;
	
	if (num>0){
		cout<<"\nO numero ao quadrado eh "<<num*num;
		cout<<"\nO numero ao cubo eh "<<num*num*num;
		cout<<" \nA raiz quadrada do numero eh "<<sqrt(num);
		cout<<"\nA raiz cubica do numero eh "<<pow(num,1.0/3.0);
	}
}
