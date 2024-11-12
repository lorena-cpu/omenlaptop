#include <iostream>
using namespace std;

int main() {
    const int cantidad = 10;
    int notas[cantidad];
    
    cout << "Ingresa 10 numeros:" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> notas[i];
    }

    int suma = 0;
    for (int i = 0; i <cantidad; i++) {
        suma += notas[i];
    }

    double promedio = static_cast<double>(suma) /cantidad;

    int contador = 0;
    for (int i = 0; i < cantidad; i++) {
        if (notas[i] > promedio) {
            contador++;
        }
    }

    cout << "El promedio es: " << promedio << endl;
    cout << "Cantidad de numeros mayores que el promedio: " << contador << endl;

    return 0;
}