#ifndef _TSENSOR_INTERFACE_
#define _TSENSOR_INTERFACE_

class TSensorInterface
{
public:
	virtual ~TSensorInterface();
	virtual void read() = 0;
	virtual int retrieveWaarde() = 0;
};

#endif