#ifndef _array_h
#define _array_h

struct DoubleArray
{
	int low;
	int high;
	double * storage;

	bool initialize(int low, int high);
	bool insert(int index, double value);
	bool fatch(int index, double &value);
	void cleanUp();
};

#endif