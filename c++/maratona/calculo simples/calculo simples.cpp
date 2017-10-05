#include<iostream>

using namespace std;

int main(){
	int numeroPeca1, numeroPeca2;
	int qntPeca1, qntPeca2;
	float valorPeca1, valorPeca2;
	
	cin>>numeroPeca1;
	cin>>qntPeca1;
	cin>>valorPeca1;
	
	cin>>numeroPeca2;
	cin>>qntPeca2;
	cin>>valorPeca2;
	cout.precision(2);
	cout<<"VALOR A PAGAR: R$ "<<fixed<<(qntPeca1 * valorPeca1)+(qntPeca2 * valorPeca2)<<endl;
	
	return 0;
}
