#include <iostream>
#include <string>
using namespace std;

string cifrarCesar(const string& texto, int clave) {
    string textoCifrado = "";

    for (char c : texto) {
        // Verificar si es una letra mayúscula
        if (isupper(c)) {
            // Desplazamiento en el rango de letras mayúsculas
            textoCifrado += char(int(c + clave - 'A') % 26 + 'A');
        }
        // Verificar si es una letra minúscula
        else if (islower(c)) {
            // Desplazamiento en el rango de letras minúsculas
            textoCifrado += char(int(c + clave - 'a') % 26 + 'a');
        }
        // Si no es letra, simplemente lo añadimos sin cambios
        else {
            textoCifrado += c;
        }
    }

    return textoCifrado;
}

int main() {
    string texto;
    int clave;

    // Solicitar al usuario que ingrese una cadena
    cout << "Ingresa la cadena a cifrar: ";
    getline(cin, texto);

    // Solicitar al usuario que ingrese la clave
    cout << "Ingresa la clave (numero de desplazamiento): ";
    cin >> clave;

    // Cifrar la cadena
    string resultado = cifrarCesar(texto, clave);

    // Mostrar el resultado
    cout << "Texto cifrado: " << resultado << endl;

    return 0;
}