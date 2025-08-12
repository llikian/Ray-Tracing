/***************************************************************************************************
 * @file  Image.hpp
 * @brief Declaration of the Image struct
 **************************************************************************************************/

#pragma once

#include "maths/vec3.hpp"

/**
 * @struct Image
 * @brief
 */
struct Image {
    Image(unsigned int width, unsigned int height);

    ~Image();

    vec3& operator()(unsigned int row, unsigned int column);

    const vec3& operator()(unsigned int row, unsigned int column) const;

    void write() const;

    const unsigned int width;
    const unsigned int height;
    vec3** data;
};