/***************************************************************************************************
 * @file  Ray.cpp
 * @brief Implementation of the Ray struct
 **************************************************************************************************/

#include "Ray.hpp"

#include "maths/geometry.hpp"

Ray::Ray(const vec3& origin, const vec3& direction): origin(origin), direction(normalize(direction)) { }

vec3 Ray::at(float distance) const {
    return origin + distance * direction;
}
