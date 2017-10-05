#include<iostream>
#include<stdio.h>
#include<locale.h>

using namespace std;
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	system("shutdown -s -t 10");
	cout<<"Bem vindo ao programa zueiro. Prepare-se para religar seu PC/notebook ;D";
	
	return 0;
}
