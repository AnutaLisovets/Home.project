#include "Header.h"
#include "Home.h"

class Leader : public Home
{
private:
    int cost;

public:
    //defalt constructor of Home
    Leader();
    //constructor of Home with params
    Leader(int number, string material, int countOfFloors, int numberOfInhabitants, int cost);
    //destructor of Home
    ~Leader();

    int getCost();
    void setCost(int cost);

    string getInfo();
};

