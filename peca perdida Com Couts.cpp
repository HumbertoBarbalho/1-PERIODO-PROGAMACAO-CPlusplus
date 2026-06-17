#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N,i,K;
    cin >> N;

    if (N <2 || N>1000) cout << "O Numero de pecas deve ser maior que 1 e no maximo 1000" << endl;
    else
    {
        int VetorCompleto [N];
        int VetorN [N];
        for (i=1 ; i <= N ; i++) VetorCompleto[i] = i;
        for (i=1 ; i <= N ; i++) VetorN[i] = 0;
        for (i=1 ; i < N ; i++)
        {
            cin >> K;
            VetorN[K] = K;
        }
        cout << "\n-------------------------Vetor N-------------------------\n"; 
        for (i=1 ; i <= N ; i++) cout << VetorN[i];
        cout << "\n-------------------------Vetor N-------------------------\n"; 
        cout << "\n-------------------------Vetor Completo-------------------------\n";       
        for (i=1 ; i <= N ; i++) cout << VetorCompleto[i];
        cout << "\n-------------------------Vetor Completo-------------------------\n";   

        cout << "\n-------------------------Pecas Faltando-------------------------\n"; 
        for (i=1 ; i <= N ; i++)
        {
            if (VetorN[i] != VetorCompleto[i])
            cout << VetorCompleto[i] << " ";
        }
        cout << "\n-------------------------Pecas Faltando-------------------------\n"; 
    }
    system("pause");
}