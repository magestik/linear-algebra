#pragma once

/**
 * return the lesser of two values
 */
static inline float min(float x, float y)
{
	return((y < x) ? y : x);
}

/**
 * return the greater of two values
 */
static inline float max(float x, float y)
{
	return((y > x) ? y : x);
}

/**
 * constrain a value to lie between two further values
 */
static inline float clamp(float x, float minVal, float maxVal)
{
	return(max(min(x, maxVal), minVal));
}

/**
 * return the lesser of three values
 */
static inline float min3(float x, float y, float z)
{
	return min(z, min(x, y));
}

/**
 * return the greater of three values
 */
static inline float max3(float x, float y, float z)
{
	return max(z, max(x, y));
}

/**
 * return the median of three values
 */
static inline float med3(float x, float y, float z)
{
	return max(min(x, y), min(max(x, y), z));
}

/**
 * linearly interpolate between two values
 */
static inline float mix(float x, float y, float a)
{
	return((x * (1.0f - a)) + (y * a));
}

/**
 * convert a quantity in radians to degrees
 */
static inline float degrees(float radians)
{
	static constexpr float f = (180.0f / 3.14159265358979323846f);
	return radians * f;
}

/**
 * convert a quantity in degrees to radians
 */
static inline float radians(float degrees)
{
	static constexpr float f = (3.14159265358979323846f / 180.0f);
	return degrees * f;
}
