#ifndef _MOTOR_INTERFACE_
#define _MOTOR_INTERFACE_

class TSensor;
class MotorInterface
{
public:
	virtual ~MotorInterface();
	virtual TSensor* tsensor() = 0;
	virtual void start() = 0;
	virtual void stop() = 0;
};

#endif