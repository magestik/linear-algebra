#include "gtest/gtest.h"

#include "Matrix.h"

static_assert(sizeof(mat4x4) == 4*4*sizeof(float), "mat4x4 bad size");

/**
 * @brief test_mat4x4_constructors
 */
TEST(mat4x4, constructors)
{
	const mat4x4 m1;
	EXPECT_FLOAT_EQ(m1[0][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[0][1], 0.0f);
	EXPECT_FLOAT_EQ(m1[0][2], 0.0f);
	EXPECT_FLOAT_EQ(m1[0][3], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][1], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][2], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][3], 0.0f);
	EXPECT_FLOAT_EQ(m1[2][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[2][1], 0.0f);
	EXPECT_FLOAT_EQ(m1[2][2], 0.0f);
	EXPECT_FLOAT_EQ(m1[2][3], 0.0f);
	EXPECT_FLOAT_EQ(m1[3][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[3][1], 0.0f);
	EXPECT_FLOAT_EQ(m1[3][2], 0.0f);
	EXPECT_FLOAT_EQ(m1[3][3], 0.0f);

	const mat4x4 m2(1.0f);
	EXPECT_FLOAT_EQ(m2[0][0], 1.0f);
	EXPECT_FLOAT_EQ(m2[0][1], 0.0f);
	EXPECT_FLOAT_EQ(m2[0][2], 0.0f);
	EXPECT_FLOAT_EQ(m2[0][3], 0.0f);
	EXPECT_FLOAT_EQ(m2[1][0], 0.0f);
	EXPECT_FLOAT_EQ(m2[1][1], 1.0f);
	EXPECT_FLOAT_EQ(m2[1][2], 0.0f);
	EXPECT_FLOAT_EQ(m2[1][3], 0.0f);
	EXPECT_FLOAT_EQ(m2[2][0], 0.0f);
	EXPECT_FLOAT_EQ(m2[2][1], 0.0f);
	EXPECT_FLOAT_EQ(m2[2][2], 1.0f);
	EXPECT_FLOAT_EQ(m2[2][3], 0.0f);
	EXPECT_FLOAT_EQ(m2[3][0], 0.0f);
	EXPECT_FLOAT_EQ(m2[3][1], 0.0f);
	EXPECT_FLOAT_EQ(m2[3][2], 0.0f);
	EXPECT_FLOAT_EQ(m2[3][3], 1.0f);

	const mat4x4 m3(2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f);
	EXPECT_FLOAT_EQ(m3[0][0], 2.0f);
	EXPECT_FLOAT_EQ(m3[0][1], 3.0f);
	EXPECT_FLOAT_EQ(m3[0][2], 4.0f);
	EXPECT_FLOAT_EQ(m3[0][3], 5.0f);
	EXPECT_FLOAT_EQ(m3[1][0], 6.0f);
	EXPECT_FLOAT_EQ(m3[1][1], 7.0f);
	EXPECT_FLOAT_EQ(m3[1][2], 8.0f);
	EXPECT_FLOAT_EQ(m3[1][3], 9.0f);
	EXPECT_FLOAT_EQ(m3[2][0], 10.0f);
	EXPECT_FLOAT_EQ(m3[2][1], 11.0f);
	EXPECT_FLOAT_EQ(m3[2][2], 12.0f);
	EXPECT_FLOAT_EQ(m3[2][3], 13.0f);
	EXPECT_FLOAT_EQ(m3[3][0], 14.0f);
	EXPECT_FLOAT_EQ(m3[3][1], 15.0f);
	EXPECT_FLOAT_EQ(m3[3][2], 16.0f);
	EXPECT_FLOAT_EQ(m3[3][3], 17.0f);
}

/**
 * @brief test_mat4x4_constructors
 */
TEST(mat4x4, constructors_constexpr)
{
	constexpr mat4x4 m1;
	EXPECT_FLOAT_EQ(m1[0][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[0][1], 0.0f);
	EXPECT_FLOAT_EQ(m1[0][2], 0.0f);
	EXPECT_FLOAT_EQ(m1[0][3], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][1], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][2], 0.0f);
	EXPECT_FLOAT_EQ(m1[1][3], 0.0f);
	EXPECT_FLOAT_EQ(m1[2][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[2][1], 0.0f);
	EXPECT_FLOAT_EQ(m1[2][2], 0.0f);
	EXPECT_FLOAT_EQ(m1[2][3], 0.0f);
	EXPECT_FLOAT_EQ(m1[3][0], 0.0f);
	EXPECT_FLOAT_EQ(m1[3][1], 0.0f);
	EXPECT_FLOAT_EQ(m1[3][2], 0.0f);
	EXPECT_FLOAT_EQ(m1[3][3], 0.0f);

	constexpr mat4x4 m2(1.0f);
	EXPECT_FLOAT_EQ(m2[0][0], 1.0f);
	EXPECT_FLOAT_EQ(m2[0][1], 0.0f);
	EXPECT_FLOAT_EQ(m2[0][2], 0.0f);
	EXPECT_FLOAT_EQ(m2[0][3], 0.0f);
	EXPECT_FLOAT_EQ(m2[1][0], 0.0f);
	EXPECT_FLOAT_EQ(m2[1][1], 1.0f);
	EXPECT_FLOAT_EQ(m2[1][2], 0.0f);
	EXPECT_FLOAT_EQ(m2[1][3], 0.0f);
	EXPECT_FLOAT_EQ(m2[2][0], 0.0f);
	EXPECT_FLOAT_EQ(m2[2][1], 0.0f);
	EXPECT_FLOAT_EQ(m2[2][2], 1.0f);
	EXPECT_FLOAT_EQ(m2[2][3], 0.0f);
	EXPECT_FLOAT_EQ(m2[3][0], 0.0f);
	EXPECT_FLOAT_EQ(m2[3][1], 0.0f);
	EXPECT_FLOAT_EQ(m2[3][2], 0.0f);
	EXPECT_FLOAT_EQ(m2[3][3], 1.0f);

	constexpr mat4x4 m3(2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f, 17.0f);
	EXPECT_FLOAT_EQ(m3[0][0], 2.0f);
	EXPECT_FLOAT_EQ(m3[0][1], 3.0f);
	EXPECT_FLOAT_EQ(m3[0][2], 4.0f);
	EXPECT_FLOAT_EQ(m3[0][3], 5.0f);
	EXPECT_FLOAT_EQ(m3[1][0], 6.0f);
	EXPECT_FLOAT_EQ(m3[1][1], 7.0f);
	EXPECT_FLOAT_EQ(m3[1][2], 8.0f);
	EXPECT_FLOAT_EQ(m3[1][3], 9.0f);
	EXPECT_FLOAT_EQ(m3[2][0], 10.0f);
	EXPECT_FLOAT_EQ(m3[2][1], 11.0f);
	EXPECT_FLOAT_EQ(m3[2][2], 12.0f);
	EXPECT_FLOAT_EQ(m3[2][3], 13.0f);
	EXPECT_FLOAT_EQ(m3[3][0], 14.0f);
	EXPECT_FLOAT_EQ(m3[3][1], 15.0f);
	EXPECT_FLOAT_EQ(m3[3][2], 16.0f);
	EXPECT_FLOAT_EQ(m3[3][3], 17.0f);
}

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
