#include "gtest/gtest.h"

#include "Matrix.h"

static_assert(sizeof(mat2x2) == 2*2*sizeof(float), "mat2x2 bad size");

/**
 * @brief test_mat2x2_constructors
 */
TEST(mat2x2, constructors)
{
	const mat2x2 m1;
	EXPECT_FLOAT_EQ(m1[0][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[0][1], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][1], 0.0f);

	const mat2x2 m2(1.0f);
	EXPECT_FLOAT_EQ(m2[0][0], 1.0f);
	EXPECT_FLOAT_EQ(m2[0][1], 0.0f);
	EXPECT_FLOAT_EQ(m2[1][0], 0.0f);
	EXPECT_FLOAT_EQ(m2[1][1], 1.0f);

	const mat2x2 m3(2.0f, 3.0f, 4.0f, 5.0f);
	EXPECT_FLOAT_EQ(m3[0][0], 2.0f);
	EXPECT_FLOAT_EQ(m3[0][1], 3.0f);
	EXPECT_FLOAT_EQ(m3[1][0], 4.0f);
	EXPECT_FLOAT_EQ(m3[1][1], 5.0f);
}

/**
 * @brief test_mat2x2_constructors
 */
TEST(mat2x2, constructors_constexpr)
{
	constexpr mat2x2 m1;
	EXPECT_FLOAT_EQ(m1[0][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[0][1], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][1], 0.0f);

	constexpr mat2x2 m2(1.0f);
	EXPECT_FLOAT_EQ(m2[0][0], 1.0f);
	EXPECT_FLOAT_EQ(m2[0][1], 0.0f);
	EXPECT_FLOAT_EQ(m2[1][0], 0.0f);
	EXPECT_FLOAT_EQ(m2[1][1], 1.0f);

	constexpr mat2x2 m3(2.0f, 3.0f, 4.0f, 5.0f);
	EXPECT_FLOAT_EQ(m3[0][0], 2.0f);
	EXPECT_FLOAT_EQ(m3[0][1], 3.0f);
	EXPECT_FLOAT_EQ(m3[1][0], 4.0f);
	EXPECT_FLOAT_EQ(m3[1][1], 5.0f);
}

/**
 * @brief test_mat2x2_determinant
 */
TEST(mat2x2, determinant)
{
	constexpr mat2x2 m(4.0f, 6.0f, 3.0f, 8.0f);

	const float d = determinant(m);

	EXPECT_FLOAT_EQ(d, 14.0f);
	EXPECT_FLOAT_EQ(determinant(transpose(m)), d);

	EXPECT_FLOAT_EQ(determinant(mat2x2(1.0f)), 1.0f);
}

/**
 * @brief test_mat2x2_inverse
 */
TEST(mat2x2, inverse)
{
	constexpr mat2x2 m(1.0f, 2.0f, 3.0f, 4.0f);

	const mat2x2 i = inverse(m);

	EXPECT_FLOAT_EQ(i[0][0], -2.0f);
	EXPECT_FLOAT_EQ(i[0][1], 1.0f);
	EXPECT_FLOAT_EQ(i[1][0], 1.5f);
	EXPECT_FLOAT_EQ(i[1][1], -0.5f);
}
