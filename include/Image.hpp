/***************************************************************************************************
 * @file  Image.hpp
 * @brief Declaration of the Image struct
 **************************************************************************************************/

#pragma once

#include "Color.hpp"

/**
 * @struct Image
 * @brief
 */
struct Image {
    Image(unsigned int width, unsigned int height);

    ~Image();

    Color& operator()(unsigned int row, unsigned int column);

    const Color& operator()(unsigned int row, unsigned int column) const;

    void write() const;

    const unsigned int width;
    const unsigned int height;
    Color** data;
};