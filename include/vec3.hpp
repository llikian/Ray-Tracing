/***************************************************************************************************
 * @file  vec3.hpp
 * @brief Declaration of the vec3 struct
 **************************************************************************************************/

#pragma once

#include <iostream>

/**
 * @class vec3
 * @brief Holds 3 float values.
 */
struct vec3 {
    /**
     * @brief Constructs a vec3 with all components set to 0.
     */
    vec3();

    /**
     * @brief Constructs a vec3 with a specific value for each component.
     * @param x The value of the x component.
     * @param y The value of the y component.
     * @param z The value of the z component.
     */
    vec3(float x, float y, float z);

    /**
     * @brief Constructs a vec3 with the same value for each component.
     * @param value The value of each component.
     */
    explicit vec3(float value);

    /**
     * @brief Adds another vec3's components to the current instance's components.
     * @param vec The vec3 to add.
     * @return A reference to this instance.
     */
    vec3& operator +=(const vec3& vec);

    /**
     * @brief Subtracts the current instance's components by another vec3's components.
     * @param vec The vec3 to subtract by.
     * @return A reference to this instance.
     */
    vec3& operator -=(const vec3& vec);

    /**
     * @brief Multiplies the current instance's components by another vec3's components.
     * @param vec The vec3 to multiply by.
     * @return A reference to this instance.
     */
    vec3& operator *=(const vec3& vec);

    /**
     * @brief Divides the current instance's components by another vec3's components.
     * @param vec The vec3 to divide by.
     * @return A reference to this instance.
     */
    vec3& operator /=(const vec3& vec);

    /**
     * @brief Adds a value to all of the current instance's components.
     * @param value The value to add.
     * @return A reference to this instance.
     */
    vec3& operator +=(float value);

    /**
     * @brief Subtracts all of the current instance's components by a value.
     * @param value The value to subtract by.
     * @return A reference to this instance.
     */
    vec3& operator -=(float value);

    /**
     * @brief Multiplies all of the current instance's components by a value.
     * @param value The value to multiply by.
     * @return A reference to this instance.
     */
    vec3& operator *=(float value);

    /**
     * @brief Divides all of the current instance's components by a value.
     * @param value The value to divide by.
     * @return A reference to this instance.
     */
    vec3& operator /=(float value);

    /**
     * @brief Tests if this vec3 is equal to an other one.
     * @param other The vec3 to compare with.
     * @return Whether the two vec3 are equal.
     */
    bool operator ==(const vec3& other) const;

    /**
     * @brief Tests if this vec3 is different than an other one.
     * @param other The vec3 to compare with.
     * @return Whether the two vec3 are different.
     */
    bool operator !=(const vec3& other) const;

    union {
        struct {
            float x; ///< The x component of the vec3.
            float y; ///< The y component of the vec3.
            float z; ///< The z component of the vec3.
        };

        struct {
            float r; ///< The r component of the vec3.
            float g; ///< The g component of the vec3.
            float b; ///< The b component of the vec3.
        };
    };
};

/**
 * @brief Writes the components of the given vec3 to the output stream in the format
 * "( x ; y ; z )".
 * @param stream The output stream to write to.
 * @param vec The vec3 to write to the stream.
 * @return A reference to the output stream after writing the vec3.
 */
std::ostream& operator <<(std::ostream& stream, const vec3& vec);

/**
 * @brief Reads four values from the input stream and assigns them to the x, y and z components of
 * the given vec3.
 * @param stream The input stream to read from.
 * @param vec The vec3 to assign the read values to.
 * @return A reference to the input stream after reading the values and assigning them to vec3.
 */
std::istream& operator >>(std::istream& stream, vec3& vec);

/** @brief Adds a vec3's components to another's.
 *  @param left The left operand.
 *  @param right The right operand.
 *  @return The component-wise sum of the two vec3.
 */
vec3 operator +(const vec3& left, const vec3& right);

/** @brief Subtracts a vec3's components by another's.
 *  @param left The left operand.
 *  @param right The right operand.
 *  @return The component-wise subtraction of the first vec3 by the second.
 */
vec3 operator -(const vec3& left, const vec3& right);

/** @brief Multiplies a vec3's components by another's.
 *  @param left The left operand.
 *  @param right The right operand.
 *  @return The component-wise product of the two vec3.
 */
vec3 operator *(const vec3& left, const vec3& right);

/** @brief Divides a vec3's components by another's.
 *  @param left The left operand.
 *  @param right The right operand.
 *  @return The component-wise division of the first vec3 by the second.
 */
vec3 operator /(const vec3& left, const vec3& right);

/** @brief Adds a value to each of a vec3's components.
 *  @param vec The vec3.
 *  @param value The value.
 *  @return The component-wise sum of a vec3 by a value.
 */
vec3 operator +(const vec3& vec, float value);

/** @brief Subtracts each of a vec3's components by a value.
 *  @param vec The vec3.
 *  @param value The value.
 *  @return The component-wise subtraction of a vec3 by a value.
 */
vec3 operator -(const vec3& vec, float value);

/** @brief Multiplies each of a vec3's components by a value.
 *  @param vec The vec3.
 *  @param value The value.
 *  @return The component-wise product of a vec3 by a value.
 */
vec3 operator *(const vec3& vec, float value);

/** @brief Multiplies each of a vec3's components by a value.
 *  @param value The value.
 *  @param vec The vec3.
 *  @return The component-wise product of a vec3 by a value.
 */
vec3 operator *(float value, const vec3& vec);

/** @brief Divides each of a vec3's components by a value.
 *  @param vec The vec3.
 *  @param value The value.
 *  @return The component-wise division of a vec3 by a value.
 */
vec3 operator /(const vec3& vec, float value);

/**
 * @brief Multiplies all of a vec3's components by -1.
 *  @param vec The vec3.
 *  @return The component-wise product of a vec3 by -1.
 */
vec3 operator -(const vec3& vec);
