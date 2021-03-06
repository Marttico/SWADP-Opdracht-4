#ifndef _USERINTERFACE_
#define _USERINTERFACE_
#include <iostream>
#include "Observer.h"

using namespace std;

class Machine;
class UserInterface : public Observer
{
private:
	Machine* machine;

public:
	UserInterface(Machine*);
	virtual ~UserInterface();
	void TurnOn();
	void TurnOff();
	void PrintTemp();
	void update();
};

#endif