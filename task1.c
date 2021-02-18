#include <stdio.h> 
#include <math.h> 

_Bool isInArea(double x, double y)
{
	if (x <= 1 && y <= 1)
		if ((pow(x,2)+pow(y,2))>=1)
			return(1);
		else
			return(0);
	else
		return(0);
}