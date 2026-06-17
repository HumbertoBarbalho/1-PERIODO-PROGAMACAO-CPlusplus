#include <iostream>

using namespace std;

int main()
{
	double N,E=0,i, fatorial=1;
	
	cin >> N;
	
	for (i=1; i<=N; i++)
	{
		fatorial *= i;
		E += 1/fatorial;
		
	}
	
	cout << E;
}
