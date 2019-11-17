#pragma once

#include "bvec3.h"

template<typename T>
union vector3
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

	//
	// Constructors
	//

	explicit constexpr vector3 (void) : x(0), y(0), z(0)
	{
		// ...
	}

	explicit constexpr vector3 (T _x, T _y, T _z) : x(_x), y(_y), z(_z)
	{
#if defined(_MSC_VER) && _MSC_VER == 1916
		x = _x;
		y = _y;
		z = _z;
#endif
	}

	explicit constexpr vector3 (const vector2<T> & v, T _z) : x(v.x), y(v.y), z(_z)
	{
#if defined(_MSC_VER) && _MSC_VER == 1916
		x = v.x;
		y = v.y;
		z = _z;
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

	float data [3];
};

#include "vec3.inl"
