#pragma once

#include "vec/vec4.h"

template<typename T>
struct matrix4x4
{
	constexpr matrix4x4 (void)
		: m11(0.0f), m12(0.0f), m13(0.0f), m14(0.0f),
		  m21(0.0f), m22(0.0f), m23(0.0f), m24(0.0f),
		  m31(0.0f), m32(0.0f), m33(0.0f), m34(0.0f),
		  m41(0.0f), m42(0.0f), m43(0.0f), m44(0.0f)
	{
		// ...
	}

	explicit constexpr matrix4x4 (T f)
		: m11(f), m12(0.0f), m13(0.0f), m14(0.0f),
		  m21(0.0f), m22(f), m23(0.0f), m24(0.0f),
		  m31(0.0f), m32(0.0f), m33(f), m34(0.0f),
		  m41(0.0f), m42(0.0f), m43(0.0f), m44(f)
	{
		// ...
	}

	explicit constexpr matrix4x4 (T a, T b, T c, T d, T e, T f, T g, T h, T i, T j, T k, T l, T n, T o, T p, T q)
		: m11(a), m12(b), m13(c), m14(d),
		  m21(e), m22(f), m23(g), m24(h),
		  m31(i), m32(j), m33(k), m34(l),
		  m41(n), m42(o), m43(p), m44(q)
	{
		// ...
	}

	explicit constexpr matrix4x4 (const vector4<T> & v1_, const vector4<T> & v2_, const vector4<T> & v3_, const vector4<T> & v4_)
		: m11(v1_.x), m12(v1_.y), m13(v1_.z), m14(v1_.w),
		  m21(v2_.x), m22(v2_.y), m23(v2_.z), m24(v2_.w),
		  m31(v3_.x), m32(v3_.y), m33(v3_.z), m34(v3_.w),
		  m41(v4_.x), m42(v4_.y), m43(v4_.z), m44(v4_.w)
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

	union // row-major
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
		T m [16];
	};
};

#include "mat4x4.inl"
