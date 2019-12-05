#pragma once

template<typename T, typename V, int I1, int I2>
struct Scalar2
{
	operator V() const
	{
		return V { v[I1], v[I2] };
	}

	Scalar2 & operator = (V _v)
	{
		v[I1] = _v.x;
		v[I2] = _v.y;
		return(*this);
	}

private:

	Scalar2() = delete;

	T v;
};
