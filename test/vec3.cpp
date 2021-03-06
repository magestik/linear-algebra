#include "gtest/gtest.h"

#include "Vector.h"

#include "helpers.h"

static_assert(sizeof(vec3) == 3*sizeof(float), "vec3 bad size");

static const vec3 values_const [128];

#if !defined(_MSC_VER) || _MSC_VER >= 1920 // compiler bug
static constexpr vec3 values_constexpr [128];
#endif

/**
 * test_vec3_static_init
 */
TEST(vec3, static_init)
{
	for (int i = 0; i < 128; ++i)
	{
		EXPECT_FLOAT_EQ(values_const[i].x, 0.0f);
		EXPECT_FLOAT_EQ(values_const[i].y, 0.0f);
		EXPECT_FLOAT_EQ(values_const[i].z, 0.0f);
	}
}

/**
 * test_vec3_static_init_constexpr
 */
#if !defined(_MSC_VER) || _MSC_VER >= 1920 // compiler bug
TEST(vec3, static_init_constexpr)
{
	for (int i = 0; i < 128; ++i)
	{
		EXPECT_FLOAT_EQ(values_constexpr[i].x, 0.0f);
		EXPECT_FLOAT_EQ(values_constexpr[i].y, 0.0f);
		EXPECT_FLOAT_EQ(values_constexpr[i].z, 0.0f);
	}
}
#endif

/**
 * test_vec3_constructors
 */
TEST(vec3, constructors)
{
	const vec3 a;
	VEC3_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);

	const vec3 b(0.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(b.x, 0.0f);
	EXPECT_FLOAT_EQ(b.y, 0.0f);
	EXPECT_FLOAT_EQ(b.z, 0.0f);

	const vec3 c(1.0f, 2.0f, 3.0f);
	VEC3_BASIC_CHECKS(c);
	EXPECT_FLOAT_EQ(c.x, 1.0f);
	EXPECT_FLOAT_EQ(c.y, 2.0f);
	EXPECT_FLOAT_EQ(c.z, 3.0f);

	const vec2 d(4.0f, 5.0f);
	VEC2_BASIC_CHECKS(d);
	EXPECT_FLOAT_EQ(d.x, 4.0f);
	EXPECT_FLOAT_EQ(d.y, 5.0f);

	const vec3 e(d, 6.0f);
	VEC3_BASIC_CHECKS(e);
	EXPECT_FLOAT_EQ(e.x, d.x);
	EXPECT_FLOAT_EQ(e.y, d.y);
	EXPECT_FLOAT_EQ(e.z, 6.0f);
}

/**
 * test_vec3_constructors_constexpr
 */
TEST(vec3, constructors_constexpr)
{
	constexpr vec3 a;
	VEC3_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);

	constexpr vec3 b(0.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(b.x, 0.0f);
	EXPECT_FLOAT_EQ(b.y, 0.0f);
	EXPECT_FLOAT_EQ(b.z, 0.0f);

	constexpr vec3 c(1.0f, 2.0f, 3.0f);
	VEC3_BASIC_CHECKS(c);
	EXPECT_FLOAT_EQ(c.x, 1.0f);
	EXPECT_FLOAT_EQ(c.y, 2.0f);
	EXPECT_FLOAT_EQ(c.z, 3.0f);

	constexpr vec2 d(4.0f, 5.0f);
	VEC2_BASIC_CHECKS(d);
	EXPECT_FLOAT_EQ(d.x, 4.0f);
	EXPECT_FLOAT_EQ(d.y, 5.0f);

	constexpr vec3 e(d, 6.0f);
	VEC3_BASIC_CHECKS(e);
	EXPECT_FLOAT_EQ(e.x, d.x);
	EXPECT_FLOAT_EQ(e.y, d.y);
	EXPECT_FLOAT_EQ(e.z, 6.0f);
}

/**
 * test_vec3_assignement
 */
TEST(vec3, assignement)
{
	vec3 a = vec3(1.0f, 2.0f, 3.0f);
	VEC2_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 1.0f);
	EXPECT_FLOAT_EQ(a.y, 2.0f);
	EXPECT_FLOAT_EQ(a.z, 3.0f);

	a = vec3(4.0f, 5.0f, 6.0f);
	VEC2_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 4.0f);
	EXPECT_FLOAT_EQ(a.y, 5.0f);
	EXPECT_FLOAT_EQ(a.z, 6.0f);
}

/**
 * test_vec3_members_assignement
 */
