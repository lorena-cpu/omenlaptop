#include <iostream>
using namespace std;//suma en array
int main () {
    int abdias[] = {3,4,5,6,7};
    int suma = 0;
    for (int i=0; i<5 ; i++) {
      suma += abdias[i];

    }
    cout << "la suma es : "<<suma<<endl;
    return 0;
}