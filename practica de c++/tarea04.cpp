#include <iostream>
using namespace std;

int main() {
    int n;

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingresa un número entero positivo: ";
    cin >> n;

    // Verificar que n sea positivo
    if (n <= 0) {
        cout << "Por favor, ingresa un número entero positivo." << endl;
        return 1; // Salir del programa si n no es positivo
    }

    // Generar la secuencia de Collatz
    cout << "Secuencia de Collatz para " << n << ":" << endl;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n = n / 2; // Si n es par
        } else {
            n = 3 * n + 1; // Si n es impar
        }
    }
    cout << n << endl; // Imprimir el último número (1)

    return 0;
}