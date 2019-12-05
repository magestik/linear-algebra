#pragma once

template<typename T, typename V, int I1, int I2, int I3>
struct Scalar3
{
	operator V() const
	{
		return V { v[I1], v[I2], v[I3] };
	}

	Scalar3 & operator = (V _v)
	{
		v[I1] = _v.x;
		v[I2] = _v.y;
		v[I3] = _v.z;
		return(*this);
	}

private:

	Scalar3() = delete;

	T v;
};
