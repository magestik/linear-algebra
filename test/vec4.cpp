#include "gtest/gtest.h"

#include "Vector.h"

static_assert(sizeof(vec4) == 4*sizeof(float), "vec4 bad size");

/**
 * test_vec4_length
 */
TEST(vec4, length)
{
	constexpr vec4 a(0.0f, 0.0f, 0.0f, 0.0f);
	constexpr vec4 b(1.0f, 0.0f, 0.0f, 0.0f);
	EXPECT_FLOAT_EQ(length(a), 0.0f);
	EXPECT_FLOAT_EQ(length(b), 1.0f);
}

/**
 * test_vec4_distance
 */
TEST(vec4, distance)
{
	constexpr vec4 a(0.0f, 0.0f, 0.0f, 0.0f);
	constexpr vec4 b(1.0f, 0.0f, 0.0f, 0.0f);
	EXPECT_FLOAT_EQ(distance(a, b), 1.0f);
}

/**
 * test_vec4_dot
 */
TEST(vec4, dot)
{
	constexpr vec4 a(12.0f, 16.0f, 0.0f, 0.0f);
	constexpr vec4 b(-12.0f, 9.0f, 0.0f, 0.0f);
	EXPECT_FLOAT_EQ(dot(a, b), 0.0f);
}

/**
 * test_vec4_normalize
 */
TEST(vec4, normalize)
{
	constexpr vec4 a(2.0f, 0.0f, 0.0f, 0.0f);
	EXPECT_TRUE(all(normalize(a) == vec4(1.0f, 0.0f, 0.0f, 0.0f)));
}
