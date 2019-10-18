#pragma once

/**
 * extract the sign of the parameter
 */
static inline constexpr float sign(float x)
{
	return ((x < 0.0f) ? (-1.0f) : ((x > 0.0f) ? 1.0f : 0.0f));
}

/**
 * return the lesser of two values
 */
static inline constexpr float min(float x, float y)
{
	return((y < x) ? y : x);
}

/**
 * return the greater of two values
 */
static inline constexpr float max(float x, float y)
{
	return((y > x) ? y : x);
}

/**
 * constrain a value to lie between two further values
 */
static inline constexpr float clamp(float x, float minVal, float maxVal)
{
	return max(min(x, maxVal), minVal);
}

/**
 * return the lesser of three values
 */
static inline constexpr float min3(float x, float y, float z)
{
	return min(z, min(x, y));
}

/**
 * return the greater of three values
 */
static inline constexpr float max3(float x, float y, float z)
{
	return max(z, max(x, y));
}

/**
 * return the median of three values
 */
static inline constexpr float med3(float x, float y, float z)
{
	return max(min(x, y), min(max(x, y), z));
}

/**
 * linearly interpolate between two values
 */
static inline constexpr float mix(float x, float y, float a)
{
	return((x * (1.0f - a)) + (y * a));
}

/**
 * convert a quantity in radians to degrees
 */
static inline constexpr float degrees(float radians)
{
	return radians * (180.0f / 3.14159265358979323846f);
}

/**
 * convert a quantity in degrees to radians
 */
static inline constexpr float radians(float degrees)
{
	return degrees * (3.14159265358979323846f / 180.0f);
}
