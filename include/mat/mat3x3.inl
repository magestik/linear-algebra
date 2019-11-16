#pragma once

/*
 * matrix3x3<T> implementation using using (row-major ordered) array
 */

/**
 * TODO comment
 */
template<typename T>
inline constexpr matrix3x3<T> operator*(const matrix3x3<T> & matA, const matrix3x3<T> & matB)
{
	return(matrix3x3<T>((matA[0][0]*matB[0][0]) + (matA[0][1]*matB[1][0]) + (matA[0][2]*matB[2][0]),
						(matA[0][0]*matB[0][1]) + (matA[0][1]*matB[1][1]) + (matA[0][2]*matB[2][1]),
						(matA[0][0]*matB[0][2]) + (matA[0][1]*matB[1][2]) + (matA[0][2]*matB[2][2]),

						(matA[1][0]*matB[0][0]) + (matA[1][1]*matB[1][0]) + (matA[1][2]*matB[2][0]),
						(matA[1][0]*matB[0][1]) + (matA[1][1]*matB[1][1]) + (matA[1][2]*matB[2][1]),
						(matA[1][0]*matB[0][2]) + (matA[1][1]*matB[1][2]) + (matA[1][2]*matB[2][2]),

						(matA[2][0]*matB[0][0]) + (matA[2][1]*matB[1][0]) + (matA[2][2]*matB[2][0]),
						(matA[2][0]*matB[0][1]) + (matA[2][1]*matB[1][1]) + (matA[2][2]*matB[2][1]),
						(matA[2][0]*matB[0][2]) + (matA[2][1]*matB[1][2]) + (matA[2][2]*matB[2][2])));
}

/**
 * M * v
 */
template<typename T>
inline constexpr vector3<T> operator*(const matrix3x3<T> & mat, const vector3<T> & vec)
{
	return(vector3<T>(mat[0][0] * vec.x + mat[0][1] * vec.y + mat[0][2] * vec.z,
					  mat[1][0] * vec.x + mat[1][1] * vec.y + mat[1][2] * vec.z,
					  mat[2][0] * vec.x + mat[2][1] * vec.y + mat[2][2] * vec.z));
}

/**
 * transpose(M) * v
 */
template<typename T>
inline constexpr vector3<T> operator*(const vector3<T> & vec, const matrix3x3<T> & mat)
{
	return(vector3<T>(vec.x * mat[0][0] + vec.y * mat[0][1] + vec.z * mat[0][2],
					  vec.x * mat[1][0] + vec.y * mat[1][1] + vec.z * mat[1][2],
					  vec.x * mat[2][0] + vec.y * mat[2][1] + vec.z * mat[2][2]));
}

/**
 * TODO comment
 */
template<typename T>
inline constexpr matrix3x3<T> operator*(T s, const matrix3x3<T> & mat)
{
	return(matrix3x3<T>(s * mat[0], s * mat[1], s * mat[2]));
}

/**
 * TODO comment
 */
template<typename T>
inline constexpr matrix3x3<T> operator*(const matrix3x3<T> & mat, T s)
{
	return(matrix3x3<T>(mat[0] * s, mat[1] * s, mat[2] * s));
}

/**
 * TODO comment
 */
template<typename T>
inline constexpr matrix3x3<T> operator/(const matrix3x3<T> & mat, T s)
{
	return(matrix3x3<T>(mat[0] / s, mat[1] / s, mat[2] / s));
}

/**
 * calculate the determinant of a matrix
 */
template<typename T>
inline constexpr T determinant(const matrix3x3<T> & mat)
{
	return((mat[0][0] * ((mat[1][1] * mat[2][2]) - (mat[2][1] * mat[1][2])))
		 - (mat[1][0] * ((mat[0][1] * mat[2][2]) - (mat[2][1] * mat[0][2])))
		 + (mat[2][0] * ((mat[0][1] * mat[1][2]) - (mat[1][1] * mat[0][2]))));
}

/**
 * calculate the inverse of a matrix
 */
template<typename T>
inline matrix3x3<T> inverse(const matrix3x3<T> & mat)
{
	matrix3x3<T> adj;

	adj[0][0] =   (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]);
	adj[0][1] = - (mat[0][1] * mat[2][2] - mat[0][2] * mat[2][1]);
	adj[0][2] =   (mat[0][1] * mat[1][2] - mat[0][2] * mat[1][1]);

	adj[1][0] = - (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]);
	adj[1][1] =   (mat[0][0] * mat[2][2] - mat[0][2] * mat[2][0]);
	adj[1][2] = - (mat[0][0] * mat[1][2] - mat[0][2] * mat[1][0]);

	adj[2][0] =   (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
	adj[2][1] = - (mat[0][0] * mat[2][1] - mat[0][1] * mat[2][0]);
	adj[2][2] =   (mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0]);

	T det = determinant(mat);

	return adj / det;
}

/**
 * calculate the outer product of a pair of vectors
 */
template<typename T>
inline constexpr matrix3x3<T> outerProduct(const vector3<T> & c, const vector3<T> & r)
{
	return(matrix3x3<T>(c.x * r.x, c.x * r.y, c.x * r.z,
						c.y * r.x, c.y * r.y, c.y * r.z,
						c.z * r.x, c.z * r.y, c.z * r.z));
}

/**
 * calculate the transpose of a matrix
 */
template<typename T>
inline constexpr matrix3x3<T> transpose(const matrix3x3<T> & mat)
{
	return(matrix3x3<T>(mat[0][0], mat[1][0], mat[2][0],
						mat[0][1], mat[1][1], mat[2][1],
						mat[0][2], mat[1][2], mat[2][2]));
}

/**
 * perform a component-wise multiplication of two matrices
 */
template<typename T>
inline constexpr matrix3x3<T> matrixCompMult(const matrix3x3<T> & matA, const matrix3x3<T> & matB)
{
	return(matrix3x3<T>((matA[0]*matB[0]),
						(matA[1]*matB[1]),
						(matA[2]*matB[2])));
}
