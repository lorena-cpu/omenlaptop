#include <iostream>
using namespace std;
int main () {
    int edad;
    cout<<"ingresa tu edad  ";
    cin>>edad;
    if (edad >= 18) {
     cout<<"bienvenido al sitio";
    }
    else if (edad<0){
        cout<<"no existe";
    }
    else {
        cout<<"no puedes ingresar ";
    }
    return 0;
}