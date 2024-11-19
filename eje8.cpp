#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    // Solicitar la calificación numérica al usuario
    int calificacion;
    cout << "Ingresa la calificacion (0-10): ";
    cin >> calificacion;

    // Determinar si está aprobado o reprobado usando if
    if (calificacion >= 6 && calificacion <= 10) {
        cout << "Aprobado" << endl;
    } else if (calificacion >= 0 && calificacion < 6) {
        cout << "Reprobado" << endl;
    } else {
        cout << "Calificacion invalida. Por favor ingresa un numero entre 0 y 10." << endl;
    }
    
   system("pause");
    return 0;
}

