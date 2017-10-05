#include<iostream>

using namespace std;

string retiraNum(char D, string N){
	int j, acumulador=1;
	
	for(int i = 0; i < N.length(); i++){
		if(N[i]==D){
			for(j = (i+1); j < N.length(); j++){
				if(N[i]==N[j]){
					acumulador++;
				}else{
					break;
				}
			}
			N.erase(i,acumulador);
		}
	}
	return N;
}

bool ehZero(char D, string N){
	if(N.length()==0){
		if(D=='0'|| N=="0"){
			return false;
		}
		return true;
	}
	for(int i=0; i<N.length();i++){
		if(N[i]!='0'){
			return false;
		}
	}
	return true;
}

int main(){
	char D;
	string N;
	string NovoN;
	
	while((D!='0')||(N!="0")){
		cin>>D;
		cin>>N;
		NovoN = retiraNum(D, N);
		if(ehZero(D,NovoN)){
			NovoN ="0";
		}
		cout<<NovoN<<endl;
	}
	return 0;
}
