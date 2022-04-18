#include "Street.h"

Street::Street() {
	string name = "no name";
	string material = "";
	int number = 0;
	int count = 0;
	list = NULL;
}
Street::Street(string name) {
	string material = "no material";
	this->name = name;
	int number = 0;
	int count = 0;
	list = NULL;
}
Street::Street(string name, int number, string material, Home* list, int count) {
	this->name = name;
	this->number = number;
	this->list = list;
	this->count = count;
	this->material = material;
}
Street::~Street() {
	if (list != NULL) {
		delete[] list;
	}
}

string Street::getName() {
	return name;
}
void Street::setName(string name) {
	this->name = name;
}

int Street::getNumber() {				//прочитать
	return number;
}
void Street::setNumber(int number) {	//изменить
	if (number > 0) {
		this->number = number;
	}
}

string Street::getMaterial() {
	return material;
}
void Street::setMaterial(string material) {
	this->material = material;
}


int Street::getCount() {
	return count;
}

Home Street::getCount(int index) {
	if (list == NULL || index < 0 || index >= count) {
		return Home("", 0, 0);
	}

	return list[index];
}

//void Street::add(Home home) {
//	if (list = NULL) {
//		list = new Home[1];
//		count = 1;
//		list[0] = home;
//	}
//	else {
//		Home* temp = new Home[count + 1];
//		int i = 0;
//		for (; i < count; i++) {
//			temp[i] = list[i];
//		}
//		temp[i] = home;
//		delete[] list;
//		list = temp;
//		count++;
//	}
//}

string Street::getInfo() {
	if (list == NULL) {
		return "Street with homes made of" + material + " material is empty.";
	}

	string msg = "Homes of" + name + "street: \n";

	for (int i = 0; i < count; i++)
	{
		msg += list[i].getInfo() + "\n";
	}

	return msg;
}


