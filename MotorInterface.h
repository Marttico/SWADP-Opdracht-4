#pragma once
class TSensor;
class MotorInterface
{
public:
	virtual ~MotorInterface();
	virtual TSensor* tsensor() = 0;
	virtual void start() = 0;
	virtual void stop() = 0;
};

