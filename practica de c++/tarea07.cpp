#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    vector<int> numeros = {5, 3, 8, 5, 2, 3, 1, 2, 8};
    vector<int> numerosUnicos;
    sort(numeros.begin(), numeros.end());

    for (size_t i = 0; i < numeros.size(); i++) {
        bool duplicado = false;

        for (size_t j = 0; j < numerosUnicos.size(); j++) {
            if (numeros[i] == numerosUnicos[j]) {
                duplicado = true;
                break; 
            }
        }

        if (duplicado) {
            continue; 
        }
        numerosUnicos.push_back(numeros[i]);
    }

    cout << "Numeros unicos: ";
    for (int num : numerosUnicos) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}