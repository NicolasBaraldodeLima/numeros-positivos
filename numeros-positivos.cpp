


#include <iostream>

using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite n�meros inteiros positivos para somar. Insira um n�mero negativo para encerrar o programa.\n";

    do {
        cout << "Digite um n�mero: ";
        cin >> numero;

        if (numero >= 0) {
            soma += numero;
        }

    } while (numero >= 0);

    cout << "A soma dos n�meros inseridos �: " << soma << endl;

    return 0;
}
