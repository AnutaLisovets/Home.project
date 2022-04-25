#include "Header.h"
#include "Home.h"


class SuperLeader : public Home
{

private:

	string abiluty;

public:
	//defalt constructor of Home
	SuperLeader();
	//constructor of Home with params
	SuperLeader(string material, int countOfFloors, int numberOfInhabitants, string abiluty);
	//destructor of Home
	~SuperLeader();

	string getAbiluty();
	void setAbiluty(string abiluty);

	string getInfo();


};

