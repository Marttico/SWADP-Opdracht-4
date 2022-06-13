#ifndef _MONE_
#define _MONE_
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

#endif