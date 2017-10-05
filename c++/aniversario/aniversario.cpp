#include<iostream>
#include<locale.h>
#include<string>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int D[100], M[100], Q = 0;
	
	do{
		cout<<"Entre com o dia e o mês do anversário(respectivamente): "; cin>>D>>M;
	}while(D != 0 && M != 0);
		
	return 0;
}
