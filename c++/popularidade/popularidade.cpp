#include<iostream>

using namespace std;

int main(){
	
	int numAlunos, maiorNota = 0, notaTotal = 0, nota;
	
	
	do{
		cin>>numAlunos;
		for(int i = 1; i < numAlunos; i++){
			for(int j = 1; j < numAlunos; j++){
				cin>> nota;
				notaTotal = notaTotal + nota;
			}
			if(notaTotal > maiorNota){
				maiorNota = notaTotal;
			}
		}
		cout<<maiorNota;
	}while(!cin.eof());
	
	return 0;
}
