#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include <locale.h>

using namespace std;
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int dtAt[3], dtNs[3], tpVd[3];
	
	dtAt[0] = 0;
	dtAt[1] = 0;
	dtNs[0] = 0;
	dtNs[1] = 0;	
	
	cout<<"Entre com o dia do seu nascimento: "; cin>>dtNs[0];
	system("cls");
	cout<<"Entre com o mês do seu nascimento: "<<dtNs[0]<<"/"; cin>>dtNs[1];
	system("cls");
	cout<<"Entre com o ano do seu nascimento: "<<dtNs[0]<<"/"<<dtNs[1]<<"/"; cin>>dtNs[2];
	system("cls");
	cout<<"Entre com o dia atual: "; cin>>dtAt[0];
	system("cls");
	cout<<"Entre com o mês atual: "<<dtAt[0]<<"/"; cin>>dtAt[1];
	system("cls");
	cout<<"Entre com o ano atual: "<<dtAt[0]<<"/"<<dtAt[1]<<"/"; cin>>dtAt[2];
	system("cls");
	
	if((dtAt[1] < dtNs[1]) || ((dtAt[1] == dtNs[1]) && (dtAt[0] < dtNs[0])))
	{
		tpVd[2] = (dtAt[2] - dtNs[2]) - 1;
		tpVd[1] = 12 - dtNs[1] + dtAt[1];
	}
	else
	{
		tpVd[2] = dtAt[2] - dtNs[2];
		tpVd[1] = dtAt[1] - dtNs[1];
	}
	
	
	if(dtAt[0] < dtNs[0])
	{
		
		if(dtAt[0] < dtNs[0])
		{
			tpVd[1] = tpVd[1] - 1; 	
		}
		
		if((dtAt[1] == 1) || (dtAt[1] == 2) || (dtAt[1] == 4) || (dtAt[1] == 6) || (dtAt[1] == 8) || (dtAt[1] == 9) || (dtAt[1] == 11))
		{
			tpVd[0] = 31 - dtNs[0] + dtAt[0]; 
		}
		else if((dtAt[1] == 5) || (dtAt[1] == 7) || (dtAt[1] == 10) || (dtAt[1] == 12))
		{
			tpVd[0] = 30 - dtNs[0] + dtAt[0];
		}
		else if(dtAt[1] == 3)
		{
			if((dtAt[2] % 400 == 0) || ((dtAt[2] % 4 == 0) && (dtAt[2] % 100 != 0 )))
			{
				tpVd[0] = 29 - dtNs[0] + dtAt[0];
			}
			else
			{
				tpVd[0] = 28 - dtNs[0] + dtAt[0];
			}
		}
	}
	else
	{
		tpVd[0] = dtAt[0] - dtNs[0];
	}
	
	cout<<"Você já viveu "<<tpVd[2]<<" ano(s), "<<tpVd[1]<<" mes(es), e "<<tpVd[0]<<" dia(s)\n";
	
	system("PAUSE");
}
