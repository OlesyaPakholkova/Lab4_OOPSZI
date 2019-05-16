#pragma once

#include <iostream>
#include <cmath>

class Complex
{
	double re, im;
public:
	Complex();
	Complex(double);
	Complex(double, double);

	double Re() const;
	double Im() const;
	double R() const;
	double Phi() const;

	friend std::ostream& operator<<(std::ostream &out, const Complex &comp);
	friend std::istream& operator>> (std::istream &in, Complex &comp);
	friend Complex operator+(Complex a, Complex b)
	{
		return Complex(a.Re() + b.Re(), a.Im() + b.Im());
	}
	friend Complex operator-(Complex a, Complex b)
	{
		return Complex(a.Re() - b.Re(), a.Im() - b.Im());
	}
	friend Complex operator*(Complex a, Complex b)
	{
		return Complex(a.Re()*b.Re() - a.Im()*b.Im(), a.Re()*b.Im() + a.Im()*b.Re());
	}
	friend Complex operator/(Complex a, Complex b)
	{
		return Complex((a.Re()*b.Re() + a.Im()*b.Im()) / (b.Re()*b.Re() + b.Im()*b.Im()), (a.Im()*b.Re() + a.Re()*b.Im()) / (b.Re()*b.Re() + b.Im()*b.Im()));
	}
	friend Complex sin(Complex a)
	{
		return Complex(sin(a.Re())*cosh(a.Im()),cos(a.Re())*sinh(a.Im()));
	}

};
