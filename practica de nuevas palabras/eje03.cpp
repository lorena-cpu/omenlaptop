#include <iostream>

// Definición de una variable global
int numero = 10;

void mostrarNumero() {
    std::cout << "Número: " << numero << std::endl;
}
#include <iostream>

// Declaración de la variable externa
extern int numero; // Indica que 'numero' está definido en otro archivo
extern void mostrarNumero(); // Declaración de la función

int main() {
    mostrarNumero(); // Llama a la función que muestra 'numero'
    return 0;
}
