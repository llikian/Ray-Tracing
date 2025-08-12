/***************************************************************************************************
 * @file  Ray.hpp
 * @brief Declaration of the Ray struct
 **************************************************************************************************/

#pragma once

#include "vec3.hpp"

/**
 * @struct Ray
 * @brief
 */
struct Ray {
    Ray() = default;
    Ray(const vec3& origin, const vec3& direction);

    vec3 at(float distance) const;

    vec3 origin;
    vec3 direction;
};
