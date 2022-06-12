#pragma once
#include "MtwoInterface.h"
class TSensor;
class Mtwo : public MtwoInterface
{
private:
	TSensor* ts;
	bool status;
public:
	Mtwo();
	virtual ~Mtwo();
	virtual TSensor* tsensor();
	virtual void start();
	virtual void stop();
};

