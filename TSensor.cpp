#include "TSensor.h"
TSensor::TSensor():waarde(0) {

}

TSensor::~TSensor() {

}

void TSensor::read() {
	cout << "insert temperature:" << endl;
	cin >> waarde;
}

int TSensor::retrieveWaarde() {
	return waarde;
}


