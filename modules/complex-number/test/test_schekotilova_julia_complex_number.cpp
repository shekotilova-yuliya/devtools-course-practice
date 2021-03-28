
// Copyright 2021 Schekotilova Julia

#include <gtest/gtest.h>

#include "include/complex_number.h"



TEST(Schekotilova_Julia_ComplexNumberTest, Can_Be_Float) {
	// Arrange
	float re = 120.23;
	float im = 1.11;

	// Act
	ComplexNumber z(re, im);
	// Assert
	ASSERT_FLOAT_EQ(z.getIm(), im);
	ASSERT_FLOAT_EQ(z.getRe(), re);
}

TEST(Schekotilova_Julia_ComplexNumberTest, Division) {
	// Arrange
	float re = 10;
	float im = 10;
	float re1 = 5;
	float im1 = 5;
	float res = 2;
	// Act
	ComplexNumber z(re, im);
	ComplexNumber z1(re1, im1);
	// Assert
	EXPECT_EQ(res, z.getRe() / z1.getIm());
	EXPECT_EQ(res, z.getIm() / z1.getIm());
}

TEST(Schekotilova_Julia_ComplexNumberTest, Comparison) {
	// Arrange
	double re = 12.4;
	double im = 12.4;
	double re1 = 8;
	double im1 = 8;
	// Act
	ComplexNumber z1(re, im);
	ComplexNumber z2(0, 0);
	// Assert
	ASSERT_GT(z1.getRe(), z2.getRe());
	ASSERT_GT(z1.getIm(), z2.getIm());
}