// main.cpp
#include <iostream>
#include "funciones.h"

int main() {
    int num1, num2;

    std::cout << "Ingrese dos numeros: ";
    std::cin >> num1 >> num2;

    int resultadoSuma = suma(num1, num2);
    int resultadoMultiplicacion = multiplica(num1, num2);

    std::cout << "La suma es: " << resultadoSuma << std::endl;
    std::cout << "La multiplicacion es: " << resultadoMultiplicacion << std::endl;

    return 0;
}
