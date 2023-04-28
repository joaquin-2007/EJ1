#include <iostream>

// Función que verifica si un número es múltiplo de 3
bool esMultiploDe3(int numero) {
    // La suma de los dígitos de un número es múltiplo de 3
    // si y solo si el número en sí mismo es múltiplo de 3
    int sumaDigitos = 0;
    while (numero > 0) {
        sumaDigitos += numero % 10; // Obtener el último dígito del número y sumarlo
        numero /= 10; // Eliminar el último dígito del número
    }

    // Verificar si la suma de los dígitos es múltiplo de 3
    if (sumaDigitos % 3 == 0) {
        return true; // Es múltiplo de 3
    } else {
        return false; // No es múltiplo de 3
    }
}

int main() {
    int numero;
    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    // Llamada a la función esMultiploDe3 y mostrar el resultado
    if (esMultiploDe3(numero)) {
        std::cout << "El número ingresado es múltiplo de 3." << std::endl;
    } else {
        std::cout << "El número ingresado no es múltiplo de 3." << std::endl;
    }

    return 0;
}

