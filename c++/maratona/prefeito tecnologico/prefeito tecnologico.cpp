#include<iostream>

using namespace std;

int main(){
	int qtCasos, totalFundo, qtMelhorias;
		
	cin>>qtCasos;
	for(int i = 0; i < qtCasos; i++){
		cin>>totalFundo;
		cin>>qtMelhorias;
		
		int vtMelhorias[qtMelhorias][2];
		
		//PEGANDO OS VALORES E VOTOS DE CADA MELHORIA E COLOCANDO EM UM VETOR
		for(int j = 0; j < qtMelhorias; j++){
			cin>>vtMelhorias[j][0];
			cin>>vtMelhorias[j][1];
		}
		// INICIO CALCULAR MAIOR VALOR POSSÍVEL DE VOTOS
		int tbPrincipal[qtMelhorias + 1][totalFundo + 1];
	
		for(int i = 0; i <=qtMelhorias; i++){
			tbPrincipal[i][0] = 0;
		}
	
		for(int i = 0; i <=totalFundo; i++){
			tbPrincipal[0][i] = 0;
		}
	
		for(int nm = 1; nm <= qtMelhorias; nm++){
			for(int vm = 1; vm <= totalFundo; vm++){
				if((vtMelhorias[nm-1][0] <= vm) && (vtMelhorias[nm-1][1] + tbPrincipal[nm-1][vm - vtMelhorias[nm-1][0]] > tbPrincipal[nm-1][vm])){
					tbPrincipal[nm][vm] = vtMelhorias[nm-1][1] + tbPrincipal[nm-1][vm - vtMelhorias[nm-1][0]];
				} else{
					tbPrincipal[nm][vm] = tbPrincipal[nm-1][vm];
				}
			}
		}
		//FIM CALCULAR MAIOR VALOR POSSÍVEL DE VOTOS
		//INICIO CALCULAR TROCO DO FUNDO
		int coluna = totalFundo;
		int valorGasto = 0;
		int trocoFundo;
		for(int i = qtMelhorias; i > 0; i--){
			if(tbPrincipal[i][coluna] != tbPrincipal[i-1][coluna]){
				valorGasto = valorGasto + vtMelhorias[i-1][0];
				coluna = coluna - vtMelhorias[i-1][0];
			}
		}
		trocoFundo = totalFundo - valorGasto;
		//FIM CALCULAR TROCO DO FUNDO
		//EXIBIÇÃO DO RESULTADO
		if(tbPrincipal[qtMelhorias][totalFundo] == 0){
			cout<<"NO FUNDS"<<endl;
		} else{
			cout<<tbPrincipal[qtMelhorias][totalFundo]<<" "<<trocoFundo<<endl;
		}
	}
	system("PAUSE");
	return 0;
}
