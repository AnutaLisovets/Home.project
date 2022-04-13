#pragma once
#include "Group.h"

class Manager
{

public:
	void sortByNameAcs(Group group);
	void sortByNameDesc(Group group);
	void sortByCostAcs(Group group);
	void sortByCostDesc(Group group);
	void sortByAgeAcs(Group group);
	void sortByAgeDesc(Group group);

	double calculateAvgCost(Group group);
	double calculateAvgAge(Group group);

	bool checkStudent(Group group, Student student);
};

