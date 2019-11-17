#pragma once

#define VEC2_BASIC_CHECKS(v) \
	EXPECT_FLOAT_EQ(v.x, v[0]); \
	EXPECT_FLOAT_EQ(v.y, v[1])

#define VEC3_BASIC_CHECKS(v) \
	EXPECT_FLOAT_EQ(v.x, v[0]); \
	EXPECT_FLOAT_EQ(v.y, v[1]); \
	EXPECT_FLOAT_EQ(v.z, v[2])

#define VEC4_BASIC_CHECKS(v) \
	EXPECT_FLOAT_EQ(v.x, v[0]); \
	EXPECT_FLOAT_EQ(v.y, v[1]); \
	EXPECT_FLOAT_EQ(v.z, v[2]); \
	EXPECT_FLOAT_EQ(v.w, v[3])
