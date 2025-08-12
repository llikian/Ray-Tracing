/***************************************************************************************************
 * @file  vec2.cpp
 * @brief Implementation of the vec2 struct
 **************************************************************************************************/

#include "maths/vec2.hpp"

vec2::vec2() : x(), y() { }

vec2::vec2(float x, float y) : x(x), y(y) { }

vec2::vec2(float value) : x(value), y(value) { }

vec2& vec2::operator+=(const vec2& vec) {
    x += vec.x;
    y += vec.y;

    return *this;
}

vec2& vec2::operator-=(const vec2& vec) {
    x -= vec.x;
    y -= vec.y;

    return *this;
}

vec2& vec2::operator*=(const vec2& vec) {
    x *= vec.x;
    y *= vec.y;

    return *this;
}

vec2& vec2::operator/=(const vec2& vec) {
    x /= vec.x;
    y /= vec.y;

    return *this;
}

vec2& vec2::operator+=(float value) {
    x += value;
    y += value;

    return *this;
}

vec2& vec2::operator-=(float value) {
    x -= value;
    y -= value;

    return *this;
}

vec2& vec2::operator*=(float value) {
    x *= value;
    y *= value;

    return *this;
}

vec2& vec2::operator/=(float value) {
    x /= value;
    y /= value;

    return *this;
}

bool vec2::operator==(const vec2& other) const {
    return x == other.x && y == other.y;
}

bool vec2::operator!=(const vec2& other) const {
    return x != other.x || y != other.y;
}

std::ostream& operator<<(std::ostream& stream, const vec2& vec) {
    stream << "( " << vec.x << " ; " << vec.y << " )";
    return stream;
}

std::istream& operator>>(std::istream& stream, vec2& vec) {
    stream >> vec.x >> vec.y;
    return stream;
}

vec2 operator+(const vec2& left, const vec2& right) {
    return vec2(
        left.x + right.x,
        left.y + right.y
    );
}

vec2 operator-(const vec2& left, const vec2& right) {
    return vec2(
        left.x - right.x,
        left.y - right.y
    );
}

vec2 operator*(const vec2& left, const vec2& right) {
    return vec2(
        left.x * right.x,
        left.y * right.y
    );
}

vec2 operator/(const vec2& left, const vec2& right) {
    return vec2(
        left.x / right.x,
        left.y / right.y
    );
}

vec2 operator+(const vec2& vec, float value) {
    return vec2(
        vec.x + value,
        vec.y + value
    );
}

vec2 operator-(const vec2& vec, float value) {
    return vec2(
        vec.x - value,
        vec.y - value
    );
}

vec2 operator*(const vec2& vec, float value) {
    return vec2(
        vec.x * value,
        vec.y * value
    );
}

vec2 operator*(float value, const vec2& vec) {
    return vec2(
        value * vec.x,
        value * vec.y
    );
}

vec2 operator/(const vec2& vec, float value) {
    return vec2(
        vec.x / value,
        vec.y / value
    );
}

vec2 operator-(const vec2& vec) {
    return vec2(-vec.x, -vec.y);
}
