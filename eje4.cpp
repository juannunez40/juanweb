#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla aleatoria
    int numeroSecreto = rand() % 100 + 1; // Número secreto entre 1 y 100
    int intento;

    cout << "Adivina el número entre 1 y 100: " << endl;

    do {
        cin >> intento;
        if (intento < numeroSecreto) {
            cout << "El número es mayor." << endl;
        } else if (intento > numeroSecreto) {
            cout << "El número es menor." << endl;
        }
    } while (intento != numeroSecreto);

    cout << "¡Felicidades! Has adivinado el número." << endl;
    system("pause");
    return 0;
}

