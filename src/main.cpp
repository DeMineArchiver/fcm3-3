#include <iostream>
#include <format>
#include <mymath.h>

using namespace math::geometry;

int main() {
    std::cout << "Hello, world!\n";

    float r = 25.5;
    std::cout << circle::area(r) << "\n";

    system("pause");
    return 0;
}