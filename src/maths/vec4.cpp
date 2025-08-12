/***************************************************************************************************
 * @file  vec4.cpp
 * @brief Implementation of the vec4 struct
 **************************************************************************************************/

#include "maths/vec4.hpp"

vec4::vec4() : x(), y(), z(), w() { }

vec4::vec4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) { }

vec4::vec4(float value) : x(value), y(value), z(value), w(value) { }

vec4& vec4::operator+=(const vec4& vec) {
    x += vec.x;
    y += vec.y;
    z += vec.z;
    w += vec.w;

    return *this;
}

vec4& vec4::operator-=(const vec4& vec) {
    x -= vec.x;
    y -= vec.y;
    z -= vec.z;
    w -= vec.w;

    return *this;
}

vec4& vec4::operator*=(const vec4& vec) {
    x *= vec.x;
    y *= vec.y;
    z *= vec.z;
    w *= vec.w;

    return *this;
}

vec4& vec4::operator/=(const vec4& vec) {
    x /= vec.x;
    y /= vec.y;
    z /= vec.z;
    w /= vec.w;

    return *this;
}

vec4& vec4::operator+=(float value) {
    x += value;
    y += value;
    z += value;
    w += value;

    return *this;
}

vec4& vec4::operator-=(float value) {
    x -= value;
    y -= value;
    z -= value;
    w -= value;

    return *this;
}

vec4& vec4::operator*=(float value) {
    x *= value;
    y *= value;
    z *= value;
    w *= value;

    return *this;
}

vec4& vec4::operator/=(float value) {
    x /= value;
    y /= value;
    z /= value;
    w /= value;

    return *this;
}

bool vec4::operator==(const vec4& other) const {
    return x == other.x && y == other.y && z == other.z && w == other.w;
}

bool vec4::operator!=(const vec4& other) const {
    return x != other.x || y != other.y || z != other.z || w != other.w;
}

std::ostream& operator<<(std::ostream& stream, const vec4& vec) {
    stream << "( " << vec.x << " ; " << vec.y << " ; " << vec.z << " ; " << vec.w << " )";
    return stream;
}

std::istream& operator>>(std::istream& stream, vec4& vec) {
    stream >> vec.x >> vec.y >> vec.z >> vec.w;
    return stream;
}

vec4 operator+(const vec4& left, const vec4& right) {
    return vec4(
        left.x + right.x,
        left.y + right.y,
        left.z + right.z,
        left.w + right.w
    );
}

vec4 operator-(const vec4& left, const vec4& right) {
    return vec4(
        left.x - right.x,
        left.y - right.y,
        left.z - right.z,
        left.w - right.w
    );
}

vec4 operator*(const vec4& left, const vec4& right) {
    return vec4(
        left.x * right.x,
        left.y * right.y,
        left.z * right.z,
        left.w * right.w
    );
}

vec4 operator/(const vec4& left, const vec4& right) {
    return vec4(
        left.x / right.x,
        left.y / right.y,
        left.z / right.z,
        left.w / right.w
    );
}

vec4 operator+(const vec4& vec, float value) {
    return vec4(
        vec.x + value,
        vec.y + value,
        vec.z + value,
        vec.w + value
    );
}

vec4 operator-(const vec4& vec, float value) {
    return vec4(
        vec.x - value,
        vec.y - value,
        vec.z - value,
        vec.w - value
    );
}

vec4 operator*(const vec4& vec, float value) {
    return vec4(
        vec.x * value,
        vec.y * value,
        vec.z * value,
        vec.w * value
    );
}

vec4 operator*(float value, const vec4& vec) {
    return vec4(
        value * vec.x,
        value * vec.y,
        value * vec.z,
        value * vec.w
    );
}

vec4 operator/(const vec4& vec, float value) {
    return vec4(
        vec.x / value,
        vec.y / value,
        vec.z / value,
        vec.w / value
    );
}

vec4 operator-(const vec4& vec) {
    return vec4(-vec.x, -vec.y, -vec.z, -vec.w);
}
