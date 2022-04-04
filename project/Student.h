#include "Header.h"

class Student {
private:
    string name;
    int age;
    double mark;

public:
    //defalt constructor of Student
    Student();
    //constructor of Student with params
    Student(string name, int age, double mark);
    //destructor of Student
    ~Student();
    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
    int getMark();
    void setMark(double mark);
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
