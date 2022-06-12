#include "Mtwo.h"
#include "TSensor.h"

Mtwo::Mtwo() :ts(new TSensor()) {

}

Mtwo::~Mtwo() {
	delete(ts);
}

TSensor* Mtwo::tsensor() {
	return ts;
}

void Mtwo::start() {
	status = true;
}

void Mtwo::stop() {
	status = false;
}