TEST(vec3, members_assignement)
{
	vec3 a = vec3(1.0f, 2.0f, 3.0f);
	VEC2_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 1.0f);
	EXPECT_FLOAT_EQ(a.y, 2.0f);
	EXPECT_FLOAT_EQ(a.z, 3.0f);

	a.x = 4.0f;
	a.y = 5.0f;
	a.z = 6.0f;
	VEC2_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 4.0f);
	EXPECT_FLOAT_EQ(a.y, 5.0f);
	EXPECT_FLOAT_EQ(a.z, 6.0f);

#if 0
	a.xyz = vec3(7.0f, 8.0f, 9.0f);
	VEC2_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 7.0f);
	EXPECT_FLOAT_EQ(a.y, 8.0f);
	EXPECT_FLOAT_EQ(a.z, 9.0f);
#endif
}

/**
 * test_vec3_negation
 */
TEST(vec3, negation)
{
	const vec3 a = - vec3(0.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);

	const vec3 b = - vec3(1.0f, 2.0f, 3.0f);
	VEC3_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(b.x, -1.0f);
	EXPECT_FLOAT_EQ(b.y, -2.0f);
	EXPECT_FLOAT_EQ(b.z, -3.0f);

	const vec3 c = -b;
	VEC3_BASIC_CHECKS(c);
	EXPECT_FLOAT_EQ(c.x, -b.x);
	EXPECT_FLOAT_EQ(c.y, -b.y);
	EXPECT_FLOAT_EQ(c.z, -b.z);
}

/**
 * test_vec3_addition
 */
TEST(vec3, addition)
{
	const vec3 a = vec3(0.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(a);
	const vec3 b = a + vec3(1.0f, 2.0f, 3.0f);
	VEC3_BASIC_CHECKS(b);
	const vec3 c = b + b;
	VEC3_BASIC_CHECKS(c);

	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);

	EXPECT_FLOAT_EQ(b.x, a.x+1.0f);
	EXPECT_FLOAT_EQ(b.y, a.y+2.0f);
	EXPECT_FLOAT_EQ(b.z, a.z+3.0f);

	EXPECT_FLOAT_EQ(c.x, b.x+b.x);
	EXPECT_FLOAT_EQ(c.y, b.y+b.y);
	EXPECT_FLOAT_EQ(c.z, b.z+b.z);
}

/**
 * test_vec3_subtraction
 */
TEST(vec3, subtraction)
{
	const vec3 a = vec3(0.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(a);
	const vec3 b = a - vec3(1.0f, 2.0f, 3.0f);
	VEC3_BASIC_CHECKS(b);
	const vec3 c = b - b;
	VEC3_BASIC_CHECKS(c);

	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);

	EXPECT_FLOAT_EQ(b.x, a.x-1.0f);
	EXPECT_FLOAT_EQ(b.y, a.y-2.0f);
	EXPECT_FLOAT_EQ(b.z, a.z-3.0f);

	EXPECT_FLOAT_EQ(c.x, b.x-b.x);
	EXPECT_FLOAT_EQ(c.y, b.y-b.y);
	EXPECT_FLOAT_EQ(c.z, b.z-b.z);
}

/**
 * test_vec3_multiplication
 */
TEST(vec3, multiplication)
{
	const vec3 a = vec3(1.0f, 1.0f, 1.0f);
	VEC3_BASIC_CHECKS(a);
	const vec3 b = a * vec3(1.0f, 2.0f, 3.0f);
	VEC3_BASIC_CHECKS(b);
	const vec3 c = b * b;
	VEC3_BASIC_CHECKS(c);

	EXPECT_FLOAT_EQ(a.x, 1.0f);
	EXPECT_FLOAT_EQ(a.y, 1.0f);
	EXPECT_FLOAT_EQ(a.z, 1.0f);

	EXPECT_FLOAT_EQ(b.x, a.x*1.0f);
	EXPECT_FLOAT_EQ(b.y, a.y*2.0f);
	EXPECT_FLOAT_EQ(b.z, a.z*3.0f);

	EXPECT_FLOAT_EQ(c.x, b.x*b.x);
	EXPECT_FLOAT_EQ(c.y, b.y*b.y);
	EXPECT_FLOAT_EQ(c.z, b.z*b.z);
}

/**
 * test_vec3_multiplication
 */
