/***************************************************************************************************
 * @file  Image.cpp
 * @brief Implementation of the Image struct
 **************************************************************************************************/

#include "Image.hpp"

#include <iostream>
#include <vector>

#include "stb_image_write.h"

Image::Image(unsigned int width, unsigned int height)
    : width(width), height(height), data(nullptr) {
    data = new vec3*[width];
    for(unsigned int i = 0 ; i < width ; ++i) { data[i] = new vec3[height]; }
}

Image::~Image() {
    for(unsigned int i = 0 ; i < width ; ++i) { delete[] data[i]; }
    delete[] data;
}

vec3& Image::operator()(unsigned int row, unsigned int column) {
    return data[row][column];
}

const vec3& Image::operator()(unsigned int row, unsigned int column) const {
    return data[row][column];
}

void Image::write() const {
    std::vector<uint8_t> normalized_data;
    normalized_data.reserve(width * height * 3);

    for(unsigned int j = 0 ; j < height ; ++j) {
        for(unsigned int i = 0 ; i < width ; ++i) {
            const vec3& pixel = data[i][j];

            normalized_data.push_back(std::clamp(255.0f * pixel.r, 0.0f, 255.0f));
            normalized_data.push_back(std::clamp(255.0f * pixel.g, 0.0f, 255.0f));
            normalized_data.push_back(std::clamp(255.0f * pixel.b, 0.0f, 255.0f));
        }
    }

    stbi_flip_vertically_on_write(true);
    stbi_write_png("data/img.png", width, height, 3, normalized_data.data(), width * 3);
}
