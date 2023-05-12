#pragma once

// Constants
#define PI 3.141592741
#define DEGREE 0.0174532930
#define RADIAN 57.2957779189


// Math

namespace math {    
    namespace geometry {
        namespace circle {
        template<typename T>
        constexpr T area(T radius);

        template<typename T>
        constexpr T perimeter(T radius);
        }
    }
}