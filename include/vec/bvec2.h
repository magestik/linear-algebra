#pragma once

struct bvec2
{
	friend bool all(const bvec2 & x);
	friend bool any(const bvec2 & x);
	friend bvec2 operator!(const bvec2 & x);

public:

	explicit constexpr bvec2 (void) : bitset(0) { }

	explicit constexpr bvec2 (int v) : bitset(v & 0x3) { }

	explicit constexpr bvec2 (bool b1, bool b2) : bitset((b1 ? 0x1 : 0) | (b2 ? 0x2 : 0)) { }

	constexpr bool operator[] (int index) const
	{
		return (bitset & (1 << index)) != 0;
	}

private:

	char bitset;

};

#include "bvec2.inl"
