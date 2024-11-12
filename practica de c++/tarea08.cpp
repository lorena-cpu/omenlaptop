#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Vector inicial con algunos números enteros
    vector<int> numeros = {5, 3, 8, 1, 2, 7};

    // Variable para almacenar el mayor elemento
    int mayor = numeros[0];

    // Bucle para encontrar el mayor elemento
    for (size_t i = 1; i < numeros.size(); i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }

        // Si encontramos un número mayor que 10, salimos del bucle
        if (mayor > 10) {
            break;
        }
    }

    // Mostrar el mayor elemento encontrado
    cout << "El mayor elemento en el vector es: " << mayor << endl;

    return 0;
}