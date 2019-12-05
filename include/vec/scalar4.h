#pragma once

template<typename T, typename V, int I1, int I2, int I3, int I4>
struct Scalar4
{
	operator V() const
	{
		return V { v[I1], v[I2], v[I3], v[I4] };
	}

	Scalar4 & operator = (V _v)
	{
		v[I1] = _v.x;
		v[I2] = _v.y;
		v[I3] = _v.z;
		v[I4] = _v.w;
		return(*this);
	}

private:

	Scalar4() = delete;

	T v;
};
