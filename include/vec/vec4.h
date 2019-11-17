#pragma once

#include "bvec4.h"

template<typename T>
struct vector4
{
	union
	{
		struct
		{
			T x;

			union
			{
				struct { T y, z, w; };
				struct { vector2<T> yz; };
				struct { vector3<T> yzw; };
			};
		};

		struct { vector2<T> xy; vector2<T> zw; };
		struct { vector3<T> xyz; };

		float xyzw [4];
	};

	//
	// Constructors
	//

	explicit constexpr vector4(void) : xyzw { 0, 0, 0, 0 }
	{
		// ...
	}

	explicit constexpr vector4(T _x, T _y, T _z, T _w) : xyzw { _x, _y, _z, _w }
	{
		// ...
	}

	explicit constexpr vector4(const vector3<T> & v, T _w) : xyzw { v.xyz[0], v.xyz[1], v.xyz[2], _w }
	{
		// ...
	}

	explicit constexpr vector4 (const vector2<T> & v, T _z, T _w) : xyzw { v.xy[0], v.xy[1], _z, _w }
	{
		// ...
	}

	explicit constexpr vector4 (const vector2<T> & v1, const vector2<T> & v2) : xyzw { v1.xy[0], v1.xy[1], v2.xy[0], v2.xy[1] }
	{
		// ...
	}

	//
	// Accessors
	//

	T & operator [] (unsigned int index)
	{
		return(xyzw[index]);
	}

	constexpr T operator [] (unsigned int index) const
	{
		return(xyzw[index]);
	}
};

#include "vec4.inl"
