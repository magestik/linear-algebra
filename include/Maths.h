#pragma once

#include <cmath>
#include <stdint.h>

/**
 * return the lesser of two values
 */
inline float min(float x, float y)
{
	return((y < x) ? y : x);
}

/**
 * return the greater of two values
 */
inline float max(float x, float y)
{
	return((y > x) ? y : x);
}

/**
 * constrain a value to lie between two further values
 */
inline float clamp(float x, float minVal, float maxVal)
{
	return(max(min(x, maxVal), minVal));
}

/**
 * linearly interpolate between two values
 */
inline float mix(float x, float y, float a)
{
	return((x * (1 - a)) + (y * a));
}

/**
 * convert a quantity in radians to degrees
 */
inline float degrees(float radians)
{
	return(radians * (180.0f / 3.14159265358979323846));
}

/**
 * convert a quantity in degrees to radians
 */
inline float radians(float degrees)
{
	return(degrees * (3.14159265358979323846 / 180.0f));
}
