#pragma once

/*
 * Vector3 template implementation using structure
 */

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector3<T> operator-(const vector3<T> & v)
{
   return(vector3<T>(-v.x, -v.y, -v.z));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector3<T> operator+(const vector3<T> & a, const vector3<T> & b)
{
	return(vector3<T>((a.x + b.x), (a.y + b.y), (a.z + b.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector3<T> operator-(const vector3<T> & a, const vector3<T> & b)
{
	return(vector3<T>((a.x - b.x), (a.y - b.y), (a.z - b.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector3<T> operator*(const vector3<T> & a, const vector3<T> & b)
{
	return(vector3<T>((a.x * b.x), (a.y * b.y), (a.z * b.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector3<T> operator/(const vector3<T> & a, const vector3<T> & b)
{
	return(vector3<T>((a.x / b.x), (a.y / b.y), (a.z / b.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector3<T> operator*(T s, const vector3<T> & v)
{
	return(vector3<T>((s * v.x), (s * v.y), (s * v.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector3<T> operator*(const vector3<T> & v, T s)
{
	return(vector3<T>((s * v.x), (s * v.y), (s * v.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector3<T> operator/(T s, const vector3<T> & v)
{
	return(vector3<T>((s / v.x), (s / v.y), (s / v.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector3<T> operator/(const vector3<T> & v, T s)
{
	return(vector3<T>((v.x / s), (v.y / s), (v.z / s)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec3 operator==(const vector3<T> & a, const vector3<T> & b)
{
	return(bvec3((a.x == b.x), (a.y == b.y), (a.z == b.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec3 operator>(const vector3<T> & a, const vector3<T> & b)
{
	return(bvec3((a.x > b.x), (a.y > b.y), (a.z > b.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec3 operator>=(const vector3<T> & a, const vector3<T> & b)
{
	return(bvec3((a.x >= b.x), (a.y >= b.y), (a.z >= b.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec3 operator<(const vector3<T> & a, const vector3<T> & b)
{
	return(bvec3((a.x < b.x), (a.y < b.y), (a.z < b.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec3 operator<=(const vector3<T> & a, const vector3<T> & b)
{
	return(bvec3((a.x <= b.x), (a.y <= b.y), (a.z <= b.z)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec3 operator!=(const vector3<T> & a, const vector3<T> & b)
{
	return(bvec3((a.x != b.x), (a.y != b.y), (a.z != b.z)));
}

/**
 * calculate the cross product of two vectors
 */
template<typename T>
static inline /*constexpr*/ vector3<T> cross(const vector3<T> & a, const vector3<T> & b)
{
	T x = (a.y * b.z) - (a.z * b.y);
	T y = (a.z * b.x) - (a.x * b.z);
	T z = (a.x * b.y) - (a.y * b.x);

	return(vector3<T>(x, y, z));
}

/**
 * calculate the length of a vector
 */
template<typename T>
static inline constexpr T length(const vector3<T> & v)
{
	return((T)sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z)));
}

/**
 * calculate the distance between two points
 */
template<typename T>
static inline constexpr T distance(const vector3<T> & a, const vector3<T> & b)
{
	return(length(b - a));
}

/**
 * calculate the dot product of two vectors
 */
template<typename T>
static inline constexpr T dot(const vector3<T> & a, const vector3<T> & b)
{
	return((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
}

/**
 * calculate the normalize product of two vectors
 */
template<typename T>
static inline /*constexpr*/ vector3<T> normalize(const vector3<T> & v)
{
	T len = length(v);

	if (!(bool)len)
	{
		return vector3<T>(0, 0, 0);
	}

	return(v / len);
}

/**
 * calculate the reflection direction for an incident vector
 */
template<typename T>
static inline constexpr vector3<T> reflect(const vector3<T> & I, const vector3<T> & N)
{
	return(I - 2 * dot(N, I) * N);
}

/**
 * calculate the refraction direction for an incident vector
 */
template<typename T>
static inline /*constexpr*/ vector3<T> refract(const vector3<T> & I, const vector3<T> & N, T eta)
{
	const T k = 1 - eta * eta * (1 - dot(N, I) * dot(N, I));

	if (0 > k)
	{
		return vector3<T>(0, 0, 0);
	}

	return(eta * I - (eta * dot(N, I) + sqrt(k)) * N);
}

/**
 * perform a component-wise equal-to comparison of two vectors
 */
template<typename T>
static constexpr bvec3 equal(const vector3<T> & a, const vector3<T> & b)
{
	return(a == b);
}

/**
 * perform a component-wise greater-than comparison of two vectors
 */
template<typename T>
static constexpr bvec3 greaterThan(const vector3<T> & a, const vector3<T> & b)
{
	return(a > b);
}

/**
 * perform a component-wise greater-than-or-equal comparison of two vectors
 */
template<typename T>
static constexpr bvec3 greaterThanEqual(const vector3<T> & a, const vector3<T> & b)
{
	return(a >= b);
}

/**
 * perform a component-wise less-than comparison of two vectors
 */
template<typename T>
static constexpr bvec3 lessThan(const vector3<T> & a, const vector3<T> & b)
{
	return(a < b);
}

/**
 * perform a component-wise less-than-or-equal comparison of two vectors
 */
template<typename T>
static constexpr bvec3 lessThanEqual(const vector3<T> & a, const vector3<T> & b)
{
	return(a <= b);
}

/**
 * perform a component-wise not-equal-to comparison of two vectors
 */
template<typename T>
static constexpr bvec3 notEqual(const vector3<T> & a, const vector3<T> & b)
{
	return(a != b);
}
