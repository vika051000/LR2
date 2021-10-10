#include <math.h>

double f(double x)
{
	return x <= -4 ? sqrt(pow(x, 2) + 4) : cos(abs(2 + x));
}
