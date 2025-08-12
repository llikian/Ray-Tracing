/***************************************************************************************************
 * @file  main.cpp
 * @brief Contains the main program of the project
 **************************************************************************************************/

#include <cmath>
#include <iostream>
#include <stdexcept>

#include "Image.hpp"
#include "Ray.hpp"
#include "maths/geometry.hpp"
#include "maths/vec2.hpp"

template<typename T>
T lerp(T value_at_0, T value_at_1, float t) {
    return (1.0f - t) * value_at_0 + t * value_at_1;
}

void run() {
    /* ---- Init ---- */
    unsigned int width = 1025;
    unsigned int height = 512;
    Image image(width, height);

    vec3 camera(0.0f, 0.0f, 0.0f);

    /* ---- Do Stuff ---- */
    vec3 extremity(0.0f, 0.0f, -1.0f);

    for(unsigned int j = 0 ; j < height ; ++j) {
        for(unsigned int i = 0 ; i < width ; ++i) {
            /* Extremity & Ray */
            extremity.x = (2.0f * i - width) / height;
            extremity.y = (2.0f * j - height) / height;

            Ray ray(camera, extremity - camera);

            /* Pixel Color */
            vec3& pixel = image(i, j);

            pixel = lerp(vec3(1.0f), vec3(0.5f, 0.7f, 1.0f), 0.5f + 0.5f * ray.direction.y);
        }
    }

    /* ---- Write Image ---- */
    image.write();
}

int main() {
    try {
        run();
    } catch(const std::exception& exception) {
        std::cerr << "ERROR : " << exception.what() << '\n';
        return -1;
    }

    return 0;
}
