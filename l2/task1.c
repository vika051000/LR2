#include <math.h>
#include <stdbool.h>


_Bool isInArea(double x, double y)
{
	if (pow(x, 2) + pow(y, 2) >= 1 && x >= 0 && y >= 0 && y <= 1 && x <= 1)
		return true;
	else
		return false;
}