#include <iostream>
#include <string>

using namespace std;

int main ()
{
	char curso [5] = {'T','A','D','S', '\0'}; //TADS
	string disciplina = "algoritmos";
	cout << curso << "\n";	
	cout << disciplina << "\n";
	
	for (int i = 0; i<4; i++) cout.put(curso[i]);
	
	
}
