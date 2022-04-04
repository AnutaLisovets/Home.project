#include "Student.h"

Student::Student() {
    name = "no name";
    age = 15;
    mark = 4;
}

//constructor of Student with params
Student::Student(string name, int age, double mark) {
    this->name = name;
    this->age = age;
    this->mark = mark;
}

//destructor of Student
Student::~Student() {

}

string Student::getName() {
    return name;
}

void Student::setName(string name) {
    this->name = name;
}

int Student::getAge() {
    return age;
}

void Student::setAge(int age) {
    if (age >= 14 && age <= 100) {
        this->age = age;
    }
}

int Student::getMark() {
    return mark;
}

void Student::setMark(double mark) {
    if (mark >= 0 && age <= 10) {
        this->mark = mark;
    }
}
string Student::getInfo() {
    return name + ": age " + to_string(age) + ": mark " + to_string(mark);
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