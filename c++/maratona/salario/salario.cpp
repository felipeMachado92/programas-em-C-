#include<iostream>

using namespace std;

int main(){
	int numeroFuncionario;
	int horasTrabalhadas;
	float valorHora;
	
	cin>>numeroFuncionario;
	cin>>horasTrabalhadas;
	cin>>valorHora;
	cout<<"NUMBER = "<<numeroFuncionario<<endl;
	cout.precision(2);
	cout<<"SALARY = U$ "<<fixed<<horasTrabalhadas * valorHora<<endl;
	return 0;
}
