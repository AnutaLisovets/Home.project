#include "Home.h"

class Street
{
	friend class Street;

private:
	string name;
	string material;
	int number;
	int count;
	Home* list;

public:
	Street();
	Street(string name);
	Street(string name, int number, string material, Home* list, int count);
	~Street();

	string getName();
	void setName(string name);

	string getMaterial(); //прочитать
	void setMaterial(string material);   //изменить

	int getNumber();
	void setNumber(int number);

	int getCount();

	Home getCount(int index);
	/*void add(Home home);*/

	string getInfo();
};

