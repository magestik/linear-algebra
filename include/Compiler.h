#pragma once

#if defined(__clang__)
typedef int v2si __attribute__((__vector_size__(8)));
typedef unsigned int v2ui __attribute__((__vector_size__(8)));
typedef float v2sf __attribute__((__vector_size__(8)));
typedef double v2df __attribute__((__vector_size__(16)));
#elif defined(__GNUC__)
typedef int v2si __attribute__((vector_size(8)));
typedef unsigned int v2ui __attribute__((vector_size(8)));
typedef float v2sf __attribute__((vector_size(8)));
typedef double v2df __attribute__((vector_size(16)));
#else
struct v2sf
{
        v2sf () = default;

	constexpr v2sf (float x_, float y_) : v { x_, y_ }
	{

	}

	float & operator [](unsigned int index)
	{
	        return v[index];
	}

	constexpr float operator [](unsigned int index) const
	{
	        return v[index];
	}

private:

	float v [2];
};

static inline constexpr v2sf operator - (const v2sf & v)
{
        return v2sf(-v[0], -v[1]);
}

static inline constexpr v2sf operator+(const v2sf & a, const v2sf & b)
{
        return v2sf((a[0] + b[0]), (a[1] + b[1]));
}

static inline constexpr v2sf operator-(const v2sf & a, const v2sf & b)
{
        return v2sf((a[0] - b[0]), (a[1] - b[1]));
}

static inline constexpr v2sf operator*(const v2sf & a, const v2sf & b)
{
        return v2sf((a[0] * b[0]), (a[1] * b[1]));
}

static inline constexpr v2sf operator/(const v2sf & a, const v2sf & b)
{
        return v2sf((a[0] / b[0]), (a[1] / b[1]));
}

static inline constexpr v2sf operator*(float s, const v2sf & v)
{
        return v2sf((s * v[0]), (s * v[1]));
}

static inline constexpr v2sf operator*(const v2sf & v, float s)
{
        return v2sf((v[0] * s), (v[1] * s));
}

static inline constexpr v2sf operator/(float s, const v2sf & v)
{
        return v2sf((s / v[0]), (s / v[1]));
}

static inline constexpr v2sf operator/(const v2sf & v, float s)
{
        return v2sf((v[0] / s), (v[1] / s));
}
#endif


#if defined(__clang__) && 0
typedef int v3si __attribute__((__vector_size__(12)));
typedef unsigned int v3ui __attribute__((__vector_size__(12)));
typedef float v3sf __attribute__((__vector_size__(12)));
typedef double v3df __attribute__((__vector_size__(24)));
#elif defined(__GNUC__) && 0
typedef int v3si __attribute__((vector_size(12)));
typedef unsigned int v3ui __attribute__((vector_size(12)));
typedef float v3sf __attribute__((vector_size(12)));
typedef double v3df __attribute__((vector_size(24)));
#else
struct v3sf
{
        v3sf () = default;

	constexpr v3sf (float x_, float y_, float z_) : v { x_, y_, z_ }
	{

	}

	float & operator [](unsigned int index)
	{
	        return v[index];
	}

	constexpr float operator [](unsigned int index) const
	{
	        return v[index];
	}

private:

	float v [3];
};

static inline constexpr v3sf operator - (const v3sf & v)
{
        return v3sf(-v[0], -v[1], -v[2]);
}

static inline constexpr v3sf operator+(const v3sf & a, const v3sf & b)
{
        return v3sf((a[0] + b[0]), (a[1] + b[1]), (a[2] + b[2]));
}

static inline constexpr v3sf operator-(const v3sf & a, const v3sf & b)
{
        return v3sf((a[0] - b[0]), (a[1] - b[1]), (a[2] - b[2]));
}

static inline v3sf operator*(const v3sf & a, const v3sf & b)
{
        return v3sf((a[0] * b[0]), (a[1] * b[1]), (a[2] * b[2]));
}

static inline constexpr v3sf operator/(const v3sf & a, const v3sf & b)
{
        return v3sf((a[0] / b[0]), (a[1] / b[1]), (a[2] / b[2]));
}

static inline constexpr v3sf operator*(float s, const v3sf & v)
{
        return v3sf((s * v[0]), (s * v[1]), (s * v[2]));
}

static inline constexpr v3sf operator*(const v3sf & v, float s)
{
        return v3sf((v[0] * s), (v[1] * s), (v[2] * s));
}

static inline constexpr v3sf operator/(float s, const v3sf & v)
{
        return v3sf((s / v[0]), (s / v[1]), (s / v[2]));
}

static inline constexpr v3sf operator/(const v3sf & v, float s)
{
        return v3sf((v[0] / s), (v[1] / s), (v[2] / s));
}
#endif

#if defined(__clang__)
typedef int v4si __attribute__((__vector_size__(16)));
typedef unsigned int v4su __attribute__((__vector_size__(16)));
typedef float v4sf __attribute__((__vector_size__(16)));
typedef double v4df __attribute__((__vector_size__(32)));
#elif defined(__GNUC__)
typedef int v4si __attribute__((vector_size(16)));
typedef unsigned int v4su __attribute__((vector_size(16)));
typedef float v4sf __attribute__((vector_size(16)));
typedef double v4df __attribute__((vector_size(32)));
#else
struct v4sf
{
        v4sf () = default;

	constexpr v4sf (float x_, float y_, float z_, float w_) : v { x_, y_, z_, w_ }
	{

	}

	float & operator [](unsigned int index)
	{
	        return v[index];
	}

	constexpr float operator [](unsigned int index) const
	{
	        return v[index];
	}

private:

	float v [4];
};

static inline constexpr v4sf operator - (const v4sf & v)
{
        return v4sf(-v[0], -v[1], -v[2], -v[3]);
}

static inline constexpr v4sf operator+(const v4sf & a, const v4sf & b)
{
        return v4sf((a[0] + b[0]), (a[1] + b[1]), (a[2] + b[2]), (a[3] + b[3]));
}

static inline constexpr v4sf operator-(const v4sf & a, const v4sf & b)
{
        return v4sf((a[0] - b[0]), (a[1] - b[1]), (a[2] - b[2]), (a[3] - b[3]));
}

static inline constexpr v4sf operator*(const v4sf & a, const v4sf & b)
{
        return v4sf((a[0] * b[0]), (a[1] * b[1]), (a[2] * b[2]), (a[3] * b[3]));
}

static inline constexpr v4sf operator/(const v4sf & a, const v4sf & b)
{
        return v4sf((a[0] / b[0]), (a[1] / b[1]), (a[2] / b[2]), (a[3] / b[3]));
}

static inline constexpr v4sf operator*(float s, const v4sf & v)
{
        return v4sf((s * v[0]), (s * v[1]), (s * v[2]), (s * v[3]));
}

static inline constexpr v4sf operator*(const v4sf & v, float s)
{
        return v4sf((v[0] * s), (v[1] * s), (v[2] * s), (v[3] * s));
}

static inline constexpr v4sf operator/(float s, const v4sf & v)
{
        return v4sf((s / v[0]), (s / v[1]), (s / v[2]), (s / v[3]));
}

static inline constexpr v4sf operator/(const v4sf & v, float s)
{
        return v4sf((v[0] / s), (v[1] / s), (v[2] / s), (v[3] / s));
}
#endif
