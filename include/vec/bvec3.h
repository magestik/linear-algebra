#pragma once

struct bvec3
{
	friend bool all(const bvec3 & x);
	friend bool any(const bvec3 & x);
	friend bvec3 operator!(const bvec3 & x);

public:

	bvec3 (void) : bitset(0) { }

	bvec3 (int v) : bitset(v & 0x7) { }

	bvec3 (bool b1, bool b2, bool b3)
	{
		bitset = ((b1 ? 0x1 : 0) | (b2 ? 0x2 : 0) | (b3 ? 0x4 : 0));
	}

	bool operator[] (int index)
	{
		return bitset & (1 << index);
	}

private:

	char bitset;

};

#include "bvec3.inl"
