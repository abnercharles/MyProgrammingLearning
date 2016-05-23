//File name: Random.cpp
//this file implement Random library

#include <cstdlib>
#include <ctime>
#include "Random.h"
#include "stdio.h"

//functino RandomInit
//get the system time for the seed of random number
void RandomInit()
{
	srand(time(NULL));
}

//function RandomInteger
//this function divide range 0 to RAND_MAX into high-low+1 parts
//if the random number in the first interval, return the low, elif in the last interval ,return high;
//else return low+i
int RandomInteger(int low, int high)
{
	return(low + (high - low + 1)*rand() / (RAND_MAX + 1));
}

//function RandomDouble
double RandomDouble(double low, double high)
{
	double d = (double)rand() / (RAND_MAX + 1);
	return ((low + (high - low + 1))*d);
}