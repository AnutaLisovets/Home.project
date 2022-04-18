#include "Header.h"

class Home {
private:
    string material;
    int countOfFloors;
    int numberOfInhabitants;

public:
    //defalt constructor of Home
    Home();
    //constructor of Home with params
    Home(string material, int countOfFloors, int numberOfInhabitants);
    //destructor of Home
    ~Home();
    string getMaterial();
    void setMaterial(string material);
    int getCountOfFloors();
    void setCountOfFloors(int countOfFloors);
    int getNumberOfInhabitants();
    void setNumberOfInhabitants(int numberOfInhabitants);

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
