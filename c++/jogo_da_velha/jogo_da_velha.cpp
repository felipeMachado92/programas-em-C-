#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<locale.h>

using namespace std;
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int pont1, pont2, pont3,contjogada, jogada, aux1; 
	string tb[3][3], jogador1, jogador2, opcao="N", aux2;
	bool ganhou= false;
	
	while(opcao != "S")
	{
		cout<<"Entre com o nome do primeiro jogador: ";cin>>jogador1;
		cout<<"Entre com o nome do segundo jogador: "; cin>>jogador2;
		
		pont1 = 0;
		pont2 = 0;
		pont3 = 0;
		
		opcao = "N";

		while((opcao == "N") || (opcao == "n"))
		{
		
			ganhou = false;
			contjogada = 1;
			tb[0][0]="1";
			tb[0][1]="2";
			tb[0][2]="3";
			tb[1][0]="4";
			tb[1][1]="5";
			tb[1][2]="6";
			tb[2][0]="7";
			tb[2][1]="8";
			tb[2][2]="9";
			
			while((contjogada < 10) && (ganhou == false))
			{
				while(((jogada <= 0) || (jogada > 9)) && (ganhou == false))
				{
					system("cls");
					cout<<"\n "<<tb[0][0]<<" | "<<tb[0][1]<<" | "<<tb[0][2]<<" ";
					cout<<"\n---+---+---";
					cout<<"\n "<<tb[1][0]<<" | "<<tb[1][1]<<" | "<<tb[1][2]<<" ";
					cout<<"\n---+---+---";
					cout<<"\n "<<tb[2][0]<<" | "<<tb[2][1]<<" | "<<tb[2][2]<<" ";
					cout<<"\nVez do(a) "<<jogador1<<": ";cin>>jogada;
					
					switch(jogada)
					{
						case 1:
							if(tb[0][0] != "1")
							{
								jogada = 0;
								cout<<"\nJogada inválida";
							} 
							else
							{
								if(contjogada % 2 != 0 )
								{
									tb[0][0] ="X";
								}
								else
								{
									tb[0][0] ="O";
								}
							}
						break;
						case 2:
							if(tb[0][1] != "2")
							{
								jogada = 0;
								cout<<"\nJogada inválida";
							}
							else
							{
								if(contjogada % 2 != 0 )
								{
									tb[0][1] ="X";
								}
								else
								{
									tb[0][1] ="O";
								}
							}
						break;
						case 3:
							if(tb[0][2] != "3")
							{
								jogada = 0;
								cout<<"\nJogada inválida";
							}
							else
							{
								if(contjogada % 2 != 0 )
								{
									tb[0][2] ="X";
								}
								else
								{
									tb[0][2] ="O";
								}
							}
						break;
						case 4:
							if(tb[1][0] != "4")
							{
								jogada = 0;
								cout<<"\nJogada inválida";
							}
							else
							{
								if(contjogada % 2 != 0 )
								{
									tb[1][0] ="X";
								}
								else
								{
									tb[1][0] ="O";
								}
							}
						break;
						case 5:
							if(tb[1][1] != "5")
							{
								jogada = 0;
								cout<<"\nJogada inválida";
							}
							else
							{
								if(contjogada % 2 != 0 )
								{
									tb[1][1] ="X";
								}
								else
								{
									tb[1][1] ="O";
								}
							}
						break;
						case 6:
							if(tb[1][2] != "6")
							{
								jogada = 0;
								cout<<"\nJogada inválida";
							} 
							else
							{
								if(contjogada % 2 != 0 )
								{
									tb[1][2] ="X";
								}
								else
								{
									tb[1][2] ="O";
								}
							}
						break;
						case 7:
							if(tb[2][0] != "7")
							{
								jogada = 0;
								cout<<"\nJogada inválida";
							} 
							else
							{
								if(contjogada % 2 != 0 )
								{
									tb[2][0] ="X";
								}
								else
								{
									tb[2][0] ="O";
								}
							}
						break;
						case 8:
							if(tb[2][1] != "8")
							{
								jogada = 0;
								cout<<"\nJogada inválida";
							} 
							else
							{
								if(contjogada % 2 != 0 )
								{
									tb[2][1] ="X";
								}
								else
								{
									tb[2][1] ="O";
								}
							}
						break;
						case 9:
							if(tb[2][2] != "9")
							{
								jogada = 0;
								cout<<"\nJogada inválida";
							} 
							else
							{
								if(contjogada % 2 != 0 )
								{
									tb[2][2] ="X";
								}
								else
								{
									tb[2][2] ="O";
								}
							}
						break;
						default:
							cout<<"\nJogada inválida";
							jogada = 0;
						break;
					}
					if(((tb[0][0]==tb[0][1])&&(tb[0][1]==tb[0][2])) || ((tb[1][0]==tb[1][1])&&(tb[1][1]==tb[1][2])) || ((tb[2][0]==tb[2][1])&&(tb[2][1]==tb[2][2])))
					{
						cout<<"\n"<<jogador1<<" venceu!!!\n";
						ganhou = true;
						pont1 = pont1 + 1;
						system("PAUSE");
					}
					else
					if(((tb[0][0]==tb[1][0])&&(tb[1][0]==tb[2][0])) || ((tb[0][1]==tb[1][1])&&(tb[1][1]==tb[2][1])) || ((tb[0][2]==tb[1][2])&&(tb[1][2]==tb[2][2])))
						{
							cout<<"\n"<<jogador1<<" venceu!!!\n";
							ganhou = true;
							pont1 = pont1 + 1;
							system("PAUSE");
						}
						else
						if(((tb[0][0]==tb[1][1])&&(tb[1][1]==tb[2][2])) || ((tb[0][2]==tb[1][1])&&(tb[1][1]==tb[2][0])))
						{
							cout<<"\n"<<jogador1<<" venceu!!!\n";
							ganhou = true;
							pont1 = pont1 + 1;
							system("PAUSE");
						}
					if((ganhou == false) && (contjogada == 9))
					{
						cout<<"\nDeu velha!!!\n";
						pont3 = pont3 + 1;
						system("PAUSE");
					}
				}
				contjogada = contjogada + 1;
				jogada = 0;
				aux1 = pont1;
				pont1 = pont2;
				pont2 = aux1;
				aux2 = jogador1;
				jogador1 = jogador2;
				jogador2 = aux2;
				
			}
			if(contjogada % 2 == 0)
			{
				aux1 = pont1;
				pont1 = pont2;
				pont2 = aux1;
				aux2 = jogador1;
				jogador1 = jogador2;
				jogador2 = aux2;				
			}
		
			system("cls");
			cout<<jogador1<<" venceu "<<pont1<<" vezes!\n";
			cout<<jogador2<<" venceu "<<pont2<<" vezes!\n";
			cout<<"Em "<<pont3<<" deu velha!\n";
			cout<<"\n OPÇÕES\n [T] trocar jogadores [N] nova partida\n Pressione qualquer outra letra para sair: ";cin>>opcao;
			system("cls");
			
			if((opcao != "N") && (opcao != "n") &&  (opcao != "T") && (opcao != "t"))
			{
				opcao = "S";
			}
			if(contjogada % 2 == 0)
			{
				aux1 = pont1;
				pont1 = pont2;
				pont2 = aux1;
				aux2 = jogador1;
				jogador1 = jogador2;
				jogador2 = aux2;				
			}
		
		}
	}
	return 0;
}
