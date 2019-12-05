#pragma once

#include "bvec4.h"
#include "scalar1.h"
#include "scalar2.h"
#include "scalar3.h"
#include "scalar4.h"

template<typename T>
struct vector4
{
	union
	{
		Scalar1<v4sf, T, 0> x;
		Scalar1<v4sf, T, 1> y;
		Scalar1<v4sf, T, 2> z;
		Scalar1<v4sf, T, 3> w;

		Scalar2<v4sf, vector2<T>, 0, 0> xx;
		Scalar2<v4sf, vector2<T>, 0, 1> xy;
		Scalar2<v4sf, vector2<T>, 0, 2> xz;
		Scalar2<v4sf, vector2<T>, 0, 3> xw;
		Scalar2<v4sf, vector2<T>, 1, 0> yx;
		Scalar2<v4sf, vector2<T>, 1, 1> yy;
		Scalar2<v4sf, vector2<T>, 1, 2> yz;
		Scalar2<v4sf, vector2<T>, 1, 3> yw;
		Scalar2<v4sf, vector2<T>, 2, 0> zx;
		Scalar2<v4sf, vector2<T>, 2, 1> zy;
		Scalar2<v4sf, vector2<T>, 2, 2> zz;
		Scalar2<v4sf, vector2<T>, 2, 3> zw;
		Scalar2<v4sf, vector2<T>, 3, 0> wx;
		Scalar2<v4sf, vector2<T>, 3, 1> wy;
		Scalar2<v4sf, vector2<T>, 3, 2> wz;
		Scalar2<v4sf, vector2<T>, 3, 3> ww;

