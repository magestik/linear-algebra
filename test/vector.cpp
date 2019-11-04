#include <Vector.h>

#include <assert.h>

/**
 * test_vec2_length
 */
void test_vec2_length()
{
	constexpr vec2 a(0.0f, 0.0f);
	constexpr vec2 b(1.0f, 0.0f);
	assert(length(a) == 0.0f);
	assert(length(b) == 1.0f);
}

/**
 * test_vector2_distance
 */
void test_vec2_distance()
{
	constexpr vec2 a(0.0f, 0.0f);
	constexpr vec2 b(1.0f, 0.0f);
	assert(distance(a, b) == 1.0f);
}

/**
 * test_vector2_dot
 */
void test_vec2_dot()
{
	constexpr vec2 a(12.0f, 16.0f);
	constexpr vec2 b(-12.0f, 9.0f);
	assert(dot(a, b) == 0.0f);
}

/**
 * test_vector2_normalize
 */
void test_vec2_normalize()
{
	constexpr vec2 a(2.0f, 0.0f);
	assert(all(normalize(a) == vec2(1.0f, 0.0f)));
}

/**
 * @brief main
 * @return
 */
int main(void)
{
	test_vec2_length();
	test_vec2_distance();
	test_vec2_dot();
	test_vec2_normalize();

	return 0;
}
