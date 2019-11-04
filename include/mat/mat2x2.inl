#pragma once

/*
 * matrix2x2<T> implementation using (row-major ordered) array
 */

/**
 * TODO comment
 */
template<typename T>
inline matrix2x2<T> operator*(const matrix2x2<T> & matA, const matrix2x2<T> & matB)
{
	return(matrix2x2<T>((matA[0][0]*matB[0][0]) + (matA[0][1]*matB[1][0]), (matA[0][0]*matB[0][1]) + (matA[0][1]*matB[1][1]),
						(matA[1][0]*matB[0][0]) + (matA[1][1]*matB[1][0]), (matA[1][0]*matB[0][1]) + (matA[1][1]*matB[1][1])));
}

/**
 * M * v
 */
template<typename T>
vector2<T> operator*(const matrix2x2<T> & mat, const vector2<T> & vec)
{
	return(vector2<T>(mat[0][0] * vec.x + mat[0][1] * vec.y, mat[1][0] * vec.x + mat[1][1] * vec.y));
}

/**
 * transpose(M) * v
 */
template<typename T>
vector2<T> operator*(const vector2<T> & vec, const matrix2x2<T> & mat)
{
	return(vector2<T>(vec.x * mat[0][0] + vec.y * mat[1][0], vec.x * mat[0][1] + vec.y * mat[1][1]));
}

/**
 * TODO comment
 */
template<typename T>
inline matrix2x2<T> operator*(T s, const matrix2x2<T> & mat)
{
	return(matrix2x2<T>(s * mat[0], s * mat[1]));
}

/**
 * TODO comment
 */
template<typename T>
inline matrix2x2<T> operator*(const matrix2x2<T> & mat, T s)
{
	return(matrix2x2<T>(mat[0] * s, mat[1] * s));
}

/**
 * TODO comment
 */
template<typename T>
inline matrix2x2<T> operator/(const matrix2x2<T> & mat, T s)
{
	return(matrix2x2<T>(mat[0] / s, mat[1] / s));
}

/**
 * calculate the determinant of a matrix
 */
template<typename T>
inline T determinant(const matrix2x2<T> & mat)
{
	return((mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]));
}

/**
 * calculate the inverse of a matrix
 */
template<typename T>
inline matrix2x2<T> inverse(const matrix2x2<T> & mat)
{
	matrix2x2<T> adj (mat[1][1], - mat[0][1], - mat[1][0], mat[0][0]);

	T det = determinant(mat);

	return adj / det;
}

/**
 * calculate the outer product of a pair of vectors
 */
template<typename T>
inline matrix2x2<T> outerProduct(const vector2<T> & c, const vector2<T> & r)
{
	return(matrix2x2<T>(c.x * r.x, c.x * r.y,
						c.y * r.x, c.y * r.y));
}

/**
 * calculate the transpose of a matrix
 */
template<typename T>
inline matrix2x2<T> transpose(const matrix2x2<T> & mat)
{
	return(matrix2x2<T>(mat[0][0], mat[1][0],
						mat[0][1], mat[1][1]));
}

/**
 * perform a component-wise multiplication of two matrices
 */
template<typename T>
inline matrix2x2<T> matrixCompMult(const matrix2x2<T> & matA, const matrix2x2<T> & matB)
{
	return(matrix2x2<T>((matA[0]*matB[0]),
						(matA[1]*matB[1])));
}
