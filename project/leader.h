#include "Header.h"
#include "Home.h"

class Leader : public Home
{
private:
  
    string phoneNumber;
    string e_mail;

public:
    //defalt constructor of Home
    Leader();
    //constructor of Home with params
    Leader(string material, int countOfFloors, int numberOfInhabitants, string phoneNumber, string e_mail);
    //destructor of Home
    ~Leader();

    int getPhoneNumber();
    void setPhoneNumber(string phoneNumber);

    string getEmail();
    string setEmail(string e_mail);

    string getInfo();
};

