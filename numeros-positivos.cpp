


#include <iostream>

using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite números inteiros positivos para somar. Insira um número negativo para encerrar o programa.\n";

    do {
        cout << "Digite um número: ";
        cin >> numero;

        if (numero >= 0) {
            soma += numero;
        }

    } while (numero >= 0);

    cout << "A soma dos números inseridos é: " << soma << endl;

    return 0;
}
