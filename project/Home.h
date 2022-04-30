#pragma once
#include "Header.h"

class Home {
private:
	static int count;

protected:
	int number;
	string material;
	int countOfFloors;
	int numberOfInhabitants;

public:
	static const int MAX_HOME_FLOORS = 100;
	static const int MIN_HOME_FLOORS = 1;

	static const int MAX_HOME_INHABITANTS = 10000;
	static const int MIN_HOME_INHABITANTS = 20;

	//defalt constructor of Home
	Home();
	//constructor of Home with params
	Home(int number, string material, int countOfFloors, int numberOfInhabitants);
	//destructor of Home
	~Home();

	int getNumber();
	void setNumber(int number);
	string getMaterial();
	void setMaterial(string material);
	int getCountOfFloors();
	void setCountOfFloors(int countOfFloors);
	int getNumberOfInhabitants();
	void setNumberOfInhabitants(int numberOfInhabitants);

	static int getCount();

	string getInfo();

	/*string getStringAge() {
	 return age;
	}

	void setStringAge(string age) {
	 int number = stoi(age);
	  if (number >= 15 && number <= 100) {
	   this->age = age;
	  }
	}*/
};
