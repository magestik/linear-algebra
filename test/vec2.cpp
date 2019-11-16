#include "gtest/gtest.h"

#include "Vector.h"

/**
 * test_vec2_length
 */
TEST(vec2, length)
{
	constexpr vec2 a(0.0f, 0.0f);
	constexpr vec2 b(1.0f, 0.0f);
	EXPECT_FLOAT_EQ(length(a), 0.0f);
	EXPECT_FLOAT_EQ(length(b), 1.0f);
}

/**
 * test_vec2_distance
 */
TEST(vec2, distance)
{
	constexpr vec2 a(0.0f, 0.0f);
	constexpr vec2 b(1.0f, 0.0f);
	EXPECT_FLOAT_EQ(distance(a, b), 1.0f);
}

/**
 * test_vec2_dot
 */
TEST(vec2, dot)
{
	constexpr vec2 a(12.0f, 16.0f);
	constexpr vec2 b(-12.0f, 9.0f);
	EXPECT_FLOAT_EQ(dot(a, b), 0.0f);
}

/**
 * test_vec2_normalize
 */
TEST(vec2, normalize)
{
	constexpr vec2 a(2.0f, 0.0f);
	EXPECT_TRUE(all(normalize(a) == vec2(1.0f, 0.0f)));
}
