//CODIGO DE SWITCH CASE LISTA 2
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{

int opcao;
float a, b, c;
float media;

cout << "digite a, b e c" << endl;
cin >> a >> b >> c;
cout << "escolha oque quer:" <<endl;
cout << "1 : maior" <<endl;
cout << "2 : menor" <<endl;
cout << "3 : media aritmtica" <<endl;
cout << "4 : media geomtrica" <<endl;
cout << "5 : media ponderada com pesos 4,5 e 6" <<endl;

cin >> opcao;

switch (opcao)
    {
        case 1:
        if (a>=b && a>=c) cout << a << endl;
        if (b>=a && b>=c) cout << b << endl;
        if (c>=b && c>=a) cout << c << endl;
        
        break;
        
        case 2:
        if (a<=b && a<=c) cout << a << endl;
        if (b<=a && b<=c) cout << b << endl;
        if (c<=b && c<=a) cout << c << endl;
        break;
        
        case 3:
        media = ((a+b+c)/3);
        cout << media <<endl;
        break;
        
        case 4: 
        media = sqrt (a*b*c);
        cout << media <<endl;
        break;
        
        case 5:
        media = (((a*4) + (b*5) + (6*c))/(a+b+c));
        cout << media << endl;
        break;
        
    }

    system("pause");
}
