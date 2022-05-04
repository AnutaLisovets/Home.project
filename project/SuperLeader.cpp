#include "SuperLeader.h"
#include "Home.h"

SuperLeader::SuperLeader() {
	abiluty = "";
}

//constructor of Student with params
SuperLeader::SuperLeader(int number, string material, int countOfFloors, int numberOfInhabitants,
	string abiluty) :Home(number, material, countOfFloors, numberOfInhabitants) {
	this->abiluty = abiluty;
}

//destructor of Student
SuperLeader::~SuperLeader() {

}

string SuperLeader::getAbiluty() {
	return abiluty;
}

void SuperLeader::setAbiluty(string abiluty) {
	this->abiluty = abiluty;
}

string SuperLeader::getInfo() {
	return Home::getInfo()
		+ "; abiluty of this home is" + abiluty;
}


