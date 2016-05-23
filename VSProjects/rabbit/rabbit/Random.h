//File name: Random.h
//head of a random library

#ifndef _random_h
#define _random_h

//function: RandomInit
//how to use: RandomInit()
//usage: initialize random number generator
void RandomInit();

//function: RandomInteger
//how to use: n = RandomInteger(low, high)
//usage: return a random integer from low to high
int RandomInteger(int low, int high);

//function: RandomDouble
//how to use: n = RandomDouble(low, high)
//usage: return a double real number from low to high
double RandomDouble(double low, double high);

#endif
