#include "SuperLeader.h"
#include "Home.h"

SuperLeader::SuperLeader() {
    setMaterial("no material");
    setCountOfFloors(1);
    setNumberOfInhabitants(1);
}

//constructor of Student with params
SuperLeader::SuperLeader(string material, int countOfFloors, int numberOfInhabitants, string abiluty) {
    setMaterial("no material");
    setCountOfFloors(1);
    setNumberOfInhabitants(1);
    setAbiluty("no abiluty");
}

//destructor of Student
SuperLeader::~SuperLeader() {

}

string SuperLeader::SuperLeader() {
    return material;
}

void SuperLeader::setMaterial(string material) {
    this->material = material;
}

int SuperLeader::getCountOfFloors() {
    return countOfFloors;
}

void SuperLeader::setCountOfFloors(int countOfFloors) {
    if (countOfFloors >= 1 && countOfFloors <= 100) {
        this->countOfFloors = countOfFloors;
    }
}

int SuperLeader::getNumberOfInhabitants() {
    return numberOfInhabitants;
}

void SuperLeader::setNumberOfInhabitants(int numberOfInhabitants) {
    if (numberOfInhabitants >= 0 && numberOfInhabitants <= 1000) {
        this->numberOfInhabitants = numberOfInhabitants;
    }
}

string getAbiluty() {
    return abiluty;
}
void setAbiluty(string abiluty) {
    this->abiluty = abiluty;
}

string SuperLeader::getInfo() {
    return "";
}


