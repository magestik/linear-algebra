#include "gtest/gtest.h"

#include "Matrix.h"

/**
 * @brief test_mat4x4_determinant
 */
TEST(mat4x4, determinant)
{
	constexpr mat4x4 m (3.0f, 2.0f, -1.0f, 4.0f,
						2.0f, 1.0f, 5.0f, 7.0f,
						0.0f, 5.0f, 2.0f, -6.0f,
					   -1.0f, 2.0f, 1.0f, 0.0f);

	const float d = determinant(m);

	EXPECT_FLOAT_EQ(d, -418.0f);
	EXPECT_FLOAT_EQ(d, determinant(transpose(m)));

	EXPECT_FLOAT_EQ(determinant(mat4x4(1.0f)), 1.0f);
}

/**
 * @brief test_mat4x4_inverse
 */
TEST(mat4x4, inverse)
{
	constexpr mat4x4 m (1.0f, 0.0f, 0.0f, 1.0f,
						0.0f, 2.0f, 1.0f, 2.0f,
						2.0f, 1.0f, 0.0f, 1.0f,
						2.0f, 0.0f, 1.0f, 4.0f);

	const mat4x4 i = inverse(m);

	EXPECT_FLOAT_EQ(i[0][0], -2.0f);
	EXPECT_FLOAT_EQ(i[0][1], -0.5f);
	EXPECT_FLOAT_EQ(i[0][2],  1.0f);
	EXPECT_FLOAT_EQ(i[0][3],  0.5f);
	EXPECT_FLOAT_EQ(i[1][0],  1.0f);
	EXPECT_FLOAT_EQ(i[1][1],  0.5f);
	EXPECT_FLOAT_EQ(i[1][2],  0.0f);
	EXPECT_FLOAT_EQ(i[1][3], -0.5f);
	EXPECT_FLOAT_EQ(i[2][0], -8.0f);
	EXPECT_FLOAT_EQ(i[2][1], -1.0f);
	EXPECT_FLOAT_EQ(i[2][2],  2.0f);
	EXPECT_FLOAT_EQ(i[2][3],  2.0f);
	EXPECT_FLOAT_EQ(i[3][0],  3.0f);
	EXPECT_FLOAT_EQ(i[3][1],  0.5f);
	EXPECT_FLOAT_EQ(i[3][2], -1.0f);
	EXPECT_FLOAT_EQ(i[3][3], -0.5f);
}
