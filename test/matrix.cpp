#include "gtest/gtest.h"

#include "Matrix.h"

/**
 * @brief test_mat2x2_determinant
 */
TEST(mat2x2, determinant)
{
	const mat2x2 m(4.0f, 6.0f, 3.0f, 8.0f);

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
	const mat2x2 m(1.0f, 2.0f, 3.0f, 4.0f);

	const mat2x2 i = inverse(m);

	EXPECT_FLOAT_EQ(i[0][0], -2.0f);
	EXPECT_FLOAT_EQ(i[0][1], 1.0f);
	EXPECT_FLOAT_EQ(i[1][0], 1.5f);
	EXPECT_FLOAT_EQ(i[1][1], -0.5f);
}

/**
 * @brief test_mat3x3_determinant
 */
TEST(mat3x3, determinant)
{
	const mat3x3 m(6.0f, 1.0f, 1.0f, 4.0f, -2.0f, 5.0f, 2.0f, 8.0f, 7.0f);

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
	const mat3x3 m(7.0f, 2.0f, 1.0f, 0.0f, 3.0f, -1.0f, -3.0f, 4.0f, -2.0f);

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

/**
 * @brief test_mat4x4_determinant
 */
TEST(mat4x4, determinant)
{
	const mat4x4 m (3.0f, 2.0f, -1.0f, 4.0f,
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
	const mat4x4 m (1.0f, 0.0f, 0.0f, 1.0f,
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