		Scalar3<v4sf, vector3<T>, 0, 0, 0> xxx;
		Scalar3<v4sf, vector3<T>, 0, 0, 1> xxy;
		Scalar3<v4sf, vector3<T>, 0, 0, 2> xxz;
		Scalar3<v4sf, vector3<T>, 0, 0, 3> xxw;
		Scalar3<v4sf, vector3<T>, 0, 1, 0> xyx;
		Scalar3<v4sf, vector3<T>, 0, 1, 1> xyy;
		Scalar3<v4sf, vector3<T>, 0, 1, 2> xyz;
		Scalar3<v4sf, vector3<T>, 0, 1, 3> xyw;
		Scalar3<v4sf, vector3<T>, 0, 2, 0> xzx;
		Scalar3<v4sf, vector3<T>, 0, 2, 1> xzy;
		Scalar3<v4sf, vector3<T>, 0, 2, 2> xzz;
		Scalar3<v4sf, vector3<T>, 0, 2, 3> xzw;
		Scalar3<v4sf, vector3<T>, 0, 3, 0> xwx;
		Scalar3<v4sf, vector3<T>, 0, 3, 1> xwy;
		Scalar3<v4sf, vector3<T>, 0, 3, 2> xwz;
		Scalar3<v4sf, vector3<T>, 0, 3, 3> xww;
		Scalar3<v4sf, vector3<T>, 1, 0, 0> yxx;
		Scalar3<v4sf, vector3<T>, 1, 0, 1> yxy;
		Scalar3<v4sf, vector3<T>, 1, 0, 2> yxz;
		Scalar3<v4sf, vector3<T>, 1, 0, 3> yxw;
		Scalar3<v4sf, vector3<T>, 1, 1, 0> yyx;
		Scalar3<v4sf, vector3<T>, 1, 1, 1> yyy;
		Scalar3<v4sf, vector3<T>, 1, 1, 2> yyz;
		Scalar3<v4sf, vector3<T>, 1, 1, 3> yyw;
		Scalar3<v4sf, vector3<T>, 1, 2, 0> yzx;
		Scalar3<v4sf, vector3<T>, 1, 2, 1> yzy;
		Scalar3<v4sf, vector3<T>, 1, 2, 2> yzz;
		Scalar3<v4sf, vector3<T>, 1, 2, 3> yzw;
		Scalar3<v4sf, vector3<T>, 1, 3, 0> ywx;
		Scalar3<v4sf, vector3<T>, 1, 3, 1> ywy;
		Scalar3<v4sf, vector3<T>, 1, 3, 2> ywz;
		Scalar3<v4sf, vector3<T>, 1, 3, 3> yww;
		Scalar3<v4sf, vector3<T>, 2, 0, 0> zxx;
		Scalar3<v4sf, vector3<T>, 2, 0, 1> zxy;
		Scalar3<v4sf, vector3<T>, 2, 0, 2> zxz;
		Scalar3<v4sf, vector3<T>, 2, 0, 3> zxw;
		Scalar3<v4sf, vector3<T>, 2, 1, 0> zyx;
		Scalar3<v4sf, vector3<T>, 2, 1, 1> zyy;
		Scalar3<v4sf, vector3<T>, 2, 1, 2> zyz;
		Scalar3<v4sf, vector3<T>, 2, 1, 3> zyw;
		Scalar3<v4sf, vector3<T>, 2, 2, 0> zzx;
		Scalar3<v4sf, vector3<T>, 2, 2, 1> zzy;
		Scalar3<v4sf, vector3<T>, 2, 2, 2> zzz;
		Scalar3<v4sf, vector3<T>, 2, 2, 3> zzw;
		Scalar3<v4sf, vector3<T>, 2, 3, 0> zwx;
		Scalar3<v4sf, vector3<T>, 2, 3, 1> zwy;
		Scalar3<v4sf, vector3<T>, 2, 3, 2> zwz;
		Scalar3<v4sf, vector3<T>, 2, 3, 3> zww;
		Scalar3<v4sf, vector3<T>, 3, 0, 0> wxx;
		Scalar3<v4sf, vector3<T>, 3, 0, 1> wxy;
		Scalar3<v4sf, vector3<T>, 3, 0, 2> wxz;
		Scalar3<v4sf, vector3<T>, 3, 0, 3> wxw;
		Scalar3<v4sf, vector3<T>, 3, 1, 0> wyx;
		Scalar3<v4sf, vector3<T>, 3, 1, 1> wyy;
		Scalar3<v4sf, vector3<T>, 3, 1, 2> wyz;
		Scalar3<v4sf, vector3<T>, 3, 1, 3> wyw;
		Scalar3<v4sf, vector3<T>, 3, 2, 0> wzx;
		Scalar3<v4sf, vector3<T>, 3, 2, 1> wzy;
		Scalar3<v4sf, vector3<T>, 3, 2, 2> wzz;
		Scalar3<v4sf, vector3<T>, 3, 2, 3> wzw;
		Scalar3<v4sf, vector3<T>, 3, 3, 0> wwx;
		Scalar3<v4sf, vector3<T>, 3, 3, 1> wwy;
		Scalar3<v4sf, vector3<T>, 3, 3, 2> wwz;
		Scalar3<v4sf, vector3<T>, 3, 3, 3> www;

