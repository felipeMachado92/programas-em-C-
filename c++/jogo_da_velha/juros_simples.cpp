#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double m, j, c, i, t;
	int op1;
	string op2;
	
	system("cls");
	cout<<"Informe o período das taxas:\n[1] ao mês \n[2] ao bimestre \n[3]ao trimestre \n[4]ao semestre \n[5]ao ano\n"; cin>>op1;
	system("cls");	
	cout<<"Informe a taxa de juros (somente o únimero sem o sinal de portcentagem): "; cin>>i;
	system("cls");
	cout<<"Informe o capital investido : R$"; cin>>c;
	system("cls");
	cout<<"Informe o tempo do investimento\n(digite primeiro o número aperte 'Enter' e depois indique o modo do tempo)\n[m]mes(es) \n[a]ano(s): "; cin>>t;
	system("cls");
	cout<<"Informe o tempo do investimento (digite primeiro o número aperte 'Enter' e depois indique o modo do tempo)\n[m]mes(es) \n[a]ano(s): "<<t; cin>>op2;
	system("cls");
	
	switch (op1)
	{
		case 1:
			if(op2 == "a")
			{
				t = t * 12;	
			}
		break;
		
		case 2:
			if(op2 == "m")
			{
				t = t / 2;
			} 
			else
			{
				t = (t * 12) / 2;
			}
		break;
		
		case 3:
			if(op2 == "m")
			{
				t = t / 3;
			}
			else
			{
				t = (t * 12) / 3;
			}
		break;
		
		case 4:
			if(op2 == "m")
			{
				t = t / 6;
			}
			else
			{
				t = t / 2; 
			}
		break;
		
		case 5:
			if(op2 == "m")
			{
				t = t / 12;
			}
		break;
	}
		
	j = (c*i*t)/100;
	m = j + c;	
	
	cout<<"Capital: "<<c<<"\nJuros: "<<j<<"\nMontante: "<<m;
	
	return 0;
}
