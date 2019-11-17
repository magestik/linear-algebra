#pragma once

#include "vec/vec3.h"

template<typename T>
struct matrix3x3
{
	constexpr matrix3x3 (void)
		: m11(0.0f), m12(0.0f), m13(0.0f),
		  m21(0.0f), m22(0.0f), m23(0.0f),
		  m31(0.0f), m32(0.0f), m33(0.0f)
	{
		// ...
	}

	explicit constexpr matrix3x3 (T f)
		: m11(f), m12(0.0f), m13(0.0f),
		  m21(0.0f), m22(f), m23(0.0f),
		  m31(0.0f), m32(0.0f), m33(f)
	{
		// ...
	}

	explicit constexpr matrix3x3 (T a, T b, T c, T d, T e, T f, T g, T h, T i)
		: m11(a), m12(b), m13(c),
		  m21(d), m22(e), m23(f),
		  m31(g), m32(h), m33(i)
	{
		// ...
	}

	explicit constexpr matrix3x3 (const vector3<T> & v1_, const vector3<T> & v2_, const vector3<T> & v3_)
		: m11(v1_.x), m12(v1_.y), m13(v1_.z),
		  m21(v2_.x), m22(v2_.y), m23(v2_.z),
		  m31(v3_.x), m32(v3_.y), m33(v3_.z)
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

	union // row-major
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
		T m [9];
	};
};

#include "mat3x3.inl"
