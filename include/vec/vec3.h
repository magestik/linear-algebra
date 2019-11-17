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

		T xyz [3];
	};

	//
	// Constructors
	//

	explicit constexpr vector3(void) : xyz { 0, 0, 0 }
	{
		// ...
	}

	explicit constexpr vector3(T _x, T _y, T _z) : xyz { _x, _y, _z }
	{
		// ...
	}

	explicit constexpr vector3 (const vector2<T> & v, T _z) : xyz { v.xy[0], v.xy[1], _z }
	{
		// ...
	}

	//
	// Accessors
	//

	T & operator [] (unsigned int index)
	{
		return(xyz[index]);
	}

	constexpr T operator [] (unsigned int index) const
	{
		return(xyz[index]);
	}
};

#include "vec3.inl"
