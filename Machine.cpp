#include "Machine.h"
#include "TSensor.h"
#include "Mone.h"
#include "Mtwo.h"

Machine::Machine() : m1(new Mone()), m2(new Mtwo()) {

}

Machine::~Machine() {
	delete(m1);
	delete(m2);
}

Mone* Machine::motor1() {
	return m1;
}
Mtwo* Machine::motor2() {
	return m2;
}

void Machine::run() {
	m1->start();
	m1->tsensor()->read();
	m2->start();
	m2->tsensor()->read();
	notify();
}
void Machine::halt() {
	m1->stop();
	m2->stop();
}