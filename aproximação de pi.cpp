#include <iostream>
#include <cmath> // Para fabs()

using namespace std;

int main() {
    double pi_atual = 0.0;
    double pi_anterior = 0.0;
    double termo = 0.0;
    int n = 0; // Contador para gerar números ímpares (2n + 1)
    double diferenca;

    do {
        pi_anterior = pi_atual;
        
        // Termo da série: (-1)^n / (2n + 1)
        termo = pow(-1, n) / (2.0 * n + 1.0);
        pi_atual += 4.0 * termo;
        
        diferenca = fabs(pi_atual - pi_anterior);
        n++;

    } while (diferenca > 5e-2 || n == 1); // Garante ao menos uma iteração

    cout.precision(6);
    cout << "Valor aproximado de PI: " << pi_atual << endl;
    cout << "Diferenca final: " << diferenca << endl;
    cout << "Numero de iteracoes: " << n << endl;

    return 0;
}
