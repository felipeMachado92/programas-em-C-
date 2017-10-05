//Explorando a biblioteca string.h
//O C++ "v�" uma String como um "vetor de char"
#include <iostream>
#include <string.h>

using namespace std;

void tamanhoDaString(char nm[]){
	int tamanhoDaPalavra = strlen(nm); //strlen: fun��o que retorna a quantidade de letras de uma string
	cout<<"O tamanho da Palavra eh "<<tamanhoDaPalavra<<"\n";
}

void ehLetra(char nm){
	if (isalpha(nm)){//isalpha: fun��o que retorna true se o char for letra e retorna false se o char for n�mero
		cout<<nm<<" eh letra\n";
	} else{
		cout<<nm<<" eh numero\n";
	}
}

void ehNumero(char nm){
	if (isdigit(nm)){//isdigit: fun��o oposta da 'isalpha'
		cout<<nm<<" eh numero\n";
	} else{
		cout<<nm<<" eh letra\n";
	}
}

void ehMaiuscula(char nm){
	if (isupper(nm)){//isupper: fun��o que retorna true se o char for letra ma�uscula e retorna false se for min�scula
		cout<<nm<<" eh maiuscula";
	} else{
		cout<<nm<<" eh minuscula";
	}
}

void ehMinuscula(char nm){
	if (islower(nm)){//islower: fun��o oposta a isupper
		cout<<nm<<" eh minuscula";
	} else{
		cout<<nm<<" eh maiuscula";
	}
}

void ehEspaco(char nm){
	if (isspace(nm)){//isspace: retorna true se o char for um espa�o em branco retorna true sen�o, retorna false
		cout<<nm<<" eh espaco";
	} else{
		cout<<nm<<" nao eh espaco";
	}
}

void comparaPalavras(char nm1[], char nm2[]){
	if (strcmp(nm1,nm2)==0){//----------------------> strcmp: Compara as strings. Se ambas forem indeticas, retorna 0; Se a primeira string 
		cout<<"As palavras tem o mesmo tamanho\n"; // for maior (segundo a tabela ASCII) que a segunda string retorna 1; Caso contr�rio, retorna -1
	} else if (strcmp(nm1,nm2)==1){
		cout<<nm1<<" eh maior que "<<nm2<<"\n";
	} else 
		cout<<nm2<<" eh maior que "<<nm1<<"\n";
}

void ParaMaiuscula(char letra){
	letra = toupper(letra); //toupper: Esse � bem �bvio!!! pega o char e converte pra letra maiuscula
	cout<<letra<<"\n";
}

void ParaMinuscula(char letra){
	letra = tolower(letra); //tolower: Oposta da 'toupper'
	cout<<letra<<"\n";
}

void concatenarPalavras(char nm1[], char nm2[]){
	strcat(nm1,nm2); //strcat: concatena duas strings. O resultado da concatena��o ser� guardado na primeira string
	cout<<nm1<<"\n";
}

void verificaSubstring(char nm1[], char nm2[]){
	if(strstr(nm1,nm2)){ //strstr: verifica se a primeita string cont�m a segunda string;
		cout<<"Eh substring\n";
	} else{
		cout<<"Nao eh substring\n";
	}
}

void retornaSubstring(char nm[]){
	string nome = nm;
	string parteNome = nome.substr(2,4); // substr: Nesse caso s� funciona com string mesmo! Essa fun��o gera uma substring
	cout<<parteNome<<endl;               // a partir de uma anterior. O primeiro par�metro � em que indice come�a a substring
	                                     // e o segundo indica o tamanho. Caso n�o indique o tamanho ela vai at� o fim da string
}

void retornaComecoSubstring(char nm[]){
	string nome = nm;
	size_t comecoSubstring = nome.find("lipe");  // find: retorna o indice que come�a a palavra passado como par�metro.
	cout<< comecoSubstring<<endl;                // necessita de uma variavel tipo "size_t" (n�o sei do que se trata)
}

int main(){
	char nome1[] = "Felipe";
	char nome2[] = "Machado";
	char l = 'f';
	char L = 'F';
	
	//tamanhoDaString(nome1);
	//ehLetra(nome1[0]);
	//ehNumero(nome1[0]);
	//comparaPalavras(nome1,nome2);
	//ParaMaiuscula(l);
	//ParaMinuscula(L);
	//verificaSubstring(nome1,nome2);
	//retornaSubstring(nome1);
	//retornaComecoSubstring(nome1);
	
	return 0;
}
