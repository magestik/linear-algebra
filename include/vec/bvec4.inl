#pragma once

/*
 * bvec4 implementation using bitset
 */

/**
 * check whether all elements of a boolean vector are true
 */
inline bool all(const bvec4 & x)
{
	return(x.bitset == 0xF);
}

/**
 * check whether any element of a boolean vector is true
 */
inline bool any(const bvec4 & x)
{
	//return (x > 0);
	return(x.bitset > 0);
}

/**
 * logically invert a boolean vector
 */
inline bvec4 operator!(const bvec4 & x)
{
	return(bvec4((~x.bitset) & 0xF));
}
