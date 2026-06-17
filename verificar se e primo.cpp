#include <iostream>

using namespace std;

int main() {
    int num;
    bool ehPrimo = true; // Assumimos que é primo até provar o contrário

    cout << "Digite um numero natural: ";
    cin >> num;

    if (num <= 1) {
        ehPrimo = false;
    } else {
        // Testa divisores de 2 até a metade do número
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                ehPrimo = false; // Encontrou um divisor, não é primo
                break;           // Interrompe o laço para ganhar tempo
            }
        }
    }

    if (ehPrimo)
        cout << num << " e um numero primo." << endl;
    else
        cout << num << " nao e um numero primo." << endl;

    return 0;
}