		Scalar4<v4sf, vector4<T>, 0, 0, 0, 0> xxxx;
		Scalar4<v4sf, vector4<T>, 0, 0, 0, 1> xxxy;
		Scalar4<v4sf, vector4<T>, 0, 0, 0, 2> xxxz;
		Scalar4<v4sf, vector4<T>, 0, 0, 0, 3> xxxw;
		Scalar4<v4sf, vector4<T>, 0, 0, 1, 0> xxyx;
		Scalar4<v4sf, vector4<T>, 0, 0, 1, 1> xxyy;
		Scalar4<v4sf, vector4<T>, 0, 0, 1, 2> xxyz;
		Scalar4<v4sf, vector4<T>, 0, 0, 1, 3> xxyw;
		Scalar4<v4sf, vector4<T>, 0, 0, 2, 0> xxzx;
		Scalar4<v4sf, vector4<T>, 0, 0, 2, 1> xxzy;
		Scalar4<v4sf, vector4<T>, 0, 0, 2, 2> xxzz;
		Scalar4<v4sf, vector4<T>, 0, 0, 2, 3> xxzw;
		Scalar4<v4sf, vector4<T>, 0, 0, 3, 0> xxwx;
		Scalar4<v4sf, vector4<T>, 0, 0, 3, 1> xxwy;
		Scalar4<v4sf, vector4<T>, 0, 0, 3, 2> xxwz;
		Scalar4<v4sf, vector4<T>, 0, 0, 3, 3> xxww;
		Scalar4<v4sf, vector4<T>, 0, 1, 0, 0> xyxx;
		Scalar4<v4sf, vector4<T>, 0, 1, 0, 1> xyxy;
		Scalar4<v4sf, vector4<T>, 0, 1, 0, 2> xyxz;
		Scalar4<v4sf, vector4<T>, 0, 1, 0, 3> xyxw;
		Scalar4<v4sf, vector4<T>, 0, 1, 1, 0> xyyx;
		Scalar4<v4sf, vector4<T>, 0, 1, 1, 1> xyyy;
		Scalar4<v4sf, vector4<T>, 0, 1, 1, 2> xyyz;
		Scalar4<v4sf, vector4<T>, 0, 1, 1, 3> xyyw;
		Scalar4<v4sf, vector4<T>, 0, 1, 2, 0> xyzx;
		Scalar4<v4sf, vector4<T>, 0, 1, 2, 1> xyzy;
		Scalar4<v4sf, vector4<T>, 0, 1, 2, 2> xyzz;
		Scalar4<v4sf, vector4<T>, 0, 1, 2, 3> xyzw;
		Scalar4<v4sf, vector4<T>, 0, 1, 3, 0> xywx;
		Scalar4<v4sf, vector4<T>, 0, 1, 3, 1> xywy;
		Scalar4<v4sf, vector4<T>, 0, 1, 3, 2> xywz;
		Scalar4<v4sf, vector4<T>, 0, 1, 3, 3> xyww;
		Scalar4<v4sf, vector4<T>, 0, 2, 0, 0> xzxx;
		Scalar4<v4sf, vector4<T>, 0, 2, 0, 1> xzxy;
		Scalar4<v4sf, vector4<T>, 0, 2, 0, 2> xzxz;
		Scalar4<v4sf, vector4<T>, 0, 2, 0, 3> xzxw;
		Scalar4<v4sf, vector4<T>, 0, 2, 1, 0> xzyx;
		Scalar4<v4sf, vector4<T>, 0, 2, 1, 1> xzyy;
		Scalar4<v4sf, vector4<T>, 0, 2, 1, 2> xzyz;
		Scalar4<v4sf, vector4<T>, 0, 2, 1, 3> xzyw;
		Scalar4<v4sf, vector4<T>, 0, 2, 2, 0> xzzx;
		Scalar4<v4sf, vector4<T>, 0, 2, 2, 1> xzzy;
		Scalar4<v4sf, vector4<T>, 0, 2, 2, 2> xzzz;
		Scalar4<v4sf, vector4<T>, 0, 2, 2, 3> xzzw;
		Scalar4<v4sf, vector4<T>, 0, 2, 3, 0> xzwx;
		Scalar4<v4sf, vector4<T>, 0, 2, 3, 1> xzwy;
		Scalar4<v4sf, vector4<T>, 0, 2, 3, 2> xzwz;
		Scalar4<v4sf, vector4<T>, 0, 2, 3, 3> xzww;
		Scalar4<v4sf, vector4<T>, 0, 3, 0, 0> xwxx;
		Scalar4<v4sf, vector4<T>, 0, 3, 0, 1> xwxy;
		Scalar4<v4sf, vector4<T>, 0, 3, 0, 2> xwxz;
		Scalar4<v4sf, vector4<T>, 0, 3, 0, 3> xwxw;
		Scalar4<v4sf, vector4<T>, 0, 3, 1, 0> xwyx;
		Scalar4<v4sf, vector4<T>, 0, 3, 1, 1> xwyy;
		Scalar4<v4sf, vector4<T>, 0, 3, 1, 2> xwyz;
		Scalar4<v4sf, vector4<T>, 0, 3, 1, 3> xwyw;
		Scalar4<v4sf, vector4<T>, 0, 3, 2, 0> xwzx;
		Scalar4<v4sf, vector4<T>, 0, 3, 2, 1> xwzy;
		Scalar4<v4sf, vector4<T>, 0, 3, 2, 2> xwzz;
		Scalar4<v4sf, vector4<T>, 0, 3, 2, 3> xwzw;
		Scalar4<v4sf, vector4<T>, 0, 3, 3, 0> xwwx;
		Scalar4<v4sf, vector4<T>, 0, 3, 3, 1> xwwy;
		Scalar4<v4sf, vector4<T>, 0, 3, 3, 2> xwwz;
		Scalar4<v4sf, vector4<T>, 0, 3, 3, 3> xwww;
		Scalar4<v4sf, vector4<T>, 1, 0, 0, 0> yxxx;
		Scalar4<v4sf, vector4<T>, 1, 0, 0, 1> yxxy;
		Scalar4<v4sf, vector4<T>, 1, 0, 0, 2> yxxz;
		Scalar4<v4sf, vector4<T>, 1, 0, 0, 3> yxxw;
		Scalar4<v4sf, vector4<T>, 1, 0, 1, 0> yxyx;
		Scalar4<v4sf, vector4<T>, 1, 0, 1, 1> yxyy;
		Scalar4<v4sf, vector4<T>, 1, 0, 1, 2> yxyz;
		Scalar4<v4sf, vector4<T>, 1, 0, 1, 3> yxyw;
		Scalar4<v4sf, vector4<T>, 1, 0, 2, 0> yxzx;
		Scalar4<v4sf, vector4<T>, 1, 0, 2, 1> yxzy;
		Scalar4<v4sf, vector4<T>, 1, 0, 2, 2> yxzz;
		Scalar4<v4sf, vector4<T>, 1, 0, 2, 3> yxzw;
		Scalar4<v4sf, vector4<T>, 1, 0, 3, 0> yxwx;
		Scalar4<v4sf, vector4<T>, 1, 0, 3, 1> yxwy;
		Scalar4<v4sf, vector4<T>, 1, 0, 3, 2> yxwz;
		Scalar4<v4sf, vector4<T>, 1, 0, 3, 3> yxww;
		Scalar4<v4sf, vector4<T>, 1, 1, 0, 0> yyxx;
		Scalar4<v4sf, vector4<T>, 1, 1, 0, 1> yyxy;
		Scalar4<v4sf, vector4<T>, 1, 1, 0, 2> yyxz;
		Scalar4<v4sf, vector4<T>, 1, 1, 0, 3> yyxw;
		Scalar4<v4sf, vector4<T>, 1, 1, 1, 0> yyyx;
		Scalar4<v4sf, vector4<T>, 1, 1, 1, 1> yyyy;
		Scalar4<v4sf, vector4<T>, 1, 1, 1, 2> yyyz;
		Scalar4<v4sf, vector4<T>, 1, 1, 1, 3> yyyw;
		Scalar4<v4sf, vector4<T>, 1, 1, 2, 0> yyzx;
		Scalar4<v4sf, vector4<T>, 1, 1, 2, 1> yyzy;
		Scalar4<v4sf, vector4<T>, 1, 1, 2, 2> yyzz;
		Scalar4<v4sf, vector4<T>, 1, 1, 2, 3> yyzw;
		Scalar4<v4sf, vector4<T>, 1, 1, 3, 0> yywx;
		Scalar4<v4sf, vector4<T>, 1, 1, 3, 1> yywy;
		Scalar4<v4sf, vector4<T>, 1, 1, 3, 2> yywz;
		Scalar4<v4sf, vector4<T>, 1, 1, 3, 3> yyww;
		Scalar4<v4sf, vector4<T>, 1, 2, 0, 0> yzxx;
		Scalar4<v4sf, vector4<T>, 1, 2, 0, 1> yzxy;
		Scalar4<v4sf, vector4<T>, 1, 2, 0, 2> yzxz;
		Scalar4<v4sf, vector4<T>, 1, 2, 0, 3> yzxw;
		Scalar4<v4sf, vector4<T>, 1, 2, 1, 0> yzyx;
		Scalar4<v4sf, vector4<T>, 1, 2, 1, 1> yzyy;
		Scalar4<v4sf, vector4<T>, 1, 2, 1, 2> yzyz;
		Scalar4<v4sf, vector4<T>, 1, 2, 1, 3> yzyw;
		Scalar4<v4sf, vector4<T>, 1, 2, 2, 0> yzzx;
		Scalar4<v4sf, vector4<T>, 1, 2, 2, 1> yzzy;
		Scalar4<v4sf, vector4<T>, 1, 2, 2, 2> yzzz;
		Scalar4<v4sf, vector4<T>, 1, 2, 2, 3> yzzw;
		Scalar4<v4sf, vector4<T>, 1, 2, 3, 0> yzwx;
		Scalar4<v4sf, vector4<T>, 1, 2, 3, 1> yzwy;
		Scalar4<v4sf, vector4<T>, 1, 2, 3, 2> yzwz;
		Scalar4<v4sf, vector4<T>, 1, 2, 3, 3> yzww;
		Scalar4<v4sf, vector4<T>, 1, 3, 0, 0> ywxx;
		Scalar4<v4sf, vector4<T>, 1, 3, 0, 1> ywxy;
		Scalar4<v4sf, vector4<T>, 1, 3, 0, 2> ywxz;
		Scalar4<v4sf, vector4<T>, 1, 3, 0, 3> ywxw;
		Scalar4<v4sf, vector4<T>, 1, 3, 1, 0> ywyx;
		Scalar4<v4sf, vector4<T>, 1, 3, 1, 1> ywyy;
		Scalar4<v4sf, vector4<T>, 1, 3, 1, 2> ywyz;
		Scalar4<v4sf, vector4<T>, 1, 3, 1, 3> ywyw;
		Scalar4<v4sf, vector4<T>, 1, 3, 2, 0> ywzx;
		Scalar4<v4sf, vector4<T>, 1, 3, 2, 1> ywzy;
		Scalar4<v4sf, vector4<T>, 1, 3, 2, 2> ywzz;
		Scalar4<v4sf, vector4<T>, 1, 3, 2, 3> ywzw;
		Scalar4<v4sf, vector4<T>, 1, 3, 3, 0> ywwx;
		Scalar4<v4sf, vector4<T>, 1, 3, 3, 1> ywwy;
		Scalar4<v4sf, vector4<T>, 1, 3, 3, 2> ywwz;
		Scalar4<v4sf, vector4<T>, 1, 3, 3, 3> ywww;
		Scalar4<v4sf, vector4<T>, 2, 0, 0, 0> zxxx;
		Scalar4<v4sf, vector4<T>, 2, 0, 0, 1> zxxy;
		Scalar4<v4sf, vector4<T>, 2, 0, 0, 2> zxxz;
		Scalar4<v4sf, vector4<T>, 2, 0, 0, 3> zxxw;
		Scalar4<v4sf, vector4<T>, 2, 0, 1, 0> zxyx;
		Scalar4<v4sf, vector4<T>, 2, 0, 1, 1> zxyy;
		Scalar4<v4sf, vector4<T>, 2, 0, 1, 2> zxyz;
		Scalar4<v4sf, vector4<T>, 2, 0, 1, 3> zxyw;
		Scalar4<v4sf, vector4<T>, 2, 0, 2, 0> zxzx;
		Scalar4<v4sf, vector4<T>, 2, 0, 2, 1> zxzy;
		Scalar4<v4sf, vector4<T>, 2, 0, 2, 2> zxzz;
		Scalar4<v4sf, vector4<T>, 2, 0, 2, 3> zxzw;
		Scalar4<v4sf, vector4<T>, 2, 0, 3, 0> zxwx;
		Scalar4<v4sf, vector4<T>, 2, 0, 3, 1> zxwy;
		Scalar4<v4sf, vector4<T>, 2, 0, 3, 2> zxwz;
		Scalar4<v4sf, vector4<T>, 2, 0, 3, 3> zxww;
		Scalar4<v4sf, vector4<T>, 2, 1, 0, 0> zyxx;
		Scalar4<v4sf, vector4<T>, 2, 1, 0, 1> zyxy;
		Scalar4<v4sf, vector4<T>, 2, 1, 0, 2> zyxz;
		Scalar4<v4sf, vector4<T>, 2, 1, 0, 3> zyxw;
		Scalar4<v4sf, vector4<T>, 2, 1, 1, 0> zyyx;
		Scalar4<v4sf, vector4<T>, 2, 1, 1, 1> zyyy;
		Scalar4<v4sf, vector4<T>, 2, 1, 1, 2> zyyz;
		Scalar4<v4sf, vector4<T>, 2, 1, 1, 3> zyyw;
		Scalar4<v4sf, vector4<T>, 2, 1, 2, 0> zyzx;
		Scalar4<v4sf, vector4<T>, 2, 1, 2, 1> zyzy;
		Scalar4<v4sf, vector4<T>, 2, 1, 2, 2> zyzz;
		Scalar4<v4sf, vector4<T>, 2, 1, 2, 3> zyzw;
		Scalar4<v4sf, vector4<T>, 2, 1, 3, 0> zywx;
		Scalar4<v4sf, vector4<T>, 2, 1, 3, 1> zywy;
		Scalar4<v4sf, vector4<T>, 2, 1, 3, 2> zywz;
		Scalar4<v4sf, vector4<T>, 2, 1, 3, 3> zyww;
		Scalar4<v4sf, vector4<T>, 2, 2, 0, 0> zzxx;
		Scalar4<v4sf, vector4<T>, 2, 2, 0, 1> zzxy;
		Scalar4<v4sf, vector4<T>, 2, 2, 0, 2> zzxz;
		Scalar4<v4sf, vector4<T>, 2, 2, 0, 3> zzxw;
		Scalar4<v4sf, vector4<T>, 2, 2, 1, 0> zzyx;
		Scalar4<v4sf, vector4<T>, 2, 2, 1, 1> zzyy;
		Scalar4<v4sf, vector4<T>, 2, 2, 1, 2> zzyz;
		Scalar4<v4sf, vector4<T>, 2, 2, 1, 3> zzyw;
		Scalar4<v4sf, vector4<T>, 2, 2, 2, 0> zzzx;
		Scalar4<v4sf, vector4<T>, 2, 2, 2, 1> zzzy;
		Scalar4<v4sf, vector4<T>, 2, 2, 2, 2> zzzz;
		Scalar4<v4sf, vector4<T>, 2, 2, 2, 3> zzzw;
		Scalar4<v4sf, vector4<T>, 2, 2, 3, 0> zzwx;
		Scalar4<v4sf, vector4<T>, 2, 2, 3, 1> zzwy;
		Scalar4<v4sf, vector4<T>, 2, 2, 3, 2> zzwz;
		Scalar4<v4sf, vector4<T>, 2, 2, 3, 3> zzww;
		Scalar4<v4sf, vector4<T>, 2, 3, 0, 0> zwxx;
		Scalar4<v4sf, vector4<T>, 2, 3, 0, 1> zwxy;
		Scalar4<v4sf, vector4<T>, 2, 3, 0, 2> zwxz;
		Scalar4<v4sf, vector4<T>, 2, 3, 0, 3> zwxw;
		Scalar4<v4sf, vector4<T>, 2, 3, 1, 0> zwyx;
		Scalar4<v4sf, vector4<T>, 2, 3, 1, 1> zwyy;
		Scalar4<v4sf, vector4<T>, 2, 3, 1, 2> zwyz;
		Scalar4<v4sf, vector4<T>, 2, 3, 1, 3> zwyw;
		Scalar4<v4sf, vector4<T>, 2, 3, 2, 0> zwzx;
		Scalar4<v4sf, vector4<T>, 2, 3, 2, 1> zwzy;
		Scalar4<v4sf, vector4<T>, 2, 3, 2, 2> zwzz;
		Scalar4<v4sf, vector4<T>, 2, 3, 2, 3> zwzw;
		Scalar4<v4sf, vector4<T>, 2, 3, 3, 0> zwwx;
		Scalar4<v4sf, vector4<T>, 2, 3, 3, 1> zwwy;
		Scalar4<v4sf, vector4<T>, 2, 3, 3, 2> zwwz;
		Scalar4<v4sf, vector4<T>, 2, 3, 3, 3> zwww;
		Scalar4<v4sf, vector4<T>, 3, 0, 0, 0> wxxx;
		Scalar4<v4sf, vector4<T>, 3, 0, 0, 1> wxxy;
		Scalar4<v4sf, vector4<T>, 3, 0, 0, 2> wxxz;
		Scalar4<v4sf, vector4<T>, 3, 0, 0, 3> wxxw;
		Scalar4<v4sf, vector4<T>, 3, 0, 1, 0> wxyx;
		Scalar4<v4sf, vector4<T>, 3, 0, 1, 1> wxyy;
		Scalar4<v4sf, vector4<T>, 3, 0, 1, 2> wxyz;
		Scalar4<v4sf, vector4<T>, 3, 0, 1, 3> wxyw;
		Scalar4<v4sf, vector4<T>, 3, 0, 2, 0> wxzx;
		Scalar4<v4sf, vector4<T>, 3, 0, 2, 1> wxzy;
		Scalar4<v4sf, vector4<T>, 3, 0, 2, 2> wxzz;
		Scalar4<v4sf, vector4<T>, 3, 0, 2, 3> wxzw;
		Scalar4<v4sf, vector4<T>, 3, 0, 3, 0> wxwx;
		Scalar4<v4sf, vector4<T>, 3, 0, 3, 1> wxwy;
		Scalar4<v4sf, vector4<T>, 3, 0, 3, 2> wxwz;
		Scalar4<v4sf, vector4<T>, 3, 0, 3, 3> wxww;
		Scalar4<v4sf, vector4<T>, 3, 1, 0, 0> wyxx;
		Scalar4<v4sf, vector4<T>, 3, 1, 0, 1> wyxy;
		Scalar4<v4sf, vector4<T>, 3, 1, 0, 2> wyxz;
		Scalar4<v4sf, vector4<T>, 3, 1, 0, 3> wyxw;
		Scalar4<v4sf, vector4<T>, 3, 1, 1, 0> wyyx;
		Scalar4<v4sf, vector4<T>, 3, 1, 1, 1> wyyy;
		Scalar4<v4sf, vector4<T>, 3, 1, 1, 2> wyyz;
		Scalar4<v4sf, vector4<T>, 3, 1, 1, 3> wyyw;
		Scalar4<v4sf, vector4<T>, 3, 1, 2, 0> wyzx;
		Scalar4<v4sf, vector4<T>, 3, 1, 2, 1> wyzy;
		Scalar4<v4sf, vector4<T>, 3, 1, 2, 2> wyzz;
		Scalar4<v4sf, vector4<T>, 3, 1, 2, 3> wyzw;
		Scalar4<v4sf, vector4<T>, 3, 1, 3, 0> wywx;
		Scalar4<v4sf, vector4<T>, 3, 1, 3, 1> wywy;
		Scalar4<v4sf, vector4<T>, 3, 1, 3, 2> wywz;
		Scalar4<v4sf, vector4<T>, 3, 1, 3, 3> wyww;
		Scalar4<v4sf, vector4<T>, 3, 2, 0, 0> wzxx;
		Scalar4<v4sf, vector4<T>, 3, 2, 0, 1> wzxy;
		Scalar4<v4sf, vector4<T>, 3, 2, 0, 2> wzxz;
		Scalar4<v4sf, vector4<T>, 3, 2, 0, 3> wzxw;
		Scalar4<v4sf, vector4<T>, 3, 2, 1, 0> wzyx;
		Scalar4<v4sf, vector4<T>, 3, 2, 1, 1> wzyy;
		Scalar4<v4sf, vector4<T>, 3, 2, 1, 2> wzyz;
		Scalar4<v4sf, vector4<T>, 3, 2, 1, 3> wzyw;
		Scalar4<v4sf, vector4<T>, 3, 2, 2, 0> wzzx;
		Scalar4<v4sf, vector4<T>, 3, 2, 2, 1> wzzy;
		Scalar4<v4sf, vector4<T>, 3, 2, 2, 2> wzzz;
		Scalar4<v4sf, vector4<T>, 3, 2, 2, 3> wzzw;
		Scalar4<v4sf, vector4<T>, 3, 2, 3, 0> wzwx;
		Scalar4<v4sf, vector4<T>, 3, 2, 3, 1> wzwy;
		Scalar4<v4sf, vector4<T>, 3, 2, 3, 2> wzwz;
		Scalar4<v4sf, vector4<T>, 3, 2, 3, 3> wzww;
		Scalar4<v4sf, vector4<T>, 3, 3, 0, 0> wwxx;
		Scalar4<v4sf, vector4<T>, 3, 3, 0, 1> wwxy;
		Scalar4<v4sf, vector4<T>, 3, 3, 0, 2> wwxz;
		Scalar4<v4sf, vector4<T>, 3, 3, 0, 3> wwxw;
		Scalar4<v4sf, vector4<T>, 3, 3, 1, 0> wwyx;
		Scalar4<v4sf, vector4<T>, 3, 3, 1, 1> wwyy;
		Scalar4<v4sf, vector4<T>, 3, 3, 1, 2> wwyz;
		Scalar4<v4sf, vector4<T>, 3, 3, 1, 3> wwyw;
		Scalar4<v4sf, vector4<T>, 3, 3, 2, 0> wwzx;
		Scalar4<v4sf, vector4<T>, 3, 3, 2, 1> wwzy;
		Scalar4<v4sf, vector4<T>, 3, 3, 2, 2> wwzz;
		Scalar4<v4sf, vector4<T>, 3, 3, 2, 3> wwzw;
		Scalar4<v4sf, vector4<T>, 3, 3, 3, 0> wwwx;
		Scalar4<v4sf, vector4<T>, 3, 3, 3, 1> wwwy;
		Scalar4<v4sf, vector4<T>, 3, 3, 3, 2> wwwz;
		Scalar4<v4sf, vector4<T>, 3, 3, 3, 3> wwww;

