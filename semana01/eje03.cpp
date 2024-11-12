#include <iostream>
#include <cctype>
#include <string>

int main() {
    std::string texto = "HOLA MUNDO!";
    for (char& c : texto) {
        c = tolower(c);
    }

    std::cout << "Texto en minUsculas: " << texto << std::endl;
    
    return 0;
}