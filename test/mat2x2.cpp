#include "gtest/gtest.h"

#include "Matrix.h"

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
