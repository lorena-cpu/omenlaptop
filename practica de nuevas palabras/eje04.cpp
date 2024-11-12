#include <iostream>
#include <complex> 
using namespace std;
int main() {
    complex<double> num(3.0, 4.0);

    double parteImaginaria = num.imag();

    cout << "La parte imaginaria de " << num << " es: " << parteImaginaria << std::endl;

    return 0;
}
