#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string nome, Primeironome, Ultimonome;
    
    cout << "Digite seu Nome" << endl;
    
    getline(cin,nome);
    
    cout << nome << endl;
    
    Primeironome = nome;
    Ultimonome = nome;
    
    auto last_esp = Ultimonome.rfind (" ");
    auto first_esp = Primeironome.find (" ");
    
    cout << last_esp << endl;
    cout << first_esp << endl;
    
    Primeironome.erase (first_esp);    
    //Ultimonome = nome.substr (last_esp+1);
    Ultimonome.erase (0, last_esp+1);
    
    string nomefinal = Primeironome + "." + Ultimonome + "@ufrn.edu.br";
    transform(nomefinal.begin(), nomefinal.end(), nomefinal.begin(), ::tolower);
    cout << nomefinal << endl;  

    system("pause");

}
