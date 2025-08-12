/***************************************************************************************************
 * @file  vec4.hpp
 * @brief Declaration of the vec4 class
 **************************************************************************************************/

#pragma once

#include <iostream>

/**
 * @class vec4
 * @brief Holds 4 float values.
 */
struct vec4 {
    /**
     * @brief Constructs a vec4 with all components set to 0.
     */
    vec4();

    /**
     * @brief Constructs a vec4 with a specific value for each component.
     * @param x The value of the x component.
     * @param y The value of the y component.
     * @param z The value of the z component.
     * @param w The value of the w component.
     */
    vec4(float x, float y, float z, float w);

    /**
     * @brief Constructs a vec4 with the same value for each component.
     * @param value The value of each component.
     */
    explicit vec4(float value);

    /**
     * @brief Adds another vec4's components to the current instance's components.
     * @param vec The vec4 to add.
     * @return A reference to this instance.
     */
    vec4& operator +=(const vec4& vec);

    /**
     * @brief Subtracts the current instance's components by another vec4's components.
     * @param vec The vec4 to subtract by.
     * @return A reference to this instance.
     */
    vec4& operator -=(const vec4& vec);

    /**
     * @brief Multiplies the current instance's components by another vec4's components.
     * @param vec The vec4 to multiply by.
     * @return A reference to this instance.
     */
    vec4& operator *=(const vec4& vec);

    /**
     * @brief Divides the current instance's components by another vec4's components.
     * @param vec The vec4 to divide by.
     * @return A reference to this instance.
     */
    vec4& operator /=(const vec4& vec);

    /**
     * @brief Adds a value to all of the current instance's components.
     * @param value The value to add.
     * @return A reference to this instance.
     */
    vec4& operator +=(float value);

    /**
     * @brief Subtracts all of the current instance's components by a value.
     * @param value The value to subtract by.
     * @return A reference to this instance.
     */
    vec4& operator -=(float value);

    /**
     * @brief Multiplies all of the current instance's components by a value.
     * @param value The value to multiply by.
     * @return A reference to this instance.
     */
    vec4& operator *=(float value);

    /**
     * @brief Divides all of the current instance's components by a value.
     * @param value The value to divide by.
     * @return A reference to this instance.
     */
    vec4& operator /=(float value);

    /**
     * @brief Tests if this vec4 is equal to an other one.
     * @param other The vec4 to compare with.
     * @return Whether the two vec4 are equal.
     */
    bool operator ==(const vec4& other) const;

    /**
     * @brief Tests if this vec4 is different than an other one.
     * @param other The vec4 to compare with.
     * @return Whether the two vec4 are different.
     */
    bool operator !=(const vec4& other) const;

    union {
        struct {
            float x; ///< The x component of the vec3.
            float y; ///< The y component of the vec3.
            float z; ///< The z component of the vec3.
            float w; ///< The w component of the vec3.
        };

        struct {
            float r; ///< The r component of the color.
            float g; ///< The g component of the color.
            float b; ///< The b component of the color.
            float a; ///< The a component of the color.
        };
    };
};

/**
 * @brief Writes the components of the given vec4 to the output stream in the format
 * "( x ; y ; z ; w )".
 * @param stream The output stream to write to.
 * @param vec The vec4 to write to the stream.
 * @return A reference to the output stream after writing the vec4.
 */
std::ostream& operator <<(std::ostream& stream, const vec4& vec);

/**
 * @brief Reads four values from the input stream and assigns them to the x, y, z and w components
 * of the given vec4.
 * @param stream The input stream to read from.
 * @param vec The vec4 to assign the read values to.
 * @return A reference to the input stream after reading the values and assigning them to vec4.
 */
std::istream& operator >>(std::istream& stream, vec4& vec);

/** @brief Adds a vec4's components to another's.
 *  @param left The left operand.
 *  @param right The right operand.
 *  @return The component-wise sum of the two vec4.
 */
vec4 operator +(const vec4& left, const vec4& right);

/** @brief Subtracts a vec4's components by another's.
 *  @param left The left operand.
 *  @param right The right operand.
 *  @return The component-wise subtraction of the first vec4 by the second.
 */
vec4 operator -(const vec4& left, const vec4& right);

/** @brief Multiplies a vec4's components by another's.
 *  @param left The left operand.
 *  @param right The right operand.
 *  @return The component-wise product of the two vec4.
 */
vec4 operator *(const vec4& left, const vec4& right);

/** @brief Divides a vec4's components by another's.
 *  @param left The left operand.
 *  @param right The right operand.
 *  @return The component-wise division of the first vec4 by the second.
 */
vec4 operator /(const vec4& left, const vec4& right);

/** @brief Adds a value to each of a vec4's components.
 *  @param vec The vec4.
 *  @param value The value.
 *  @return The component-wise sum of a vec4 by a value.
 */
vec4 operator +(const vec4& vec, float value);

/** @brief Subtracts each of a vec4's components by a value.
 *  @param vec The vec4.
 *  @param value The value.
 *  @return The component-wise subtraction of a vec4 by a value.
 */
vec4 operator -(const vec4& vec, float value);

/** @brief Multiplies each of a vec4's components by a value.
 *  @param vec The vec4.
 *  @param value The value.
 *  @return The component-wise product of a vec4 by a value.
 */
vec4 operator *(const vec4& vec, float value);

/** @brief Multiplies each of a vec4's components by a value.
 *  @param value The value.
 *  @param vec The vec4.
 *  @return The component-wise product of a vec4 by a value.
 */
vec4 operator *(float value, const vec4& vec);

/** @brief Divides each of a vec4's components by a value.
 *  @param vec The vec4.
 *  @param value The value.
 *  @return The component-wise division of a vec4 by a value.
 */
vec4 operator /(const vec4& vec, float value);

/**
 * @brief Multiplies all of a vec4's components by -1.
 *  @param vec The vec4.
 *  @return The component-wise product of a vec4 by -1.
 */
vec4 operator -(const vec4& vec);
