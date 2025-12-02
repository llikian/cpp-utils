/***************************************************************************************************
 * @file  main.cpp
 * @brief Contains the main program of the project
 **************************************************************************************************/

#include <iostream>
#include <stdexcept>
#include <unistd.h>

#include "Array2D.hpp"
#include "Random.hpp"
#include "Timer.hpp"
#include "utility.hpp"
#include "vec.hpp"

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

        std::cout << '\n';
        Array<int> array(10);
        for(int i = 0 ; i < 10 ; ++i) {
            std::cout << Random::real3(0.0f, 10.0f) << '\n';
            std::cout << Random::real3(vec3(1.0f, 3.0f, 5.0f), vec3(2.0f, 4.0f, 6.0f)) << '\n';
            array[i] = Random::integer(-100, 100);
        }

        std::cout << "array: " << array << '\n';
        std::sort(array.begin(), array.end());
        std::cout << "array: " << array << '\n';

        std::cout << '\n';
        std::cout << to_bitset(1024) << '\n';
        std::cout << to_bitset(2.523f) << '\n';

        std::cout << '\n';
        Timer timer;
        sleep(1);
        std::cout << "Timer: " << timer.elapsed_time() << "s\n";
        timer.pause();
        sleep(1);
        std::cout << "Timer: " << timer.elapsed_time() << "s\n";
        timer.unpause();
        sleep(1);
        std::cout << "Timer: " << timer.elapsed_time() << "s\n";
        timer.reset();
        std::cout << "Timer: " << timer.elapsed_time() << "s\n";

    } catch(const std::exception& exception) {
        std::cerr << "ERROR : " << exception.what() << '\n';
        return -1;
    }

    return 0;
}
