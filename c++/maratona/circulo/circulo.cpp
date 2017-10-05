#include<iostream>

using namespace std;

int main(){
	double raio;
	double area;
		
		
		cin>>raio;
		area = 3.14159 * (raio*raio);
		cout << fixed;
    	cout.precision(4);
    	cout<<"A="<<area<<endl;
	system("PAUSE");
	return 0;
}
