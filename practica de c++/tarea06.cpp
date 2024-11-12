#include <iostream>
#include <string>
using namespace std;

int main() {
    string preguntas[] = {
        "¿Cual es la capital de Francia? (a) Berlin (b) Madrid (c) Paris: ",
        "¿Cuantos planetas hay en el sistema solar? (a) 7 (b) 8 (c) 9: ",
        "¿Cual es el oceano mas grande del mundo? (a) Atlantico (b) Indico (c) Pacifico: "
    };
    char respuestas[] = {'c', 'b', 'c'}; 
    int numPreguntas = sizeof(preguntas) / sizeof(preguntas[0]);
    int correctas = 0;
    int incorrectas = 0;
    for (int i = 0; i < numPreguntas; i++) {
        char respuestaUsuario;
        cout << preguntas[i];
        cin >> respuestaUsuario;
        respuestaUsuario = tolower(respuestaUsuario);

        if (respuestaUsuario == respuestas[i]) {
            cout << "¡Correcto!" << endl;
            correctas++;
        } else {
            cout << "Incorrecto. La respuesta correcta es: " << respuestas[i] << endl;
            incorrectas++;
        }
    }

    cout << "Respuestas correctas: " << correctas << endl;
    cout << "Respuestas incorrectas: " << incorrectas << endl;

    return 0;
}