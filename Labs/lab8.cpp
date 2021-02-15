//Lab8.cpp
//Daniel Kegley
//25 September 2020
//Calls doInput and compute

#include <iostream>
#include "intio.hpp"
#include <math.h>


int doInput()
{
	return getInt();
}

int compute(int i)
{
	if (i <= 0)
	{
		return 0;
	}


	else
	{
		return pow(i, 2);
	}


}