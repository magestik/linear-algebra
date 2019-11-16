#pragma once

#include "vec/vec3.h"

template<typename T>
struct matrix3x3
{
	constexpr matrix3x3 (void)
		: v1(0.0f, 0.0f, 0.0f), v2(0.0f, 0.0f, 0.0f), v3(0.0f, 0.0f, 0.0f)
	{
		// ...
	}

	explicit constexpr matrix3x3 (T f)
		: v1(f, 0.0f, 0.0f), v2(0.0f, f, 0.0f), v3(0.0f, 0.0f, f)
	{
		// ...
	}

	explicit constexpr matrix3x3 (T a, T b, T c, T d, T e, T f, T g, T h, T i)
		: v1(a, b, c), v2(d, e, f), v3(g, h, i)
	{
		// ...
	}

	explicit constexpr matrix3x3 (const vector3<T> & v1_, const vector3<T> & v2_, const vector3<T> & v3_)
		: v1(v1_), v2(v2_), v3(v3_)
	{
		// ...
	}

	vector3<T> & operator [] (unsigned int row)
	{
		return v[row];
	}

	const vector3<T> & operator [] (unsigned int row) const
	{
		return v[row];
	}

private:

	union
	{
		struct
		{
			T m11;
			T m12;
			T m13;
			T m21;
			T m22;
			T m23;
			T m31;
			T m32;
			T m33;
		};
		struct
		{
			vector3<T> v1;
			vector3<T> v2;
			vector3<T> v3;
		};
		vector3<T> v [3];
		T m [9]; // row-major
	};
};

#include "mat3x3.inl"
