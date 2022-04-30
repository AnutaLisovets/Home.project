#include "Home.h"

int Home::count = 0;

int Home::getCount() {
	return count;
}

Home::Home() {
	count++;
	material = "no material";
	countOfFloors = 1;
	numberOfInhabitants = 1;
}

//constructor of Student with params
Home::Home(int number, string material, int countOfFloors, int numberOfInhabitants) {
	count++;
	this->material = material;
	this->countOfFloors = countOfFloors;
	this->numberOfInhabitants = numberOfInhabitants;
}

//destructor of Student
Home::~Home() {
	count--;
}


int Home::getNumber() {
	return number;
}
void Home::setNumber(int number) {
	this->number = number;
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
	if (countOfFloors >= MIN_HOME_FLOORS && countOfFloors <= MAX_HOME_FLOORS) {
		this->countOfFloors = countOfFloors;
	}
}

int Home::getNumberOfInhabitants() {

	return numberOfInhabitants;
}

void Home::setNumberOfInhabitants(int numberOfInhabitants) {
	if (numberOfInhabitants >= MIN_HOME_INHABITANTS && numberOfInhabitants <= MAX_HOME_INHABITANTS) {
		this->numberOfInhabitants = numberOfInhabitants;
	}
}
string Home::getInfo() {
	return "This home made of: " + material + ", number of hme is:" + to_string(number) +
		", count of floors are: " + to_string(countOfFloors) +
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

