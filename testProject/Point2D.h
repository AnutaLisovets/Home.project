#pragma once
#include "Header.h"

class Point2D
{
private:
	int x;
	int y;
public:
	Point2D();
	Point2D(int x, int y);
	~Point2D();

	int getX() const;
	void setX();

	int getY() const;
	void setY();

	Point2D sum(Point2D point) const;
	Point2D operator + (Point2D point) const;
	Point2D operator - (Point2D point) const;
	int operator * (Point2D point) const;
	Point2D operator - () const;
	//prefix ++
	void operator ++();
	//postfix ++ (^)
	void operator ++(int);

	string getInfo();

};

