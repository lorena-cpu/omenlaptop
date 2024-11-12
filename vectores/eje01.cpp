#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // Usamos push_back para agregar elementos al vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Imprimir el contenido del vector
    for (int num : vec) {
        std::cout << num << " ";
    }

    return 0;
}
