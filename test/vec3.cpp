#include "gtest/gtest.h"

#include "Vector.h"

static_assert(sizeof(vec3) == 3*sizeof(float), "vec3 bad size");

/**
 * test_vec3_constructors
 */
TEST(vec3, constructors)
{
	const vec3 a;
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);

	const vec3 b(0.0f, 0.0f, 0.0f);
	EXPECT_FLOAT_EQ(b.x, 0.0f);
	EXPECT_FLOAT_EQ(b.y, 0.0f);
	EXPECT_FLOAT_EQ(b.z, 0.0f);

	const vec3 c(1.0f, 2.0f, 3.0f);
	EXPECT_FLOAT_EQ(c.x, 1.0f);
	EXPECT_FLOAT_EQ(c.y, 2.0f);
	EXPECT_FLOAT_EQ(c.z, 3.0f);

	const vec3 d(vec2(4.0f, 5.0f), 6.0f);
	EXPECT_FLOAT_EQ(d.x, 4.0f);
	EXPECT_FLOAT_EQ(d.y, 5.0f);
	EXPECT_FLOAT_EQ(d.z, 6.0f);
}

/**
 * test_vec3_constructors_constexpr
 */
TEST(vec3, constructors_constexpr)
{
	constexpr vec3 a;
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);

	constexpr vec3 b(0.0f, 0.0f, 0.0f);
	EXPECT_FLOAT_EQ(b.x, 0.0f);
	EXPECT_FLOAT_EQ(b.y, 0.0f);
	EXPECT_FLOAT_EQ(b.z, 0.0f);

	constexpr vec3 c(1.0f, 2.0f, 3.0f);
	EXPECT_FLOAT_EQ(c.x, 1.0f);
	EXPECT_FLOAT_EQ(c.y, 2.0f);
	EXPECT_FLOAT_EQ(c.z, 3.0f);

	constexpr vec3 d(vec2(4.0f, 5.0f), 6.0f);
	EXPECT_FLOAT_EQ(d.x, 4.0f);
	EXPECT_FLOAT_EQ(d.y, 5.0f);
	EXPECT_FLOAT_EQ(d.z, 6.0f);
}

/**
 * test_vec3_length
 */
TEST(vec3, length)
{
	constexpr vec3 a(0.0f, 0.0f, 0.0f);
	constexpr vec3 b(1.0f, 0.0f, 0.0f);
	EXPECT_FLOAT_EQ(length(a), 0.0f);
	EXPECT_FLOAT_EQ(length(b), 1.0f);
}

/**
 * test_vec3_distance
 */
TEST(vec3, distance)
{
	constexpr vec3 a(0.0f, 0.0f, 0.0f);
	constexpr vec3 b(1.0f, 0.0f, 0.0f);
	EXPECT_FLOAT_EQ(distance(a, b), 1.0f);
}

/**
 * test_vec3_dot
 */
TEST(vec3, dot)
{
	constexpr vec3 a(12.0f, 16.0f, 0.0f);
	constexpr vec3 b(-12.0f, 9.0f, 0.0f);
	EXPECT_FLOAT_EQ(dot(a, b), 0.0f);
}

/**
 * test_vec3_normalize
 */
TEST(vec3, normalize)
{
	constexpr vec3 a(2.0f, 0.0f, 0.0f);
	EXPECT_TRUE(all(normalize(a) == vec3(1.0f, 0.0f, 0.0f)));
}
