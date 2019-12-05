#pragma once

#include "bvec2.h"
#include "scalar1.h"
#include "scalar2.h"

template<typename T>
struct vector2
{
	union
	{
		Scalar1<v2sf, T, 0> x;
		Scalar1<v2sf, T, 1> y;

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
