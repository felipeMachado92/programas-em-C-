#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include <locale.h>

using namespace std;
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	
	cout<<"Entre com o ano: "; cin>>ano;
	if((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0))
	{
		cout<<ano<<" � ano bissexto!\n";
	}
	else
	{
		cout<<ano<<" n�o � ano bissexto!\n";
	}
	system("PAUSE");
}
