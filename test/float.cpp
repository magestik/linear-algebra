#include <Maths.h>

#include <assert.h>

/**
 * @brief test_float_sign
 */
void test_float_sign(void)
{
	float x = -15.0f;
	float y = 0.0f;
	float z = 12.0;

	assert(sign(x) == -1.0f);
	assert(sign(y) == 0.0f);
	assert(sign(z) == 1.0f);
}

/**
 * @brief test_float_min
 */
void test_float_min(void)
{
	float x = 1.0f;
	float y = 2.0f;

	assert(min(x, y) == 1.0f);
	assert(min(y, x) == 1.0f);
}

/**
 * @brief test_float_max
 */
void test_float_max(void)
{
	float x = 1.0f;
	float y = 2.0f;

	assert(max(x, y) == 2.0f);
	assert(max(y, x) == 2.0f);
}

/**
 * @brief test_float_clamp
 */
void test_float_clamp(void)
{
	float x = 1.0f;
	float y = 2.0f;
	float z = 3.0f;

	assert(clamp(x, y, z) == 2.0f);
	assert(clamp(y, x, y) == 2.0f);
	assert(clamp(z, x, y) == 2.0f);
}

/**
 * @brief test_float_min3
 */
void test_float_min3(void)
{
	float x = 1.0f;
	float y = 2.0f;
	float z = 3.0f;

	assert(min3(x, y, z) == 1.0f);
	assert(min3(x, z, y) == 1.0f);
	assert(min3(y, x, z) == 1.0f);
	assert(min3(y, z, x) == 1.0f);
	assert(min3(z, x, y) == 1.0f);
	assert(min3(z, y, x) == 1.0f);
}

/**
 * @brief test_float_max3
 */
void test_float_max3(void)
{
	float x = 1.0f;
	float y = 2.0f;
	float z = 3.0f;

	assert(max3(x, y, z) == 3.0f);
	assert(max3(x, z, y) == 3.0f);
	assert(max3(y, x, z) == 3.0f);
	assert(max3(y, z, x) == 3.0f);
	assert(max3(z, x, y) == 3.0f);
	assert(max3(z, y, x) == 3.0f);
}

/**
 * @brief test_float_med3
 */
void test_float_med3(void)
{
	float x = 1.0f;
	float y = 2.0f;
	float z = 3.0f;

	assert(med3(x, y, z) == 2.0f);
	assert(med3(x, z, y) == 2.0f);
	assert(med3(y, x, z) == 2.0f);
	assert(med3(y, z, x) == 2.0f);
	assert(med3(z, x, y) == 2.0f);
	assert(med3(z, y, x) == 2.0f);

	assert(med3(y, y, x) == 2.0f);
	assert(med3(y, y, z) == 2.0f);
	assert(med3(y, x, y) == 2.0f);
	assert(med3(y, z, y) == 2.0f);
	assert(med3(x, y, y) == 2.0f);
	assert(med3(z, y, y) == 2.0f);

	assert(med3(y, y, y) == 2.0f);
}

/**
 * @brief main
 * @return
 */
int main(void)
{
	test_float_sign();
	test_float_min();
	test_float_max();
	test_float_clamp();
	test_float_min3();
	test_float_max3();
	test_float_med3();

	return 0;
}
