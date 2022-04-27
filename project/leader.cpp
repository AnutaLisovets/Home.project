#include "Leader.h"

#include "Home.h"

Leader::Leader() {
    setMaterial ("no material");
    setCountOfFloors(1);
    setNumberOfInhabitants(1);
}

//constructor of Student with params
Leader::Leader(string material, int countOfFloors, int numberOfInhabitants, string phoneNumber, string e_mail) {
    setMaterial(material);
    setCountOfFloors(countOfFloors);
    setNumberOfInhabitants(numberOfInhabitants);
    setPhoneNumber(phoneNumber);
    setEmail(e_mail);
}

//destructor of Student
Leader::~Leader() {

}

string Leader::getInfo() {
    return "";
}



