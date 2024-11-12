#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int suma = 0;

    cout << "Introduce los elementos de la matriz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
            suma += matriz[i][j];
        }
    }

    cout << "La suma de los elementos de la matriz es: " << suma << endl;
    return 0;
}
