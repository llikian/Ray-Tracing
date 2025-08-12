/***************************************************************************************************
 * @file  vec3.hpp
 * @brief Implementation of the vec3 struct
 **************************************************************************************************/

#include "../../include/maths/vec3.hpp"

vec3::vec3() : x(), y(), z() { }

vec3::vec3(float x, float y, float z) : x(x), y(y), z(z) { }

vec3::vec3(float value) : x(value), y(value), z(value) { }

vec3& vec3::operator+=(const vec3& vec) {
    x += vec.x;
    y += vec.y;
    z += vec.z;

    return *this;
}

vec3& vec3::operator-=(const vec3& vec) {
    x -= vec.x;
    y -= vec.y;
    z -= vec.z;

    return *this;
}

vec3& vec3::operator*=(const vec3& vec) {
    x *= vec.x;
    y *= vec.y;
    z *= vec.z;

    return *this;
}

vec3& vec3::operator/=(const vec3& vec) {
    x /= vec.x;
    y /= vec.y;
    z /= vec.z;

    return *this;
}

vec3& vec3::operator+=(float value) {
    x += value;
    y += value;
    z += value;

    return *this;
}

vec3& vec3::operator-=(float value) {
    x -= value;
    y -= value;
    z -= value;

    return *this;
}

vec3& vec3::operator*=(float value) {
    x *= value;
    y *= value;
    z *= value;

    return *this;
}

vec3& vec3::operator/=(float value) {
    x /= value;
    y /= value;
    z /= value;

    return *this;
}

bool vec3::operator==(const vec3& other) const {
    return x == other.x && y == other.y && z == other.z;
}

bool vec3::operator!=(const vec3& other) const {
    return x != other.x || y != other.y || z != other.z;
}

std::ostream& operator<<(std::ostream& stream, const vec3& vec) {
    stream << "( " << vec.x << " ; " << vec.y << " ; " << vec.z << " )";
    return stream;
}

std::istream& operator>>(std::istream& stream, vec3& vec) {
    stream >> vec.x >> vec.y >> vec.z;
    return stream;
}

vec3 operator+(const vec3& left, const vec3& right) {
    return vec3(
        left.x + right.x,
        left.y + right.y,
        left.z + right.z
    );
}

vec3 operator-(const vec3& left, const vec3& right) {
    return vec3(
        left.x - right.x,
        left.y - right.y,
        left.z - right.z
    );
}

vec3 operator*(const vec3& left, const vec3& right) {
    return vec3(
        left.x * right.x,
        left.y * right.y,
        left.z * right.z
    );
}

vec3 operator/(const vec3& left, const vec3& right) {
    return vec3(
        left.x / right.x,
        left.y / right.y,
        left.z / right.z
    );
}

vec3 operator+(const vec3& vec, float value) {
    return vec3(
        vec.x + value,
        vec.y + value,
        vec.z + value
    );
}

vec3 operator-(const vec3& vec, float value) {
    return vec3(
        vec.x - value,
        vec.y - value,
        vec.z - value
    );
}

vec3 operator*(const vec3& vec, float value) {
    return vec3(
        vec.x * value,
        vec.y * value,
        vec.z * value
    );
}

vec3 operator*(float value, const vec3& vec) {
    return vec3(
        value * vec.x,
        value * vec.y,
        value * vec.z
    );
}

vec3 operator/(const vec3& vec, float value) {
    return vec3(
        vec.x / value,
        vec.y / value,
        vec.z / value
    );
}

vec3 operator-(const vec3& vec) {
    return vec3(-vec.x, -vec.y, -vec.z);
}
