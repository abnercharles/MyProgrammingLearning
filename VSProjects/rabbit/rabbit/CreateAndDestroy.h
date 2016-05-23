#pragma once
#include <iostream>
class CreateAndDestroy
{
private:
	int objID;

public:
	CreateAndDestroy(int);
	CreateAndDestroy(const CreateAndDestroy &);
	~CreateAndDestroy();
};

CreateAndDestroy::CreateAndDestroy(int n):objID(n)
{
	std::cout << "Constructor: " << objID << std::endl;
}

CreateAndDestroy::CreateAndDestroy(const CreateAndDestroy &obj)
{
	objID = obj.objID;
	std::cout << "CopyConstructor: " << objID << std::endl;
}

CreateAndDestroy::~CreateAndDestroy()
{
	std::cout << "Destructor: " << objID << std::endl;
}
