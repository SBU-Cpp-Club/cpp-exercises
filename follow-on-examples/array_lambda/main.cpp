#include <iostream>
#include <array.H>

int main() {

    Array<double, 1, 8, 1, 8> x = {0.0};

    ParallelFor(1, 8, 1, 8,
    [&] (int i, int j)
    {
        x(i, j) += i + j;
    });

    ParallelFor(1, 8, 1, 8,
    [=] (int i, int j)
    {
        std::cout << i << " " << j << " " << x(i,j) << std::endl;
    });

    return 0;

}
