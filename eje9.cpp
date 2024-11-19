#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    // Solicitar al usuario un número
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    // Verificar si el número es positivo, negativo o cero
    if (numero > 0) {
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }
system("pause");
    return 0;
}

