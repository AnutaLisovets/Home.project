#include "Street.h"

Street::Street() {
	string name = "no name";
	int size = 0;
	list = NULL;
}
Street::Street(string name) {
	this->name = name;
	int size = 0;
	list = NULL;
}
Street::Street(string name, Home* list, int size) {
	this->name = name;
	this->list = list;
	this->size = size;
}
Street::~Street() {
	if (list != NULL) {
		delete[] list;
	}
}

void Street::setName(string name) {
	this->name = name;
}

void Street::getName(string name) {
	return name;
}

Home Street::getCount(int index) {
	if (list == NULL || index < 0 || index >= size) {
		return Home(0, "", 0, 0);
	}

	return list[index];
}

int Street::getSize() {
	return size;
}

void Street::add(Home home) {
	if (list = NULL) {
		list = new Home[1];
		list[0] = home;
		size = 1;
	}
	else {
		Home* temp = new Home[size + 1];
		int i = 0;
		for (; i < size; i++) {
			temp[i] = list[i];
		}
		temp[i] = home;
		size++;
		delete[] list;
		list = temp;
	}
}

string Street::getInfo() {
	if (list == NULL) {
		return "Street with homes named as" + name + "  is empty.";
	}

	string msg = "Homes named as " + name + " : \n";

	for (int i = 0; i < size; i++)
	{
		msg += list[i].getInfo() + "\n";
	}

	return msg;
}


