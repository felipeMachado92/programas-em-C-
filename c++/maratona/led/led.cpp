#include<iostream>

using namespace std;

int contaLeds(string painel){
	int totalLeds=0;
	for(int i = 0; i < painel.length(); i++){
			if(painel[i] == '1')
				totalLeds = totalLeds + 2;
			else if(painel[i] == '2')
				totalLeds = totalLeds + 5;
			else if(painel[i] == '3')
				totalLeds = totalLeds + 5;
			else if(painel[i] == '4')
				totalLeds = totalLeds + 4;
			else if(painel[i] == '5')
				totalLeds = totalLeds + 5;
			else if(painel[i] == '6')
				totalLeds = totalLeds + 6;
			else if(painel[i] == '7')
				totalLeds = totalLeds + 3;
			else if(painel[i] == '8')
				totalLeds = totalLeds + 7;
			else if(painel[i] == '9')
				totalLeds = totalLeds + 6;
			else if(painel[i] == '0')
				totalLeds = totalLeds + 6;
	}
	return totalLeds;
}

int main(){
	int numeroCasos;
	string painel;
	
	cin>>numeroCasos;
	for(int i = 0; i < numeroCasos; i++){
		cin>>painel;
		cout<<contaLeds(painel)<<" leds"<<endl;
	}
	return 0;
}
