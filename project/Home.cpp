#include "Home.h"

Home::Home() {
    material = "no material";
    countOfFloors = 1;
    numberOfInhabitants = 1;
}

//constructor of Student with params
Home::Home(string material, int countOfFloors, int numberOfInhabitants) {
    this->material = material;
    this->countOfFloors = countOfFloors;
    this->numberOfInhabitants = numberOfInhabitants;
}

//destructor of Student
Home::~Home() {

}

string Home::getMaterial() {
    return material;
}

void Home::setMaterial(string material) {
    this->material = material;
}

int Home::getCountOfFloors() {
    return countOfFloors;
}

void Home::setCountOfFloors(int countOfFloors) {
    if (countOfFloors >= 1 && countOfFloors <= 100) {
        this->countOfFloors = countOfFloors;
    }
}

int Home::getNumberOfInhabitants() {
    return numberOfInhabitants    ;
}

void Home::setNumberOfInhabitants(int numberOfInhabitants) {
    if (numberOfInhabitants >= 0 && numberOfInhabitants <= 1000) {
        this->numberOfInhabitants = numberOfInhabitants;
    }
}
string Home::getInfo() {
    return "This home made of: " + material + ", count of floors are: " + to_string(countOfFloors) + 
        ", numberOfInhabitants in this home about: " + to_string(numberOfInhabitants) + "people.";
}
/*string getStringAge() {
 return age;
}

void setStringAge(string age) {
 int number = stoi(age);
  if (number >= 15 && number <= 100) {
   this->age = age;
  }
}*/
