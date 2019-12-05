#pragma once

template<typename T, typename V, int I>
struct Scalar1
{
	operator V() const
	{
		return v[I];
	}

	Scalar1 & operator = (V s)
	{
		v[I] = s;
		return(*this);
	}

private:

	Scalar1() = delete;

	T v;
};
