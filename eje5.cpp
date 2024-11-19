#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int numero;
    cout << "Introduce un número para ver su tabla de multiplicar: ";
    cin >> numero;
    int i = 1;

    while (i <= 10) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
        i++;
    }
  system("pause");
    return 0;
}

