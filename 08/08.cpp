// 08  -Elaborar um programa em C que resolva uma equação do 2o grau (ax2 + bx + c = 0).
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	int a, b, c;
	cout << "Digite o valor de A: " << endl;
	cin >> a;
	cout << "Digite o valor de B: " << endl;
	cin >> b;
	cout << "Digite o valor de C: " << endl; 
	cin >> c;
	
	int delta = (b*b) - 4*a*c;
	
	if(delta < 0){
		cout << "Delta negativo" << endl;
	}else if(delta == 0){
		int x = -b / (2*a);
		cout << "X único com valor: " << x << endl;
	}else{
		int x1 = (-b + pow(delta, 1.0/2.0))/2*a;
		int x2 = (-b - pow(delta, 1.0/2.0))/2*a;
		cout << "Valor de x1: " << x1 << ", Valor de x2 :" << x2 << endl;
	}
}

