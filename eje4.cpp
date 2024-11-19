#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla aleatoria
    int numeroSecreto = rand() % 100 + 1; // N�mero secreto entre 1 y 100
    int intento;

    cout << "Adivina el n�mero entre 1 y 100: " << endl;

    do {
        cin >> intento;
        if (intento < numeroSecreto) {
            cout << "El n�mero es mayor." << endl;
        } else if (intento > numeroSecreto) {
            cout << "El n�mero es menor." << endl;
        }
    } while (intento != numeroSecreto);

    cout << "�Felicidades! Has adivinado el n�mero." << endl;
    system("pause");
    return 0;
}

