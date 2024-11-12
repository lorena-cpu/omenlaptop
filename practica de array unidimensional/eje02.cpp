#include <iostream>
using namespace std;//suma en array
int main () {
    int ale [100],n,suma;
    cout <<"ingrese el numero de elementos del arreglo : ";
    cin>> n;
    for (int i= 0; i<n ; i++){
        cout <<"ingrese un numero : ";
        cin >> ale [i];
        suma += ale [i];
    } //ingresas elementos y estos se suman
    cout <<"la suma de los vslores es: "<<suma;
    return 0;
}