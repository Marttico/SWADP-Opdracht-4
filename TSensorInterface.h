#pragma once
class TSensorInterface
{
public:
	virtual ~TSensorInterface();
	virtual void read() = 0;
	virtual int retrieveWaarde() = 0;
};

