#include<iostream>

using namespace std;

int main(){
	int numLinha; 
	int numColuna;
	int qtdJogadores;
	int numeroSorteado;
	int qtdNumSorteados;
	
	cin>>numLinha;
	cin>>numColuna;
	cin>>qtdJogadores;
	int caterla[numLinha*qtdJogadores][numColuna];
	for(int i = 0; i < numLinha*qtdJogadores; i++){
		for(int j = 0 ; j < numColuna; j++){
			cin>>cartela[i][j];
		}
	}
	
	return 0;
}
