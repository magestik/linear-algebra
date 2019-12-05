#pragma once

#include "bvec3.h"
#include "scalar1.h"
#include "scalar2.h"
#include "scalar3.h"

#if defined(__clang__)
typedef float v3sf __attribute__((__vector_size__(12)));
#elif defined(__GNUC__) && 0
typedef float v3sf __attribute__((vector_size(12)));
#else
struct v3sf
{
	v3sf () = default;

	constexpr v3sf (float x_, float y_, float z_) : v { x_, y_, z_ }
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

	float v [3];
};

static inline constexpr v3sf operator - (const v3sf & v)
{
	return v3sf(-v[0], -v[1], -v[2]);
}

static inline constexpr v3sf operator+(const v3sf & a, const v3sf & b)
{
	return v3sf((a[0] + b[0]), (a[1] + b[1]), (a[2] + b[2]));
}

static inline constexpr v3sf operator-(const v3sf & a, const v3sf & b)
{
	return v3sf((a[0] - b[0]), (a[1] - b[1]), (a[2] - b[2]));
}

static inline v3sf operator*(const v3sf & a, const v3sf & b)
{
	return v3sf((a[0] * b[0]), (a[1] * b[1]), (a[2] * b[2]));
}

static inline constexpr v3sf operator/(const v3sf & a, const v3sf & b)
{
	return v3sf((a[0] / b[0]), (a[1] / b[1]), (a[2] / b[2]));
}

static inline constexpr v3sf operator*(float s, const v3sf & v)
{
	return v3sf((s * v[0]), (s * v[1]), (s * v[2]));
}

static inline constexpr v3sf operator*(const v3sf & v, float s)
{
	return v3sf((v[0] * s), (v[1] * s), (v[2] * s));
}

static inline constexpr v3sf operator/(float s, const v3sf & v)
{
	return v3sf((s / v[0]), (s / v[1]), (s / v[2]));
}

static inline constexpr v3sf operator/(const v3sf & v, float s)
{
	return v3sf((v[0] / s), (v[1] / s), (v[2] / s));
}
#endif

template<typename T>
struct vector3
{
	union
	{
		Scalar1<v3sf, float, 0> x;
		Scalar1<v3sf, float, 1> y;
		Scalar1<v3sf, float, 2> z;

		Scalar2<v3sf, vector2<T>, 0, 1> xx;
		Scalar2<v3sf, vector2<T>, 0, 1> xy;
		Scalar2<v3sf, vector2<T>, 0, 2> xz;
		Scalar2<v3sf, vector2<T>, 1, 0> yx;
		Scalar2<v3sf, vector2<T>, 1, 1> yy;
		Scalar2<v3sf, vector2<T>, 1, 2> yz;
		Scalar2<v3sf, vector2<T>, 2, 0> zx;
		Scalar2<v3sf, vector2<T>, 2, 1> zy;
		Scalar2<v3sf, vector2<T>, 2, 2> zz;

		Scalar3<v3sf, vector3<T>, 0, 0, 0> xxx;
		Scalar3<v3sf, vector3<T>, 0, 0, 1> xxy;
		Scalar3<v3sf, vector3<T>, 0, 0, 2> xxz;
		Scalar3<v3sf, vector3<T>, 0, 1, 0> xyx;
		Scalar3<v3sf, vector3<T>, 0, 1, 1> xyy;
		Scalar3<v3sf, vector3<T>, 0, 1, 2> xyz;
		Scalar3<v3sf, vector3<T>, 0, 2, 0> xzx;
		Scalar3<v3sf, vector3<T>, 0, 2, 1> xzy;
		Scalar3<v3sf, vector3<T>, 0, 2, 2> xzz;

		Scalar3<v3sf, vector3<T>, 1, 0, 0> yxx;
		Scalar3<v3sf, vector3<T>, 1, 0, 1> yxy;
		Scalar3<v3sf, vector3<T>, 1, 0, 2> yxz;
		Scalar3<v3sf, vector3<T>, 1, 1, 0> yyx;
		Scalar3<v3sf, vector3<T>, 1, 1, 1> yyy;
		Scalar3<v3sf, vector3<T>, 1, 1, 2> yyz;
		Scalar3<v3sf, vector3<T>, 1, 2, 0> yzx;
		Scalar3<v3sf, vector3<T>, 1, 2, 1> yzy;
		Scalar3<v3sf, vector3<T>, 1, 2, 2> yzz;

		Scalar3<v3sf, vector3<T>, 2, 0, 0> zxx;
		Scalar3<v3sf, vector3<T>, 2, 0, 1> zxy;
		Scalar3<v3sf, vector3<T>, 2, 0, 2> zxz;
		Scalar3<v3sf, vector3<T>, 2, 1, 0> zyx;
		Scalar3<v3sf, vector3<T>, 2, 1, 1> zyy;
		Scalar3<v3sf, vector3<T>, 2, 1, 2> zyz;
		Scalar3<v3sf, vector3<T>, 2, 2, 0> zzx;
		Scalar3<v3sf, vector3<T>, 2, 2, 1> zzy;
		Scalar3<v3sf, vector3<T>, 2, 2, 2> zzz;

		v3sf native;
	};

	//
	// Constructors
	//

	explicit constexpr vector3(void) : native { 0, 0, 0 }
	{
		// ...
	}

	explicit constexpr vector3(v3sf v) : native { v }
	{
		// ...
	}

	explicit constexpr vector3(T _x, T _y, T _z) : native { _x, _y, _z }
	{
		// ...
	}

	explicit constexpr vector3(const vector2<T> & v, T _z) : native { v.native[0], v.native[1], _z }
	{
		// ...
	}

	explicit constexpr vector3(T _x, const vector2<T> & v) : native { _x, v.native[0], v.native[1] }
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

#include "vec3.inl"
