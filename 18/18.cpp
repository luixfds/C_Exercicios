/*
18 - Faça um programa que calcule o imposto de renda de 10 contribuintes considerando que o 
número de dependentes e renda mensal de cada contribuinte são valores
fornecidos pelo usuário. Para cada contribuinte será feito um desconto de 5% de salário 
mínimo por dependente. Os valores da alíquota para cálculo do imposto são:
Até 2 salários mínimos   Isento

2..3 (inclusive)   5%

3..5 (inclusive)   10%

5..7 (inclusive)   15%

Acima de 7   20%
*/

#include <iostream>
using namespace std;

int main(){
	typedef struct cadastro{
		double salario;
		int dependentes;
	}c;
	
		double sminimo;
		
	c cad[10];
		cout << "digite o salario minimo: "<<endl;
		cin>>sminimo;
	
	for(int i=0;i<10;i++){
		cout << "digite o salario: "<<i+1<<endl;
		cin>>cad[i].salario;
		cout << "digite o numero de dependentes: "<<i+1<<endl;
		cin>>cad[i].dependentes;	
	}
	for(int i=0;i<10;i++){
		if(cad[i].salario<=(2*sminimo)){
			cout<<"Contribuinte "<<i+1<<" isento"<<endl;
		}else if(cad[i].salario>(2*sminimo) && cad[i].salario<=(3*sminimo)){
			cout<<"Contribuinte "<<i+1<<" com reajuste de 5%:  imposto: "<<(cad[i].salario*0.05)+cad[i].salario*0.05*cad[i].dependentes<<endl;
		}else if(cad[i].salario>(3*sminimo) && cad[i].salario<=(5*sminimo)){
			cout<<"Contribuinte "<<i+1<<" com reajuste de 10%:  imposto: "<<(cad[i].salario*0.05)+cad[i].salario*0.05*cad[i].dependentes<<endl;
		}else if(cad[i].salario>(5*sminimo) && cad[i].salario<=(7*sminimo)){
			cout<<"Contribuinte "<<i+1<<"com reajuste de 15%: imposto: "<<(cad[i].salario*0.05)+cad[i].salario*0.05*cad[i].dependentes<<endl;
		}else if(cad[i].salario>=(5*sminimo)){
			cout<<"Contribuinte"<<i+1<<" com reajuste de 15%: imposto: "<<(cad[i].salario*0.05)+cad[i].salario*0.05*cad[i].dependentes<<endl;
		}
	}
}
