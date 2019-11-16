#pragma once

#include "bvec4.h"

template<typename T>
union vector4
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

	//
	// Constructors
	//

	explicit constexpr vector4 (void) : x(0), y(0), z(0), w(0) { }

	explicit constexpr vector4 (T _x, T _y, T _z, T _w) : x(_x), y(_y), z(_z), w(_w) { }

	explicit constexpr vector4 (const vector3<T> & v, T _w) : x(v.x), y(v.y), z(v.z), w(_w) { }

	explicit constexpr vector4 (const vector2<T> & v1, T _z, T _w) : x(v1.x), y(v1.y), z(_z), w(_w) { }

	explicit constexpr vector4 (const vector2<T> & v1, const vector2<T> & v2) : x(v1.x), y(v1.y), z(v2.x), w(v2.y) { }

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

	float data [4];
};

#include "vec4.inl"
