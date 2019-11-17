#include "gtest/gtest.h"

#include "Vector.h"

#include "helpers.h"

static_assert(sizeof(vec4) == 4*sizeof(float), "vec4 bad size");

/**
 * test_vec4_constructors
 */
TEST(vec4, constructors)
{
	const vec4 a;
	VEC4_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);
	EXPECT_FLOAT_EQ(a.w, 0.0f);

	const vec4 b(0.0f, 0.0f, 0.0f, 0.0f);
	VEC4_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(b.x, 0.0f);
	EXPECT_FLOAT_EQ(b.y, 0.0f);
	EXPECT_FLOAT_EQ(b.z, 0.0f);
	EXPECT_FLOAT_EQ(b.w, 0.0f);

	const vec4 c(1.0f, 2.0f, 3.0f, 4.0f);
	VEC4_BASIC_CHECKS(c);
	EXPECT_FLOAT_EQ(c.x, 1.0f);
	EXPECT_FLOAT_EQ(c.y, 2.0f);
	EXPECT_FLOAT_EQ(c.z, 3.0f);
	EXPECT_FLOAT_EQ(c.w, 4.0f);

	const vec2 d(5.0f, 6.0f);
	VEC2_BASIC_CHECKS(d);
	EXPECT_FLOAT_EQ(d.x, 5.0f);
	EXPECT_FLOAT_EQ(d.y, 6.0f);

	const vec4 e(d, 7.0f, 8.0f);
	VEC4_BASIC_CHECKS(e);
	EXPECT_FLOAT_EQ(e.x, d.x);
	EXPECT_FLOAT_EQ(e.y, d.y);
	EXPECT_FLOAT_EQ(e.z, 7.0f);
	EXPECT_FLOAT_EQ(e.w, 8.0f);

	const vec2 f(9.0f, 10.0f);
	VEC2_BASIC_CHECKS(f);
	EXPECT_FLOAT_EQ(f.x, 9.0f);
	EXPECT_FLOAT_EQ(f.y, 10.0f);

	const vec2 g(11.0f, 12.0f);
	VEC2_BASIC_CHECKS(g);
	EXPECT_FLOAT_EQ(g.x, 11.0f);
	EXPECT_FLOAT_EQ(g.y, 12.0f);

	const vec4 h(f, g);
	VEC4_BASIC_CHECKS(h);
	EXPECT_FLOAT_EQ(h.x, f.x);
	EXPECT_FLOAT_EQ(h.y, f.y);
	EXPECT_FLOAT_EQ(h.z, g.x);
	EXPECT_FLOAT_EQ(h.w, g.y);

	const vec3 i(13.0f, 14.0f, 15.0f);
	VEC3_BASIC_CHECKS(i);
	EXPECT_FLOAT_EQ(i.x, 13.0f);
	EXPECT_FLOAT_EQ(i.y, 14.0f);
	EXPECT_FLOAT_EQ(i.z, 15.0f);

	const vec4 j(i, 16.0f);
	VEC4_BASIC_CHECKS(j);
	EXPECT_FLOAT_EQ(j.x, i.x);
	EXPECT_FLOAT_EQ(j.y, i.y);
	EXPECT_FLOAT_EQ(j.z, i.z);
	EXPECT_FLOAT_EQ(j.w, 16.0f);
}

/**
 * test_vec4_constructors_constexpr
 */
