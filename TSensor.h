#ifndef _TSENSOR_
#define _TSENSOR_
#include <iostream>
#include "TSensorInterface.h"

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

#endif