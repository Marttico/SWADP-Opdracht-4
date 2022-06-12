#include "MachineInterface.h"
#include "Observer.h"
#include "Mone.h"
#include "Mtwo.h"

class Machine : public MachineInterface, public Subject
{
private:
	Mone* m1;
	Mtwo* m2;
public:
	Machine();
	virtual ~Machine();
	virtual Mone* motor1();
	virtual Mtwo* motor2();
	virtual void run();
	virtual void halt();
};

