#include "gtest/gtest.h"

#include "Vector.h"

#include "helpers.h"

static_assert(sizeof(vec2) == 2*sizeof(float), "vec2 bad size");

/**
 * test_vec2_constructors
 */
TEST(vec2, constructors)
{
	const vec2 a;
	VEC2_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);

	const vec2 b(0.0f, 0.0f);
	VEC2_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(b.x, 0.0f);
	EXPECT_FLOAT_EQ(b.y, 0.0f);

	const vec2 c(1.0f, 2.0f);
	VEC2_BASIC_CHECKS(c);
	EXPECT_FLOAT_EQ(c.x, 1.0f);
	EXPECT_FLOAT_EQ(c.y, 2.0f);
}

/**
 * test_vec2_constructors_constexpr
 */
TEST(vec2, constructors_constexpr)
{
	constexpr vec2 a;
	VEC2_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);

	constexpr vec2 b(0.0f, 0.0f);
	VEC2_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(b.x, 0.0f);
	EXPECT_FLOAT_EQ(b.y, 0.0f);

	constexpr vec2 c(1.0f, 2.0f);
	VEC2_BASIC_CHECKS(c);
	EXPECT_FLOAT_EQ(c.x, 1.0f);
	EXPECT_FLOAT_EQ(c.y, 2.0f);
}

/**
 * test_vec2_length
 */
TEST(vec2, length)
{
	constexpr vec2 a(0.0f, 0.0f);
	VEC2_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(length(a), 0.0f);

	constexpr vec2 b(1.0f, 0.0f);
	VEC2_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(length(b), 1.0f);
}

/**
 * test_vec2_distance
 */
TEST(vec2, distance)
{
	constexpr vec2 a(0.0f, 0.0f);
	VEC2_BASIC_CHECKS(a);
	constexpr vec2 b(1.0f, 0.0f);
	VEC2_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(distance(a, b), 1.0f);
}

/**
 * test_vec2_dot
 */
TEST(vec2, dot)
{
	constexpr vec2 a(12.0f, 16.0f);
	VEC2_BASIC_CHECKS(a);
	constexpr vec2 b(-12.0f, 9.0f);
	VEC2_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(dot(a, b), 0.0f);
}

/**
 * test_vec2_normalize
 */
TEST(vec2, normalize)
{
	constexpr vec2 a(2.0f, 0.0f);
	VEC2_BASIC_CHECKS(a);

	EXPECT_TRUE(all(normalize(a) == vec2(1.0f, 0.0f)));
}
