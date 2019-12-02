#pragma once

/*
 * Vector2 template implementation using structure
 */

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector2<T> operator-(const vector2<T> & v)
{
   return(vector2<T>(-v.x, -v.y));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector2<T> operator+(const vector2<T> & a, const vector2<T> & b)
{
	return(vector2<T>((a.x + b.x), (a.y + b.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector2<T> operator-(const vector2<T> & a, const vector2<T> & b)
{
	return(vector2<T>((a.x - b.x), (a.y - b.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector2<T> operator*(const vector2<T> & a, const vector2<T> & b)
{
	return(vector2<T>((a.x * b.x), (a.y * b.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector2<T> operator/(const vector2<T> & a, const vector2<T> & b)
{
	return(vector2<T>((a.x / b.x), (a.y / b.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector2<T> operator*(T s, const vector2<T> & v)
{
	return(vector2<T>((s * v.x), (s * v.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector2<T> operator*(const vector2<T> & v, T s)
{
	return(vector2<T>((v.x * s), (v.y * s)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector2<T> operator/(T s, const vector2<T> & v)
{
	return(vector2<T>((s / v.x), (s / v.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr vector2<T> operator/(const vector2<T> & v, T s)
{
	return(vector2<T>((v.x / s), (v.y / s)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec2 operator==(const vector2<T> & a, const vector2<T> & b)
{
	return(bvec2((a.x == b.x), (a.y == b.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec2 operator>(const vector2<T> & a, const vector2<T> & b)
{
	return(bvec2((a.x > b.x), (a.y > b.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec2 operator>=(const vector2<T> & a, const vector2<T> & b)
{
	return(bvec2((a.x >= b.x), (a.y >= b.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec2 operator<(const vector2<T> & a, const vector2<T> & b)
{
	return(bvec2((a.x < b.x), (a.y < b.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec2 operator<=(const vector2<T> & a, const vector2<T> & b)
{
	return(bvec2((a.x <= b.x), (a.y <= b.y)));
}

/**
 * TODO comment
 */
template<typename T>
static inline constexpr bvec2 operator!=(const vector2<T> & a, const vector2<T> & b)
{
	return(bvec2((a.x != b.x), (a.y != b.y)));
}

/**
 * calculate the length of a vector
 */
template<typename T>
static inline constexpr T length(const vector2<T> & v)
{
	return((T)sqrt((v.x * v.x) + (v.y * v.y)));
}

/**
 * calculate the distance between two points
 */
template<typename T>
static inline constexpr T distance(const vector2<T> & a, const vector2<T> & b)
{
	return(length(b - a));
}

/**
 * calculate the dot product of two vectors
 */
template<typename T>
static inline constexpr T dot(const vector2<T> & a, const vector2<T> & b)
{
	return((a.x * b.x) + (a.y * b.y));
}

/**
 * calculate the normalize product of two vectors
 */
template<typename T>
static inline /*constexpr*/ vector2<T> normalize(const vector2<T> & v)
{
	T len = length(v);

	if (len == 0.0f)
	{
		return vector2<T>(0, 0);
	}

	return(v / len);
}

/**
 * calculate the reflection direction for an incident vector
 */
template<typename T>
static inline constexpr vector2<T> reflect(const vector2<T> & I, const vector2<T> & N)
{
	return(I - 2 * dot(N, I) * N);
}

/**
 * calculate the refraction direction for an incident vector
 */
template<typename T>
static inline /*constexpr*/ vector2<T> refract(const vector2<T> & I, const vector2<T> & N, T eta)
{
	const T k = 1 - eta * eta * (1 - dot(N, I) * dot(N, I));

	if (0 > k)
	{
		return vector2<T>(0, 0);
	}

	return(eta * I - (eta * dot(N, I) + sqrt(k)) * N);
}

/**
 *
 */
template<typename T>
static inline T atan(const vector2<T> & v)
{
	return atan2(v.y, v.x);
}

/**
 * perform a component-wise equal-to comparison of two vectors
 */
template<typename T>
static bvec2 equal(const vector2<T> & a, const vector2<T> & b)
{
	return(a == b);
}

/**
 * perform a component-wise greater-than comparison of two vectors
 */
template<typename T>
static bvec2 greaterThan(const vector2<T> & a, const vector2<T> & b)
{
	return(a > b);
}

/**
 * perform a component-wise greater-than-or-equal comparison of two vectors
 */
template<typename T>
static bvec2 greaterThanEqual(const vector2<T> & a, const vector2<T> & b)
{
	return(a >= b);
}

/**
 * perform a component-wise less-than comparison of two vectors
 */
template<typename T>
static bvec2 lessThan(const vector2<T> & a, const vector2<T> & b)
{
	return(a < b);
}

/**
 * perform a component-wise less-than-or-equal comparison of two vectors
 */
template<typename T>
static bvec2 lessThanEqual(const vector2<T> & a, const vector2<T> & b)
{
	return(a <= b);
}

/**
 * perform a component-wise not-equal-to comparison of two vectors
 */
template<typename T>
static bvec2 notEqual(const vector2<T> & a, const vector2<T> & b)
{
	return(a != b);
}
