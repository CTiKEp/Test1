#include "func.h"
#define _USE_MATH_DEFINES   
#include "math.h"

double Nerivn2(double x, double y)
{
	double a, c; // zminni
	a = x + 8 * y*y;
	if (a == 0)
		return 1;
	c = fabs(x - y) / a;
	if (c < 0)
		return 1;
	else
		return pow(a, 1. / 2) - pow(pow(x, 5) + x*y / pow(3 + y, 2), 1. / 3) + pow(M_E, 5 * y);
}



double Nerivn1(double m, double t, double g, double c)
{
	return  pow(m*t*g*t + fabs(c*sin(t)), 1. / 3) + sin(92* M_PI / 180);	
}


int Porivn(int a, int b)
{
	if (a < b) return 1;
	else
		if (a > b) return 2;
		else
			return 3;
}
