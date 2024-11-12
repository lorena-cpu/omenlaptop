#include <iostream>
using namespace std;
int main() {
    auto a = 5;          // 'a' es deducido como int
    auto b = 3.14;      // 'b' es deducido como double
    auto mensaje = "Hola, mundo"; // 'mensaje' es deducido como const char*

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "mensaje: " << mensaje << endl;

    return 0;
}
