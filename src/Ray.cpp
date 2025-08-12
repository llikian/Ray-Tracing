/***************************************************************************************************
 * @file  Ray.cpp
 * @brief Implementation of the Ray struct
 **************************************************************************************************/

#include "Ray.hpp"

Ray::Ray(const vec3& origin, const vec3& direction): origin(origin), direction(direction) { }

vec3 Ray::at(float distance) const {
    return origin + distance * direction;
}
