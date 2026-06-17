#include <iostream>

using namespace std;

int main ()
{
	int N=0,a=0,b=1,c=0;
	int i;
	
	cout << "Digite o Numero de Termos: ";
	cin >> N;
	
	if (N>0) cout << a <<endl;
	if (N>1) cout << b <<endl;
	
	for (i=3 ; i <= N; i++)
	{
		c= a+b;
		a=b;
		b = c;
		cout << c <<endl;
	}
}
