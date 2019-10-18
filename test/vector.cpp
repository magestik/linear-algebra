#include <Vector.h>

#include <assert.h>

template<typename T>
void test_vector2_dot()
{
	vector2<T> a;
	vector2<T> b;
	dot(a, b);
}

template<typename T>
void test_vector2_normalize()
{
	vector2<T> a;
	normalize(a);
}

/**
 * @brief main
 * @return
 */
int main(void)
{
	test_vector2_dot<float>();
	test_vector2_normalize<float>();

	return 0;
}
