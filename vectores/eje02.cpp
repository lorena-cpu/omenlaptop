#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 12, 3, 4, 5};

    for (int num : numeros) {  // Recorre cada número en el vector
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
