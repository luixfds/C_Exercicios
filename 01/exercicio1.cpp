//01 - Elaborar um programa que leia dois números reais e apresente como resultado a soma e o produto entre eles.

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int main(){
	float num1, num2;
	cout<<"digite o primeiro valor: "<<endl;
	cin>>num1;
	
	cout<<"digite o segundo valor: "<<endl;
	cin>>num2;
	
	cout<<"a soma eh: "<<num1+num2<<" o produto eh: "<<num1*num2<<endl;
	
	return 0;
}

