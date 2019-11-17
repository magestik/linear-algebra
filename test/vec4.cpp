#include "gtest/gtest.h"

#include "Vector.h"

static_assert(sizeof(vec4) == 4*sizeof(float), "vec4 bad size");

/**
 * test_vec4_constructors
 */
TEST(vec4, constructors)
{
	const vec4 a;
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);
	EXPECT_FLOAT_EQ(a.w, 0.0f);

	const vec4 b(0.0f, 0.0f, 0.0f, 0.0f);
	EXPECT_FLOAT_EQ(b.x, 0.0f);
	EXPECT_FLOAT_EQ(b.y, 0.0f);
	EXPECT_FLOAT_EQ(b.z, 0.0f);
	EXPECT_FLOAT_EQ(b.w, 0.0f);

	const vec4 c(1.0f, 2.0f, 3.0f, 4.0f);
	EXPECT_FLOAT_EQ(c.x, 1.0f);
	EXPECT_FLOAT_EQ(c.y, 2.0f);
	EXPECT_FLOAT_EQ(c.z, 3.0f);
	EXPECT_FLOAT_EQ(c.w, 4.0f);

	const vec4 d(vec2(5.0f, 6.0f), 7.0f, 8.0f);
	EXPECT_FLOAT_EQ(d.x, 5.0f);
	EXPECT_FLOAT_EQ(d.y, 6.0f);
	EXPECT_FLOAT_EQ(d.z, 7.0f);
	EXPECT_FLOAT_EQ(d.w, 8.0f);

	const vec4 e(vec2(9.0f, 10.0f), vec2(11.0f, 12.0f));
	EXPECT_FLOAT_EQ(e.x, 9.0f);
	EXPECT_FLOAT_EQ(e.y, 10.0f);
	EXPECT_FLOAT_EQ(e.z, 11.0f);
	EXPECT_FLOAT_EQ(e.w, 12.0f);

	const vec4 f(vec3(13.0f, 14.0f, 15.0f), 16.0f);
	EXPECT_FLOAT_EQ(f.x, 13.0f);
	EXPECT_FLOAT_EQ(f.y, 14.0f);
	EXPECT_FLOAT_EQ(f.z, 15.0f);
	EXPECT_FLOAT_EQ(f.w, 16.0f);
}

/**
 * test_vec4_constructors_constexpr
 */
TEST(vec4, constructors_constexpr)
{
	constexpr vec4 a;
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);
	EXPECT_FLOAT_EQ(a.w, 0.0f);

	constexpr vec4 b(0.0f, 0.0f, 0.0f, 0.0f);
	EXPECT_FLOAT_EQ(b.x, 0.0f);
	EXPECT_FLOAT_EQ(b.y, 0.0f);
	EXPECT_FLOAT_EQ(b.z, 0.0f);
	EXPECT_FLOAT_EQ(b.w, 0.0f);

	constexpr vec4 c(1.0f, 2.0f, 3.0f, 4.0f);
	EXPECT_FLOAT_EQ(c.x, 1.0f);
	EXPECT_FLOAT_EQ(c.y, 2.0f);
	EXPECT_FLOAT_EQ(c.z, 3.0f);
	EXPECT_FLOAT_EQ(c.w, 4.0f);

	constexpr vec4 d(vec2(5.0f, 6.0f), 7.0f, 8.0f);
	EXPECT_FLOAT_EQ(d.x, 5.0f);
	EXPECT_FLOAT_EQ(d.y, 6.0f);
	EXPECT_FLOAT_EQ(d.z, 7.0f);
	EXPECT_FLOAT_EQ(d.w, 8.0f);

	constexpr vec4 e(vec2(9.0f, 10.0f), vec2(11.0f, 12.0f));
	EXPECT_FLOAT_EQ(e.x, 9.0f);
	EXPECT_FLOAT_EQ(e.y, 10.0f);
	EXPECT_FLOAT_EQ(e.z, 11.0f);
	EXPECT_FLOAT_EQ(e.w, 12.0f);

	constexpr vec4 f(vec3(13.0f, 14.0f, 15.0f), 16.0f);
	EXPECT_FLOAT_EQ(f.x, 13.0f);
	EXPECT_FLOAT_EQ(f.y, 14.0f);
	EXPECT_FLOAT_EQ(f.z, 15.0f);
	EXPECT_FLOAT_EQ(f.w, 16.0f);
}

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