		v4sf native;
	};

	//
	// Constructors
	//

	explicit constexpr vector4(void) : native { 0, 0, 0, 0 }
	{
		// ...
	}

	explicit constexpr vector4(v4sf v) : native { v }
	{
		// ...
	}

	explicit constexpr vector4(T _x, T _y, T _z, T _w) : native { _x, _y, _z, _w }
	{
		// ...
	}

	explicit constexpr vector4(const vector3<T> & v, T _w) : native { v.native[0], v.native[1], v.native[2], _w }
	{
		// ...
	}

	explicit constexpr vector4(T _x, const vector3<T> & v) : native { _x, v.native[0], v.native[1], v.native[2], }
	{
		// ...
	}

	explicit constexpr vector4(const vector2<T> & v, T _z, T _w) : native { v.native[0], v.native[1], _z, _w }
	{
		// ...
	}

	explicit constexpr vector4(T _x, const vector2<T> & v, T _w) : native { _x, v.native[0], v.native[1], _w }
	{
		// ...
	}

	explicit constexpr vector4(T _x, T _y, const vector2<T> & v) : native { _x, _y, v.native[0], v.native[1] }
	{
		// ...
	}

	explicit constexpr vector4(const vector2<T> & v1, const vector2<T> & v2) : native { v1.native[0], v1.native[1], v2.native[0], v2.native[1] }
	{
		// ...
	}

	//
	// Accessors
	//

	T & operator [] (unsigned int index)
	{
		return(native[index]);
	}

	constexpr T operator [] (unsigned int index) const
	{
		return(native[index]);
	}
};

#include "vec4.inl"
