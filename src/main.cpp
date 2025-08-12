/***************************************************************************************************
 * @file  main.cpp
 * @brief Contains the main program of the project
 **************************************************************************************************/

#include <iostream>
#include <stdexcept>

#include "Image.hpp"

void run() {
    /* ---- Create Image Data ---- */
    Image image(512, 512);

    /* ---- Do Stuff ---- */
    for(unsigned int j = 0 ; j < image.height ; ++j) {
        for(unsigned int i = 0 ; i < image.width ; ++i) {
            vec3& pixel = image(i, j);
            pixel.r = static_cast<float>(i) / image.width;
            pixel.b = static_cast<float>(j) / image.height;
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
