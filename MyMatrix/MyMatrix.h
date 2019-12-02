#pragma once
#include<iostream>
using namespace std;
class MyMatrix
{
private:
	float a11, a12, a21, a22;
public:
	MyMatrix();
	MyMatrix(float b11, float b12, float b21, float b22);
	~MyMatrix();
	MyMatrix(const MyMatrix& m);
	void set(const  MyMatrix& m);
	bool set(int i, int j, float num);
	bool get(int i, int j, float &num) const;
	bool is_equal(const MyMatrix &m) const;
	void print() const;
	float det() const;	
	bool is_inverse(const MyMatrix &m);
};

