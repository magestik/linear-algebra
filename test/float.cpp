#include "gtest/gtest.h"

#include "Maths.h"

/**
 * @brief test_float_sign
 */
TEST(base_maths, sign)
{
	constexpr float x = -15.0f;
	constexpr float y = 0.0f;
	constexpr float z = 12.0;

	EXPECT_FLOAT_EQ(sign(x), -1.0f);
	EXPECT_FLOAT_EQ(sign(y), 0.0f);
	EXPECT_FLOAT_EQ(sign(z), 1.0f);
}

/**
 * @brief test_float_min
 */
TEST(base_maths, min)
{
	constexpr float x = 1.0f;
	constexpr float y = 2.0f;

	EXPECT_FLOAT_EQ(min(x, y), 1.0f);
	EXPECT_FLOAT_EQ(min(y, x), 1.0f);
}

/**
 * @brief test_float_max
 */
TEST(base_maths, max)
{
	constexpr float x = 1.0f;
	constexpr float y = 2.0f;

	EXPECT_FLOAT_EQ(max(x, y), 2.0f);
	EXPECT_FLOAT_EQ(max(y, x), 2.0f);
}

/**
 * @brief test_float_clamp
 */
TEST(base_maths, clamp)
{
	constexpr float x = 1.0f;
	constexpr float y = 2.0f;
	constexpr float z = 3.0f;

	EXPECT_FLOAT_EQ(clamp(x, y, z), 2.0f);
	EXPECT_FLOAT_EQ(clamp(y, x, y), 2.0f);
	EXPECT_FLOAT_EQ(clamp(z, x, y), 2.0f);
}

/**
 * @brief test_float_min3
 */
TEST(base_maths, min3)
{
	constexpr float x = 1.0f;
	constexpr float y = 2.0f;
	constexpr float z = 3.0f;

	EXPECT_FLOAT_EQ(min3(x, y, z), 1.0f);
	EXPECT_FLOAT_EQ(min3(x, z, y), 1.0f);
	EXPECT_FLOAT_EQ(min3(y, x, z), 1.0f);
	EXPECT_FLOAT_EQ(min3(y, z, x), 1.0f);
	EXPECT_FLOAT_EQ(min3(z, x, y), 1.0f);
	EXPECT_FLOAT_EQ(min3(z, y, x), 1.0f);
}

/**
 * @brief test_float_max3
 */
TEST(base_maths, max3)
{
	constexpr float x = 1.0f;
	constexpr float y = 2.0f;
	constexpr float z = 3.0f;

	EXPECT_FLOAT_EQ(max3(x, y, z), 3.0f);
	EXPECT_FLOAT_EQ(max3(x, z, y), 3.0f);
	EXPECT_FLOAT_EQ(max3(y, x, z), 3.0f);
	EXPECT_FLOAT_EQ(max3(y, z, x), 3.0f);
	EXPECT_FLOAT_EQ(max3(z, x, y), 3.0f);
	EXPECT_FLOAT_EQ(max3(z, y, x), 3.0f);
}

/**
 * @brief test_float_med3
 */
TEST(base_maths, med3)
{
	constexpr float x = 1.0f;
	constexpr float y = 2.0f;
	constexpr float z = 3.0f;

	EXPECT_FLOAT_EQ(med3(x, y, z), 2.0f);
	EXPECT_FLOAT_EQ(med3(x, z, y), 2.0f);
	EXPECT_FLOAT_EQ(med3(y, x, z), 2.0f);
	EXPECT_FLOAT_EQ(med3(y, z, x), 2.0f);
	EXPECT_FLOAT_EQ(med3(z, x, y), 2.0f);
	EXPECT_FLOAT_EQ(med3(z, y, x), 2.0f);

	EXPECT_FLOAT_EQ(med3(y, y, x), 2.0f);
	EXPECT_FLOAT_EQ(med3(y, y, z), 2.0f);
	EXPECT_FLOAT_EQ(med3(y, x, y), 2.0f);
	EXPECT_FLOAT_EQ(med3(y, z, y), 2.0f);
	EXPECT_FLOAT_EQ(med3(x, y, y), 2.0f);
	EXPECT_FLOAT_EQ(med3(z, y, y), 2.0f);

	EXPECT_FLOAT_EQ(med3(y, y, y), 2.0f);
}
