#include <iostream>

// Funci�n que verifica si un n�mero es m�ltiplo de 3
bool esMultiploDe3(int numero) {
    // La suma de los d�gitos de un n�mero es m�ltiplo de 3
    // si y solo si el n�mero en s� mismo es m�ltiplo de 3
    int sumaDigitos = 0;
    while (numero > 0) {
        sumaDigitos += numero % 10; // Obtener el �ltimo d�gito del n�mero y sumarlo
        numero /= 10; // Eliminar el �ltimo d�gito del n�mero
    }

    // Verificar si la suma de los d�gitos es m�ltiplo de 3
    if (sumaDigitos % 3 == 0) {
        return true; // Es m�ltiplo de 3
    } else {
        return false; // No es m�ltiplo de 3
    }
}

int main() {
    int numero;
    std::cout << "Ingrese un n�mero: ";
    std::cin >> numero;

    // Llamada a la funci�n esMultiploDe3 y mostrar el resultado
    if (esMultiploDe3(numero)) {
        std::cout << "El n�mero ingresado es m�ltiplo de 3." << std::endl;
    } else {
        std::cout << "El n�mero ingresado no es m�ltiplo de 3." << std::endl;
    }

    return 0;
}

