#include <iostream>
using namespace std;

int main() {
    // Definir el array
    const int tamaño = 5;
    int numeros[tamaño] = {10, 20, 30, 40, 50};
    
    // Calcular la suma de los elementos
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += numeros[i];
    }

    // Calcular el promedio
    double promedio = static_cast<double>(suma) / tamaño;

    // Mostrar el resultado
    cout << "El promedio es: " << promedio << endl;

    int mayor = 0;
    for (int i = 0; i < tamaño; i++) {
        if(numeros[i]>promedio){
          mayor = mayor + 1;
        }
        cout<<"mayores que el promedio son: "<<mayor;
    }

    return 0;
}