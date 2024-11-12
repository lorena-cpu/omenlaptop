#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingresa el tamano de la matriz cuadrada (n x n): ";
    cin >> n;

    int matriz[n][n];
    int transpuesta[n][n];

    cout << "Ingresa los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}