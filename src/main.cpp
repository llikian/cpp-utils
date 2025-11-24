/***************************************************************************************************
 * @file  main.cpp
 * @brief Contains the main program of the project
 **************************************************************************************************/

#include <iostream>
#include <stdexcept>
#include "Array2D.hpp"

int main() {
    try {
        Array2D<int> a1;
        std::cout << a1 << '\n';

        Array2D<int> a2(5, 3);
        std::cout << a2 << '\n';

        Array2D<int> a3(3, 5, 5);
        std::cout << a3 << '\n';
        a3.fill(69);
        std::cout << a3 << '\n';
        a3.assign(2, 2, 0);
        std::cout << a3 << '\n';
        a3.assign(4, 4, 3);
        std::cout << a3 << '\n';
        a3.resize(3, 3);
        std::cout << a3 << '\n';
        a3.resize(4, 4);
        std::cout << a3 << '\n';

    } catch(const std::exception& exception) {
        std::cerr << "ERROR : " << exception.what() << '\n';
        return -1;
    }

    return 0;
}
