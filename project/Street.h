#include "Home.h"

class Street
{
	friend class Manager;

private:
	string name;
	int size;
	Home* list;

public:
	Street();
	Street(string name);
	Street(string name, Home* list, int size);
	~Street();

	void add(Home home);
	Home getCount(int index); /*void add(Home home);*/
	int getSize();
	string getName();
	void setName(string name);

	string getInfo();
};

