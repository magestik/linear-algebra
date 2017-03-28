/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3.0 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.
 */

#pragma once

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
				struct { vector2<T> yz; /* vector2<T> zw; */ };
				struct { vector3<T> yzw; /* T w; */ };
			};
		};

		struct { vector2<T> xy; vector2<T> zw; };
		struct { vector3<T> xyz; /* T w; */ };

		//vector4<T> xyzw;

		float data [4];
	};

	explicit vector4 (void) : x(0), y(0), z(0), w(0) { }

	explicit vector4 (T _x, T _y, T _z, T _w) : x(_x), y(_y), z(_z), w(_w) { }

	explicit vector4 (const vector3<T> & v, T _w) : x(v.x), y(v.y), z(v.z), w(_w) { }

	explicit vector4 (const vector2<T> & v1, T _z, T _w) : x(v1.x), y(v1.y), z(_z), w(_w) { }

	explicit vector4 (const vector2<T> & v1, const vector2<T> & v2) : x(v1.x), y(v1.y), z(v2.x), w(v2.y) { }

	T & operator [] (unsigned int index)
	{
		return(data[index]);
	}

	const T & operator [] (unsigned int index) const
	{
		return(data[index]);
	}
};

#include "vec4.inl"
