#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    // Mostrar opciones de la calculadora
    cout << "Calculadora simple" << endl;
    cout << "Selecciona la operacion:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;

    // Leer la operación
    int opcion;
    cin >> opcion;

    // Leer los dos números
    double numero1, numero2;
    cout << "Ingresa el primer numero: ";
    cin >> numero1;
    cout << "Ingresa el segundo numero: ";
    cin >> numero2;

    // Calcular resultado según la opción
    double resultado = 0;
    bool operacionValida = true;

    if (opcion == 1) {
        resultado = numero1 + numero2;
    } else if (opcion == 2) {
        resultado = numero1 - numero2;
    } else if (opcion == 3) {
        resultado = numero1 * numero2;
    } else if (opcion == 4) {
        if (numero2 != 0) {
            resultado = numero1 / numero2;
        } else {
            cout << "Error: No se puede dividir por cero." << endl;
            operacionValida = false;
        }
    } else {
        cout << "Opcion invalida." << endl;
        operacionValida = false;
    }

    // Mostrar el resultado si la operación es válida
    if (operacionValida) {
        cout << "El resultado es: " << resultado << endl;
    }
   system("pause");
    return 0;
}

