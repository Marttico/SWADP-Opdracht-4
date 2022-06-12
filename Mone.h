#pragma once
#include "MoneInterface.h"
class TSensor;
class Mone : public MoneInterface
{
private:
	TSensor* ts;
	bool status;
public:
	Mone();
	virtual ~Mone();
	virtual TSensor* tsensor();
	virtual void start();
	virtual void stop();
};

