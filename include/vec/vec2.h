#pragma once

#include "bvec2.h"

template<typename T>
struct vector2
{
	union
	{
		struct { T x, y; };

		T xy [2];
	};

	//
	// Constructors
	//

	explicit constexpr vector2(void) : xy { 0, 0 }
	{
		// ...
	}

	explicit constexpr vector2(T _x, T _y) : xy { _x, _y }
	{
		// ...
	}

	//
	// Accessors
	//

	T & operator [] (unsigned int index)
	{
		return(xy[index]);
	}

	constexpr T operator [] (unsigned int index) const
	{
		return(xy[index]);
	}
};

#include "vec2.inl"
