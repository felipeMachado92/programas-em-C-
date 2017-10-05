#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main(){
	string pai;
	char comparar[4], filho[20];
	int quantidade;
	
	cin>>pai;
	cin>>quantidade;
	for(int i =0; i < quantidade; i++){
		cin>> filho;
		for(int j = 0; j < 4; j++){
			comparar[j] = pai[j];
		}
		if(strstr(filho,comparar)){
			cout<<"VERIFICAR\n";
		} else{
			cout<<"NORMAL\n";
		}
	}
	
	return 0;
}
