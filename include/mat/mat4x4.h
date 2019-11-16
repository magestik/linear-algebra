#pragma once

#include "vec/vec4.h"

template<typename T>
struct matrix4x4
{
	constexpr matrix4x4 (void)
		: v1(0.0f, 0.0f, 0.0f, 0.0f), v2(0.0f, 0.0f, 0.0f, 0.0f),
		  v3(0.0f, 0.0f, 0.0f, 0.0f), v4(0.0f, 0.0f, 0.0f, 0.0f)
	{
		// ...
	}

	explicit constexpr matrix4x4 (T f)
		: v1(f, 0.0f, 0.0f, 0.0f), v2(0.0f, f, 0.0f, 0.0f),
		  v3(0.0f, 0.0f, f, 0.0f), v4(0.0f, 0.0f, 0.0f, f)
	{
		// ...
	}

	explicit constexpr matrix4x4 (T a, T b, T c, T d, T e, T f, T g, T h, T i, T j, T k, T l, T n, T o, T p, T q)
		: v1(a, b, c, d), v2(e, f, g, h),
		  v3(i, j, k, l), v4(n, o, p, q)
	{
		// ...
	}

	explicit constexpr matrix4x4 (const vector4<T> & v1_, const vector4<T> & v2_, const vector4<T> & v3_, const vector4<T> & v4_)
		: v1(v1_), v2(v2_), v3(v3_), v4(v4_)
	{
		// ...
	}

	vector4<T> & operator [] (unsigned int row)
	{
		return v[row];
	}

	const vector4<T> & operator [] (unsigned int row) const
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
			T m14;
			T m21;
			T m22;
			T m23;
			T m24;
			T m31;
			T m32;
			T m33;
			T m34;
			T m41;
			T m42;
			T m43;
			T m44;
		};
		struct
		{
			vector4<T> v1;
			vector4<T> v2;
			vector4<T> v3;
			vector4<T> v4;
		};
		vector4<T> v [4];
		T m [16]; // row-major
	};
};

#include "mat4x4.inl"
