#include "Header.h"
#include "Student.h"

class Group
{
private:
	string name;
	int count;
	Student* list;

public:
	Group();
	Group(string name);
	Group(string name, Student *list, int count);
	~Group();

	string getName(); //���������
	void setName(string name);   //��������
	
	int getCount();

	Student getCount(int index);
	void add(Student student);

	string getInfo();
};

