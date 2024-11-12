#include <iostream>
#include <complex> 
using namespace std;
int main() {
    complex<double> num1(3.0, 4.0); 
    complex<double> num2(1.0, 2.0); 

    auto suma = num1 + num2;
    cout << "Suma: " << suma << endl;

    auto resta = num1 - num2;
    cout << "Resta: " << resta << endl;

    auto multiplicacion = num1 * num2;
    cout << "Multiplicación: " << multiplicacion << endl;

    auto division = num1 / num2;
    cout << "División: " << division << endl;

    cout << "Magnitud de num1: " << abs(num1) << endl;

    return 0;
}
