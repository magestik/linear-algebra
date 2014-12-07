#include <Vector.h>
#include <Matrix.h>

#include <assert.h>

/**
 * @brief test_mat2x2_determinant
 */
void test_mat2x2_determinant(void)
{
	const mat2x2 m(4.0f, 6.0f, 3.0f, 8.0f);

	const float d = determinant(m);

	assert(14.0f == d && determinant(transpose(m)) == d);

	assert(1.0f == determinant(mat2x2(1.0f)));
}

/**
 * @brief test_mat2x2_inverse
 */
void test_mat2x2_inverse(void)
{
	const mat2x2 m(1.0f, 2.0f, 3.0f, 4.0f);

	const mat2x2 i = inverse(m);

	assert(i[0][0] == -2.0f && i[0][1] == 1.0f && i[1][0] == 1.5f && i[1][1] == -0.5f);
}

/**
 * @brief test_mat3x3_determinant
 */
void test_mat3x3_determinant(void)
{
	const mat3x3 m(6.0f, 1.0f, 1.0f, 4.0f, -2.0f, 5.0f, 2.0f, 8.0f, 7.0f);

	const float d = determinant(m);

	assert(-306.0f == d && determinant(transpose(m)) == d);

	assert(1.0f == determinant(mat3x3(1.0f)));
}

/**
 * @brief test_mat3x3_inverse
 */
void test_mat3x3_inverse(void)
{
	const mat3x3 m(7.0f, 2.0f, 1.0f, 0.0f, 3.0f, -1.0f, -3.0f, 4.0f, -2.0f);

	const mat3x3 i = inverse(m);

	assert(i[0][0] == -2.0f && i[0][1] ==   8.0f && i[0][2] == -5.0f
		&& i[1][0] ==  3.0f && i[1][1] == -11.0f && i[1][2] ==  7.0f
		&& i[2][0] ==  9.0f && i[2][1] == -34.0f && i[2][2] == 21.0f);
}

/**
 * @brief test_mat4x4_determinant
 */
void test_mat4x4_determinant(void)
{
	const mat4x4 m (3.0f, 2.0f, -1.0f, 4.0f,
					2.0f, 1.0f, 5.0f, 7.0f,
					0.0f, 5.0f, 2.0f, -6.0f,
					-1.0f, 2.0f, 1.0f, 0.0f);

	const float d = determinant(m);

	assert(-418.0f == d && determinant(transpose(m)) == d);

	assert(1.0f == determinant(mat4x4(1.0f)));
}

/**
 * @brief test_mat4x4_inverse
 */
void test_mat4x4_inverse(void)
{
	const mat4x4 m (1.0f, 0.0f, 0.0f, 1.0f,
					0.0f, 2.0f, 1.0f, 2.0f,
					2.0f, 1.0f, 0.0f, 1.0f,
					2.0f, 0.0f, 1.0f, 4.0f);

	const mat4x4 i = inverse(m);

	assert(i[0][0] == -2.0f && i[0][1] == -0.5f && i[0][2] ==  1.0f && i[0][3] ==  0.5f
		&& i[1][0] ==  1.0f && i[1][1] ==  0.5f && i[1][2] ==  0.0f && i[1][3] == -0.5f
		&& i[2][0] == -8.0f && i[2][1] == -1.0f && i[2][2] ==  2.0f && i[2][3] ==  2.0f
		&& i[3][0] ==  3.0f && i[3][1] ==  0.5f && i[3][2] == -1.0f && i[3][3] == -0.5f);
}

/**
 * @brief main
 * @return
 */
int main(void)
{
	test_mat2x2_determinant();
	test_mat3x3_determinant();
	test_mat4x4_determinant();

	test_mat2x2_inverse();
	test_mat3x3_inverse();
	test_mat4x4_inverse();

	return 0;
}
