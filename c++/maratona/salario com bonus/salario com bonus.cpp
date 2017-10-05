#include<iostream>

using namespace std;

int main(){
	string nomeFuncionario;
	float salario;
	float totalVendas;
	
	cin>>nomeFuncionario;
	cin>>salario;
	cin>>totalVendas;
	cout.precision(2);
	cout<<"TOTAL = R$ "<<fixed<<salario+(totalVendas * 0.15)<<endl;
	return 0;
}
