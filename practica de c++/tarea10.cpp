#include <iostream>
#include <string>
using namespace std;
int main() {
    string oracion;
    cout << "Ingresa una oracion: ";
    getline(cin, oracion);
    int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;
    for (char c : oracion) {
        switch (tolower(c)) { 
            case 'a':
                contadorA++;
                break;
            case 'e':
                contadorE++;
                break;
            case 'i':
                contadorI++;
                break;
            case 'o':
                contadorO++;
                break;
            case 'u':
                contadorU++;
                break;
        }
    }
    cout << "Cantidad de 'a': " << contadorA << endl;
    cout << "Cantidad de 'e': " << contadorE << endl;
    cout << "Cantidad de 'i': " << contadorI << endl;
    cout << "Cantidad de 'o': " << contadorO << endl;
    cout << "Cantidad de 'u': " << contadorU << endl;

    return 0;
}