#pragma once

#include "bvec2.h"
#include "scalar1.h"
#include "scalar2.h"

#if defined(__clang__)
typedef float v2sf __attribute__((__vector_size__(8)));
#elif defined(__GNUC__)
typedef float v2sf __attribute__((vector_size(8)));
#else
struct v2sf
{
	v2sf () = default;

	constexpr v2sf (float x_, float y_) : v { x_, y_ }
	{

	}

	float & operator [](unsigned int index)
	{
		return v[index];
	}

	constexpr float operator [](unsigned int index) const
	{
		return v[index];
	}

private:

	float v [2];
};

static inline constexpr v2sf operator - (const v2sf & v)
{
	return v2sf(-v[0], -v[1]);
}

static inline constexpr v2sf operator+(const v2sf & a, const v2sf & b)
{
	return v2sf((a[0] + b[0]), (a[1] + b[1]));
}

static inline constexpr v2sf operator-(const v2sf & a, const v2sf & b)
{
	return v2sf((a[0] - b[0]), (a[1] - b[1]));
}

static inline constexpr v2sf operator*(const v2sf & a, const v2sf & b)
{
	return v2sf((a[0] * b[0]), (a[1] * b[1]));
}

static inline constexpr v2sf operator/(const v2sf & a, const v2sf & b)
{
	return v2sf((a[0] / b[0]), (a[1] / b[1]));
}

static inline constexpr v2sf operator*(float s, const v2sf & v)
{
	return v2sf((s * v[0]), (s * v[1]));
}

static inline constexpr v2sf operator*(const v2sf & v, float s)
{
	return v2sf((v[0] * s), (v[1] * s));
}

static inline constexpr v2sf operator/(float s, const v2sf & v)
{
	return v2sf((s / v[0]), (s / v[1]));
}

static inline constexpr v2sf operator/(const v2sf & v, float s)
{
	return v2sf((v[0] / s), (v[1] / s));
}
#endif

template<typename T>
struct vector2
{
	union
	{
		Scalar1<v2sf, float, 0> x;
		Scalar1<v2sf, float, 1> y;

		Scalar2<v2sf, vector2<T>, 0, 0> xx;
		Scalar2<v2sf, vector2<T>, 0, 1> xy;
		Scalar2<v2sf, vector2<T>, 1, 0> yx;
		Scalar2<v2sf, vector2<T>, 1, 1> yy;

		v2sf native;
	};

	//
	// Constructors
	//

	explicit constexpr vector2(void) : native { 0, 0 }
	{
		// ...
	}

	explicit constexpr vector2(v2sf v) : native { v }
	{
		// ...
	}

	explicit constexpr vector2(T _x, T _y) : native { _x, _y }
	{
		// ...
	}

	//
	// Accessors
	//

	T & operator [] (unsigned int index)
	{
		return(native[index]);
	}

	constexpr T operator [] (unsigned int index) const
	{
		return(native[index]);
	}
};

#include "vec2.inl"
