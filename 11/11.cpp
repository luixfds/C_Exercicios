//11 - Elaborar um programa que imprima a tabuada multiplicativa de 1 a 10 de um n�mero N fornecido pelo usu�rio.
#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Digite um numero" << endl;
	cin >> n;
	
	for(int i = 1; i <= 10; ++i)
		cout << n << " x " << i  << " = " <<n*i << endl;
}
