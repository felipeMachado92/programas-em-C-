#include<iostream>

using namespace std;

bool ehPrimo(int n){
	int acumulador=0;
	for(int i = 1; i <= n; i++){
		if(n % i ==0){
			acumulador++;
		}
	}
	if(acumulador > 2){
		return false;
	}
	return true;
}

int main(){
	int numeroInserido = 0;
	while(numeroInserido <= 2 || numeroInserido % 2 !=0){
		cout<<"Insira um numero par maior que 2: "; cin>>numeroInserido;
	}
	for(int i = 2; i < numeroInserido; i++){
		if(ehPrimo(i)){
			for(int j = 2; j < numeroInserido; j++){
				if((ehPrimo(j)==true) && (j + i == numeroInserido)){
					cout<<i<<" + "<<j<<"\n";
				}
			}
		}
	}
	return 0;
}
