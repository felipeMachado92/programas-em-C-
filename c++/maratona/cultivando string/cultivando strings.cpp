#include<iostream>
#include<string.h>

using namespace std;

string menorString(string vt[], int n){
	string menor;
	for(int i = 0; i < n; i++){
		if((i == 0) || (menor.length()>vt[i].length())){
			menor = vt[i];
		}
	}
	return menor;
}

int main(){
	int n=-1;
	int contadorSeq=0;
	
	while(n!=0){
		cin>>n;
		string vetorString[n];
		for(int i = 0; i < n;i++){
			cin>>vetorString[i];
		}
		
	}
	return 0;
	
}
