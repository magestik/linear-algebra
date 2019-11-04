#pragma once

#include "bvec3.h"

template<typename T>
struct vector3
{
	union
	{
		struct
		{
			T x;

			union
			{
				struct { T y, z; };
				struct { vector2<T> yz; };
			};
		};

		struct { vector2<T> xy; };

		float data [3];
	};

	explicit constexpr vector3 (void) : x(0), y(0), z(0) { }

	explicit constexpr vector3 (T _x, T _y, T _z) : x(_x), y(_y), z(_z) { }

	explicit constexpr vector3 (const vector2<T> & v, T _z) : x(v.x), y(v.y), z(_z) { }

	T & operator [] (unsigned int index)
	{
		return(data[index]);
	}

	const T & operator [] (unsigned int index) const
	{
		return(data[index]);
	}
};

#include "vec3.inl"
