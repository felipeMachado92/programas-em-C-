#include<iostream>
#include<string>
#include<sstream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string numero;
	int num,mtNum[8] = {128,64,32,16,8,4,2,1},contador, acumulador=0;
	
	cout<<"Entre com um número decimal entre 0 e 255: "; cin>>numero;
	stringstream s(numero);
	s>>num;
	for(contador = 0; contador<8; contador++){
		if(contador == 0){
			if(mtNum[contador] > num){
				mtNum[contador] = 0;
			} else{
				acumulador = mtNum[contador];
				mtNum[contador] = 1;
			}
		} else{
			if(acumulador + mtNum[contador] > num){
				mtNum[contador] = 0;
			} else{
				acumulador = acumulador + mtNum[contador];
				mtNum[contador] = 1;
			}
		}
		cout<<mtNum[contador];
	}
	cout<<endl;
	system("PAUSE");
	return 0;
}
