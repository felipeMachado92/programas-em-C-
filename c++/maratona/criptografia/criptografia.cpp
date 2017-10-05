#include<iostream>
#include<string>


using namespace std;

string parteI(string frase){
	for(int i=0; i < frase.length();i++){
		if((toascii(frase[i])>64)&&(toascii(frase[i])<91)||(toascii(frase[i])>96)&&(toascii(frase[i])<123)){
			frase[i] = char(toascii(frase[i]+3));
		}
	}
	return frase;
}

string parteII(string frase){
  char caracter;
  int a, b;
  
  for(a = 0, b = frase.length() - 1;  a < b;  ++a, b--)
  {
    caracter = frase[a];
    frase[a] = frase[b];
    frase[b] = caracter;
  }
  return frase;
}

string parteIII(string frase){
	for(int i = (frase.length()/2); i < frase.length(); i++){
		frase[i] = char(toascii(frase[i]-1));
	}
	return frase;
}


int main(){
	int contador;
	string frase;
	cin>>contador;
	cin.ignore();
	for(int i=0;i<contador;i++){
		getline (cin,frase);
		frase = parteI(frase);
		frase = parteII(frase);
		frase = parteIII(frase);
		cout<<frase<<endl;
	}
	return 0;
}
