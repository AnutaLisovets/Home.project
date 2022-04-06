#include "Group.h"

Group::Group() {
	name = "no name";
	count = 0;
	list = NULL;
}
Group::Group(string name) {
	this->name = name;
	count = 0;
	list = NULL;
}
Group::Group(string name, Student *list, int count) {
	this->name = name;
	this->list = list;
	this->count = count;
}
Group::~Group() {
	if (list != NULL) {
		delete[] list;
	}
}

string Group::getName() {				//прочитать
	return name;
}
void Group::setName(string name) {		//изменить
	this->name = name;
}

int Group::getCount() {
	return count;
}

Student Group::getCount(int index) {
	if (list != NULL || index < 0 || index >= count) {
		return Student("", 0, 0);
	}

	return list[index];
}

void Group::add(Student student) {
	if (list = NULL) {
		list = new Student[1];
		count = 1;
		list[0] = student;
	}
	else {
		Student *temp = new Student[count + 1];
		int i = 0;
		for (; i < count; i++) {
			temp[i] = list[i];
		}
		temp[i] = student;
		delete[] list;
		list = temp;
		count++;
	}
}

string Group::getInfo() {
	if (list == NULL) {
		return "Group" + name + "is empty.";
	}

	string msg = "Students of group " + name + ":\n";
}


