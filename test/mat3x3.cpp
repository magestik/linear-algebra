#include "gtest/gtest.h"

#include "Matrix.h"

/**
 * @brief test_mat3x3_determinant
 */
TEST(mat3x3, determinant)
{
	constexpr mat3x3 m(6.0f, 1.0f, 1.0f, 4.0f, -2.0f, 5.0f, 2.0f, 8.0f, 7.0f);

	const float d = determinant(m);

	EXPECT_FLOAT_EQ(d, -306.0f);
	EXPECT_FLOAT_EQ(d, determinant(transpose(m)));

	EXPECT_FLOAT_EQ(determinant(mat3x3(1.0f)), 1.0f);
}

/**
 * @brief test_mat3x3_inverse
 */
TEST(mat3x3, inverse)
{
	constexpr mat3x3 m(7.0f, 2.0f, 1.0f, 0.0f, 3.0f, -1.0f, -3.0f, 4.0f, -2.0f);

	const mat3x3 i = inverse(m);

	EXPECT_FLOAT_EQ(i[0][0], -2.0f);
	EXPECT_FLOAT_EQ(i[0][1], 8.0f);
	EXPECT_FLOAT_EQ(i[0][2], -5.0f);
	EXPECT_FLOAT_EQ(i[1][0], 3.0f);
	EXPECT_FLOAT_EQ(i[1][1], -11.0f);
	EXPECT_FLOAT_EQ(i[1][2], 7.0f);
	EXPECT_FLOAT_EQ(i[2][0], 9.0f);
	EXPECT_FLOAT_EQ(i[2][1], -34.0f);
	EXPECT_FLOAT_EQ(i[2][2], 21.0f);
}
