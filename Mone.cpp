#include "Mone.h"
#include "TSensor.h"

Mone::Mone():ts(new TSensor()) {

}

Mone::~Mone() {
	delete(ts);
}

TSensor* Mone::tsensor() {
	return ts;
}

void Mone::start() {
	status = true;
}

void Mone::stop() {
	status = false;
}