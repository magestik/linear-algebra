#pragma once

/*
 * bvec2 implementation using bitset
 */

/**
 * check whether all elements of a boolean vector are true
 */
inline bool all(const bvec2 & x)
{
	return(x.bitset == 0x3);
}

/**
 * check whether any element of a boolean vector is true
 */
inline bool any(const bvec2 & x)
{
	return(x.bitset > 0);
}

/**
 * logically invert a boolean vector
 */
inline bvec2 operator!(const bvec2 & x)
{
	return(bvec2((~x.bitset) & 0x3));
}