TEST(vec4, constructors_constexpr)
{
	constexpr vec4 a;
	VEC4_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 0.0f);
	EXPECT_FLOAT_EQ(a.y, 0.0f);
	EXPECT_FLOAT_EQ(a.z, 0.0f);
	EXPECT_FLOAT_EQ(a.w, 0.0f);

	constexpr vec4 b(0.0f, 0.0f, 0.0f, 0.0f);
	VEC4_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(b.x, 0.0f);
	EXPECT_FLOAT_EQ(b.y, 0.0f);
	EXPECT_FLOAT_EQ(b.z, 0.0f);
	EXPECT_FLOAT_EQ(b.w, 0.0f);

	constexpr vec4 c(1.0f, 2.0f, 3.0f, 4.0f);
	VEC4_BASIC_CHECKS(c);
	EXPECT_FLOAT_EQ(c.x, 1.0f);
	EXPECT_FLOAT_EQ(c.y, 2.0f);
	EXPECT_FLOAT_EQ(c.z, 3.0f);
	EXPECT_FLOAT_EQ(c.w, 4.0f);

	constexpr vec2 d(5.0f, 6.0f);
	VEC2_BASIC_CHECKS(d);
	EXPECT_FLOAT_EQ(d.x, 5.0f);
	EXPECT_FLOAT_EQ(d.y, 6.0f);

	constexpr vec4 e(d, 7.0f, 8.0f);
	VEC4_BASIC_CHECKS(e);
	EXPECT_FLOAT_EQ(e.x, d.x);
	EXPECT_FLOAT_EQ(e.y, d.y);
	EXPECT_FLOAT_EQ(e.z, 7.0f);
	EXPECT_FLOAT_EQ(e.w, 8.0f);

	constexpr vec2 f(9.0f, 10.0f);
	VEC2_BASIC_CHECKS(f);
	EXPECT_FLOAT_EQ(f.x, 9.0f);
	EXPECT_FLOAT_EQ(f.y, 10.0f);

	constexpr vec2 g(11.0f, 12.0f);
	VEC2_BASIC_CHECKS(g);
	EXPECT_FLOAT_EQ(g.x, 11.0f);
	EXPECT_FLOAT_EQ(g.y, 12.0f);

	constexpr vec4 h(f, g);
	VEC4_BASIC_CHECKS(h);
	EXPECT_FLOAT_EQ(h.x, f.x);
	EXPECT_FLOAT_EQ(h.y, f.y);
	EXPECT_FLOAT_EQ(h.z, g.x);
	EXPECT_FLOAT_EQ(h.w, g.y);

	constexpr vec3 i(13.0f, 14.0f, 15.0f);
	VEC3_BASIC_CHECKS(i);
	EXPECT_FLOAT_EQ(i.x, 13.0f);
	EXPECT_FLOAT_EQ(i.y, 14.0f);
	EXPECT_FLOAT_EQ(i.z, 15.0f);

	constexpr vec4 j(i, 16.0f);
	VEC4_BASIC_CHECKS(j);
	EXPECT_FLOAT_EQ(j.x, i.x);
	EXPECT_FLOAT_EQ(j.y, i.y);
	EXPECT_FLOAT_EQ(j.z, i.z);
	EXPECT_FLOAT_EQ(j.w, 16.0f);
}

/**
 * test_vec4_assignement
 */
TEST(vec4, assignement)
{
	vec4 a = vec4(1.0f, 2.0f, 3.0f, 4.0f);
	VEC2_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 1.0f);
	EXPECT_FLOAT_EQ(a.y, 2.0f);
	EXPECT_FLOAT_EQ(a.z, 3.0f);
	EXPECT_FLOAT_EQ(a.w, 4.0f);

	a = vec4(5.0f, 6.0f, 7.0f, 8.0f);
	VEC2_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(a.x, 5.0f);
	EXPECT_FLOAT_EQ(a.y, 6.0f);
	EXPECT_FLOAT_EQ(a.z, 7.0f);
	EXPECT_FLOAT_EQ(a.w, 8.0f);
}

/**
 * test_vec4_length
 */
TEST(vec4, length)
{
	constexpr vec4 a(0.0f, 0.0f, 0.0f, 0.0f);
	VEC4_BASIC_CHECKS(a);
	EXPECT_FLOAT_EQ(length(a), 0.0f);

	constexpr vec4 b(1.0f, 0.0f, 0.0f, 0.0f);
	VEC4_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(length(b), 1.0f);
}

/**
 * test_vec4_distance
 */
TEST(vec4, distance)
{
	constexpr vec4 a(0.0f, 0.0f, 0.0f, 0.0f);
	VEC4_BASIC_CHECKS(a);
	constexpr vec4 b(1.0f, 0.0f, 0.0f, 0.0f);
	VEC4_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(distance(a, b), 1.0f);
}

/**
 * test_vec4_dot
 */
TEST(vec4, dot)
{
	constexpr vec4 a(12.0f, 16.0f, 0.0f, 0.0f);
	VEC4_BASIC_CHECKS(a);
	constexpr vec4 b(-12.0f, 9.0f, 0.0f, 0.0f);
	VEC4_BASIC_CHECKS(b);
	EXPECT_FLOAT_EQ(dot(a, b), 0.0f);
}

/**
 * test_vec4_normalize
 */
TEST(vec4, normalize)
{
	constexpr vec4 a(0.0f, 0.0f, 0.0f, 0.0f);
	VEC4_BASIC_CHECKS(a);
	EXPECT_TRUE(all(normalize(a) == vec4(0.0f, 0.0f, 0.0f, 0.0f)));

	constexpr vec4 b(2.0f, 0.0f, 0.0f, 0.0f);
	VEC4_BASIC_CHECKS(b);
	EXPECT_TRUE(all(normalize(b) == vec4(1.0f, 0.0f, 0.0f, 0.0f)));
}
