#include <iostream>

using namespace std;

int main ()
{
	int N=0,a=0,b=1,c=0;
	int i,j, numero = 1;
	
	cout << "Digite o numero de linhas: "<< endl;
	cin >> N;
	
	for (i=0; i<=N ; i++)
	{
		for (j=1; j <= i; j++)
		{
			cout << numero << "    ";
			numero++;
		}
		
		cout << endl;
	}
	
}
