#pragma once

#include "bvec2.h"

template<typename T>
struct vector2
{
	union
	{
		struct { T x, y; };

		//vector2<T> xy;

		float data [2];
	};

	explicit vector2 (void) : x(0), y(0) { }

	explicit vector2 (T _x, T _y) : x(_x), y(_y) { }

	T & operator [] (unsigned int index)
	{
		return(data[index]);
	}

	const T & operator [] (unsigned int index) const
	{
		return(data[index]);
	}
};

#include "vec2.inl"
