#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  
    int numero;
    cout << "Ingresa un numero del 1 al 7 para determinar el dia de la semana: ";
    cin >> numero;


    string dia = "";

    if (numero == 1) {
        dia = "Lunes";
    } else if (numero == 2) {
        dia = "Martes";
    } else if (numero == 3) {
        dia = "Mi�rcoles";
    } else if (numero == 4) {
        dia = "Jueves";
    } else if (numero == 5) {
        dia = "Viernes";
    } else if (numero == 6) {
        dia = "S�bado";
    } else if (numero == 7) {
        dia = "Domingo";
    } else {
        dia = "N�mero inv�lido. Por favor ingresa un n�mero entre 1 y 7.";
    }

    cout << "El dia correspondiente es: " << dia << endl;
    system("pause");
    return 0;
}

