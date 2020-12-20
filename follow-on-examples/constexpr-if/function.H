#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>

struct type_1 {
    double a;
    double b;
};

struct type_2 {
    double a;
    double b;
    double c;
};

template <typename T>
void pretty_print(T t) {

    std::cout << "a = " << t.a << std::endl;
    std::cout << "b = " << t.b << std::endl;

    if constexpr (std::is_same<T, type_2>::value) {
        std::cout << "c = " << t.c << std::endl;
    }
}
#endif
