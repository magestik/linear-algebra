#pragma once

#include "bvec2.h"

template<typename T>
union vector2
{
	struct { T x, y; };

	//
	// Constructors
	//

	explicit constexpr vector2 (void) : x(0), y(0)
	{
		// ...
	}

	explicit constexpr vector2 (T _x, T _y) : x(_x), y(_y)
	{
#if defined(_MSC_VER) && _MSC_VER == 1916
		x = _x;
		y = _y;
#endif
	}

	//
	// Accessors
	//

	T & operator [] (unsigned int index)
	{
		return(data[index]);
	}

	constexpr T operator [] (unsigned int index) const
	{
		return(data[index]);
	}

private:

	float data [2];
};

#include "vec2.inl"
