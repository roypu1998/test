#include "MyMatrix.h"
#include<iostream>
using namespace std;


MyMatrix::MyMatrix()
	:a11(0),a12(0),a21(0),a22(0)
{
}

MyMatrix::MyMatrix(float b11, float b12, float b21, float b22)
	:a11{ b11 },a12{ b12 },a21{ b21 },a22{b22}
{
}


MyMatrix::~MyMatrix()
{
}

MyMatrix::MyMatrix(const MyMatrix & m)
{
	this->a11 = m.a11;
	this->a12 = m.a12;
	this->a21 = m.a21;
	this->a22 = m.a22;
}

void MyMatrix::set(const MyMatrix & m)
{
	this->a11 = m.a11;
	this->a12 = m.a12;
	this->a21 = m.a21;
	this->a22 = m.a22;
}

bool MyMatrix::set(int i, int j, float num)
{
	if (i > 0 && i < 3 && j>0 && j < 3)
	{
		if (i == 1 && j == 1)
			this->a11 = num;

		if (i == 1 && j == 2)
			this->a12 = num;

		if (i == 2 && j == 1)
			this->a21 = num;

		if (i == 2 && j == 2)
			this->a22 = num;
		return true;
	}
	return false;
}

bool MyMatrix::get(int i, int j, float & num) const
{
	if (i > 0 && i < 3 && j>0 && j < 3)
	{
		if (i == 1 && j == 1)
			 num=this->a11;

		if (i == 1 && j == 2)
			 num=this->a12;

		if (i == 2 && j == 1)
			 num=this->a21 ;

		if (i == 2 && j == 2)
			num = this->a22;
		return true;
	}
	return false;
}

bool MyMatrix::is_equal(const MyMatrix & m) const
{
	if (this->a11 == m.a11 && this->a12 == m.a12 && this->a21 == m.a21 && this->a22 == m.a22)
		return true;
	return false;
}

void MyMatrix::print() const
{
	cout << this->a11 << this->a12 << endl << this->a21 << this->a22 << endl;
}

float MyMatrix::det() const
{
	float resultDet;
	resultDet = (this->a11*this->a22) - (this->a12*this->a21);
	return resultDet;
}

bool MyMatrix::is_inverse(const MyMatrix & m)
{
	if (m.a11 == this->a22 && m.a12 == -(this->a12) && m.a21 == -(this->a21) && m.a22 == this->a11)
		return true;
	return false;
}
