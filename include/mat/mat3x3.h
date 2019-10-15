#pragma once

template<typename T>
struct matrix3x3
{

	explicit matrix3x3 (void)
	{
		m[0] = 0.0f;
		m[1] = 0.0f;
		m[2] = 0.0f;
		m[3] = 0.0f;
		m[4] = 0.0f;
		m[5] = 0.0f;
		m[6] = 0.0f;
		m[7] = 0.0f;
		m[8] = 0.0f;
	}

	explicit matrix3x3 (T f)
	{
		m[0] = f;
		m[1] = 0.0f;
		m[2] = 0.0f;
		m[3] = 0.0f;
		m[4] = f;
		m[5] = 0.0f;
		m[6] = 0.0f;
		m[7] = 0.0f;
		m[8] = f;
	}

	explicit matrix3x3 (T a, T b, T c, T d, T e, T f, T g, T h, T i)
	{
		m[0] = a;
		m[1] = b;
		m[2] = c;
		m[3] = d;
		m[4] = e;
		m[5] = f;
		m[6] = g;
		m[7] = h;
		m[8] = i;
	}

	explicit matrix3x3 (const vector3<T> & v1, const vector3<T> & v2, const vector3<T> & v3)
	{
		m[0] = v1.x;
		m[1] = v1.y;
		m[2] = v1.z;
		m[3] = v2.x;
		m[4] = v2.y;
		m[5] = v2.z;
		m[6] = v3.x;
		m[7] = v3.y;
		m[8] = v3.z;
	}

	vector3<T> & operator [] (unsigned int row)
	{
		return *(((vector3<T>*)&m) + row);
	}

	const vector3<T> & operator [] (unsigned int row) const
	{
		return *(((vector3<T>*)&m) + row);
	}

private:

	T m [9]; // row-major

};

#include "mat3x3.inl"
