#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    // Solicitar al usuario un número
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    // Verificar si el número es par o impar
    if (numero % 2 == 0) {
        cout << "El numero es par." << endl;
    } else {
        cout << "El numero es impar." << endl;
    }
    system("pause");

    return 0;
}

