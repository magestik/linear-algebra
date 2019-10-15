#pragma once

/*
 * bvec3 implementation using bitset
 */

/**
 * check whether all elements of a boolean vector are true
 */
inline bool all(const bvec3 & x)
{
	return(x.bitset == 0x7);
}

/**
 * check whether any element of a boolean vector is true
 */
inline bool any(const bvec3 & x)
{
	return(x.bitset > 0);
}

/**
 * logically invert a boolean vector
 */
inline bvec3 operator!(const bvec3 & x)
{
	return(bvec3((~x.bitset) & 0x7));
}

