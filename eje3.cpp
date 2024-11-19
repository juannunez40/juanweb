#include <iostream>
#include <locale.h>

int main() {
    int numero;
    std::cout << "Introduce un número para la cuenta regresiva: ";
    std::cin >> numero;

    while (numero > 0) {
        std::cout << numero << std::endl;
        numero--; 
    }

    std::cout << "¡Despegue!" << std::endl;
    system("pause");
    return 0;
}
