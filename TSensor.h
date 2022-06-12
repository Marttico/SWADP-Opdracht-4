#pragma once
#include "TSensorInterface.h"
#include <iostream>

using namespace std;

class TSensor : public TSensorInterface
{
private:
	int waarde;
public:
	TSensor();
	virtual ~TSensor();
	virtual void read();
	virtual int retrieveWaarde();
};

