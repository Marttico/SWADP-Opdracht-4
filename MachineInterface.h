#ifndef _MACHINE_INTERFACE_
#define _MACHINE_INTERFACE_

class Mone;
class Mtwo;
class MachineInterface
{
public:
	virtual ~MachineInterface();
	virtual Mone* motor1() = 0;
	virtual Mtwo* motor2() = 0;
	virtual void run() = 0;
	virtual void halt() = 0;
};

#endif