TEST(vec3, division)
{
	const vec3 a = vec3(1.0f, 1.0f, 1.0f);
	VEC3_BASIC_CHECKS(a);
	const vec3 b = a / vec3(1.0f, 2.0f, 3.0f);
	VEC3_BASIC_CHECKS(b);
	const vec3 c = b / b;
	VEC3_BASIC_CHECKS(c);

	EXPECT_FLOAT_EQ(a.x, 1.0f);
	EXPECT_FLOAT_EQ(a.y, 1.0f);
	EXPECT_FLOAT_EQ(a.z, 1.0f);

	EXPECT_FLOAT_EQ(b.x, a.x/1.0f);
	EXPECT_FLOAT_EQ(b.y, a.y/2.0f);
	EXPECT_FLOAT_EQ(b.z, a.z/3.0f);

	EXPECT_FLOAT_EQ(c.x, b.x/b.x);
	EXPECT_FLOAT_EQ(c.y, b.y/b.y);
	EXPECT_FLOAT_EQ(c.z, b.z/b.z);
}

/**
 * test_vec3_multiplication_scalar
 */
TEST(vec3, multiplication_scalar)
{
	const vec3 a = 4.0f * vec3(1.0f, 2.0f, 3.0f);
	VEC3_BASIC_CHECKS(a);
	const vec3 b = vec3(5.0f, 6.0f, 7.0f) * 8.0f;
	VEC3_BASIC_CHECKS(b);

	EXPECT_FLOAT_EQ(a.x, 4.0f*1.0f);
	EXPECT_FLOAT_EQ(a.y, 4.0f*2.0f);
	EXPECT_FLOAT_EQ(a.z, 4.0f*3.0f);

	EXPECT_FLOAT_EQ(b.x, 5.0f*8.0f);
	EXPECT_FLOAT_EQ(b.y, 6.0f*8.0f);
	EXPECT_FLOAT_EQ(b.z, 7.0f*8.0f);
}

/**
 * test_vec3_division_scalar
 */
TEST(vec3, division_scalar)
{
	const vec3 a = 4.0f / vec3(1.0f, 2.0f, 3.0f);
	VEC3_BASIC_CHECKS(a);
	const vec3 b = vec3(5.0f, 6.0f, 7.0f) / 8.0f;
	VEC3_BASIC_CHECKS(b);

	EXPECT_FLOAT_EQ(a.x, 4.0f/1.0f);
	EXPECT_FLOAT_EQ(a.y, 4.0f/2.0f);
	EXPECT_FLOAT_EQ(a.z, 4.0f/3.0f);

	EXPECT_FLOAT_EQ(b.x, 5.0f/8.0f);
	EXPECT_FLOAT_EQ(b.y, 6.0f/8.0f);
	EXPECT_FLOAT_EQ(b.z, 7.0f/8.0f);
}

/**
 * test_vec3_cross
 */
TEST(vec3, cross)
{
	const vec3 a(1.0f, 0.0f, 0.0f);
	VEC2_BASIC_CHECKS(a);
	const vec3 b(0.0f, 1.0f, 0.0f);
	VEC2_BASIC_CHECKS(b);
	const vec3 c = cross(a, b);
	VEC2_BASIC_CHECKS(c);

	EXPECT_FLOAT_EQ(c.x, 0.0f);
	EXPECT_FLOAT_EQ(c.y, 0.0f);
	EXPECT_FLOAT_EQ(c.z, 1.0f);
}

/**
 * test_vec3_length
 */
TEST(vec3, length)
{
	constexpr vec3 a(0.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(length(a), 0.0f);

	constexpr vec3 b(1.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(length(b), 1.0f);
}

/**
 * test_vec3_distance
 */
TEST(vec3, distance)
{
	constexpr vec3 a(0.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(a);
	constexpr vec3 b(1.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(distance(a, b), 1.0f);
}

/**
 * test_vec3_dot
 */
TEST(vec3, dot)
{
	constexpr vec3 a(12.0f, 16.0f, 0.0f);
	VEC3_BASIC_CHECKS(a);
	constexpr vec3 b(-12.0f, 9.0f, 0.0f);
	VEC3_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(dot(a, b), 0.0f);
}

/**
 * test_vec3_normalize
 */
TEST(vec3, normalize)
{
	constexpr vec3 a(0.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(a);
	EXPECT_TRUE(all(normalize(a) == vec3(0.0f, 0.0f, 0.0f)));

	constexpr vec3 b(2.0f, 0.0f, 0.0f);
	VEC3_BASIC_CHECKS(b);
	EXPECT_TRUE(all(normalize(b) == vec3(1.0f, 0.0f, 0.0f)));
}
