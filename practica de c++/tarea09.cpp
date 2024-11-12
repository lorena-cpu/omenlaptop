#include <iostream>
#include <vector>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) return false; // 0 y 1 no son primos
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false; // No es primo si es divisible por algún número
        }
    }
    return true; // Es primo
}

int main() {
    int inicio, fin;

    // Solicitar al usuario que ingrese el rango
    cout << "Ingresa el inicio del rango: ";
    cin >> inicio;
    cout << "Ingresa el fin del rango: ";
    cin >> fin;

    // Vector para almacenar los números primos
    vector<int> primos;

    // Generar números primos en el rango
    for (int i = inicio; i <= fin; i++) {
        // Si el número no es primo, omitirlo
        if (!esPrimo(i)) {
            continue; // Saltar a la siguiente iteración
        }

        // Si es primo, agregarlo al vector
        primos.push_back(i);
    }

    // Mostrar los números primos encontrados
    cout << "Numeros primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}