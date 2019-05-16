#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "complex.h"
#include <math.h>

using namespace std;

Complex::Complex()
{
	re = 0;
	im = 0;
}

Complex::Complex(double rr)
{
	re = rr;
	im = 0;
}

Complex::Complex(double rr, double ii)
{
	re = rr;
	im = ii;
}

double Complex::Re() const
{
	return re;
}

double Complex::Im() const
{
	return im;
}

double Complex::R() const
{
	return sqrt(pow(re, 2) + pow(im, 2));
}

double Complex::Phi() const
{
	return tan(im / re);
}

ostream& operator<<(ostream &out, const Complex &comp)
{
	out << "Re = " << comp.re << ", Im = " << comp.im;
	return out;
}

istream& operator >> (istream &in, Complex &comp)
{
	in >> comp.re >> comp.im;
	return in;
}

