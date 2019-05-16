
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "complex.h"
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	double re, im;
	cout << "Input Re: ";
	cin >> re;
	cout << "Input Im: ";
	cin >> im;
	Complex z(re, im);
	Complex i(0, 1);
	Complex y = 2 * z + sin(z - i);
	cout << y.Re() << ", " << y.Im() << endl;
	_getch();
}
