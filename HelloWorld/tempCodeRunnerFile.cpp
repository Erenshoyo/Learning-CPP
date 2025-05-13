#include <iostream>

//cout << (insertion operator) = used to output data.
//cin >> (extraction operator) = used to input data.

int main() {
    std::string name;

    std::cout << "What is your name? " << '\n';
    std::cin >> name;

    std::cout << "Hello " << name << '\n';

    return 0;
}