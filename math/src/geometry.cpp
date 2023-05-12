#include "mymath.h"

using namespace math::geometry;

template<typename T>
constexpr T circle::perimeter(T radius) {
    return 2 * PI * radius;
}

template<typename T>
constexpr T circle::area(T radius) {
    return PI * radius * radius;
}
