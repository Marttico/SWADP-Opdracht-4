#include "UserInterface.h"
#include "Machine.h"
#include "TSensor.h"
UserInterface::UserInterface(Machine* sj):Observer(sj),machine(sj) {

}

UserInterface::~UserInterface() {

}

void UserInterface::TurnOn() {
	machine->run();
}

void UserInterface::TurnOff() {
	machine->halt();
}

void UserInterface::PrintTemp() {
	cout << "Motor 1 Temperature: " << dynamic_cast<Machine*>(getSubject())->motor1()->tsensor()->retrieveWaarde() << endl;
	cout << "Motor 2 Temperature: " << dynamic_cast<Machine*>(getSubject())->motor2()->tsensor()->retrieveWaarde() << endl;
}

void UserInterface::update() {
	PrintTemp();
}