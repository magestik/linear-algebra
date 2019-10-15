#pragma once

struct bvec4
{
	friend bool all(const bvec4 & x);
	friend bool any(const bvec4 & x);
	friend bvec4 operator!(const bvec4 & x);

public:

	bvec4 (void) : bitset(0) { }

	bvec4 (int v) : bitset(v & 0xF) { }

	bvec4 (bool b1, bool b2, bool b3, bool b4)
	{
		bitset = ((b1 ? 0x1 : 0) | (b2 ? 0x2 : 0) | (b3 ? 0x4 : 0) | (b4 ? 0x8 : 0));
	}

	bool operator[] (int index)
	{
		return bitset & (1 << index);
	}

private:

	char bitset;
};

#include "bvec4.inl"
