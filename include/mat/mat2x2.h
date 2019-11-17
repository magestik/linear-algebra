#pragma once

#include "vec/vec2.h"

template<typename T>
struct matrix2x2
{
	constexpr matrix2x2 (void)
		: m11(0.0f), m12(0.0f),
		  m21(0.0f), m22(0.0f)
	{
		// ...
	}

	explicit constexpr matrix2x2 (T f)
		: m11(f), m12(0.0f),
		  m21(0.0f), m22(f)
	{
		// ...
	}

	explicit constexpr matrix2x2 (T a, T b, T c, T d)
		: m11(a), m12(b),
		  m21(c), m22(d)
	{
		// ...
	}

	explicit constexpr matrix2x2 (const vector2<T> & v1_, const vector2<T> & v2_)
		: m11(v1_.x), m12(v1_.y),
		  m21(v2_.x), m22(v2_.y)
	{
		// ...
	}

	inline vector2<T> & operator [] (unsigned int row)
	{
		return v[row];
	}

	inline const vector2<T> & operator [] (unsigned int row) const
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
			T m21;
			T m22;
		};
		struct
		{
			vector2<T> v1;
			vector2<T> v2;
		};
		vector2<T> v [2];
		T m [4];
	};
};

#include "mat2x2.inl"
