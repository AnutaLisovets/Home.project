#include "Leader.h"

Leader::Leader() : Home() {
	int cost = 0;
}

//constructor of Student with params
Leader::Leader(int number, string material, int countOfFloors, int numberOfInhabitants,
	int cost) : Home(number, material, countOfFloors, numberOfInhabitants) {
	this->cost = cost;
}

//destructor of Student
Leader::~Leader() {

}

int Leader::getCost() {
	return cost;
}
void Leader::setCost(int cost) {
	this->cost = cost;
}

string Leader::getInfo() {
	return Home::getInfo()
		+ "; cost = " + to_string(cost) + "$";
}



