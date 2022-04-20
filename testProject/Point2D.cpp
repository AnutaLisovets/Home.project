#include "Point2D.h"

Point2D::Point2D() : x(0), y(0) {}
Point2D::Point2D(int x, int y) : x(x), y(y) {}

Point2D::~Point2D() {

}

int Point2D::getX() const {
	return x;
}
void Point2D::setX() {
	this->x = x;
}

int Point2D::getY() const {
	return y;
}
void Point2D::setY() {
	this->y = y;
}

string Point2D::getInfo() {
	return "Point coordinates are: x = " + to_string(x) + ", y = " + to_string(y);
}
Point2D Point2D::sum(Point2D point) const {
	int px = x + point.x;
	int py = y + point.y;
	return Point2D(px, py);
}

Point2D Point2D::operator + (Point2D point) const {
	int px = x + point.x;
	int py = y + point.y;
	return Point2D(px, py);
}

Point2D Point2D::Point2D::operator - (Point2D point) const {
	int px = x - point.x;
	int py = y - point.y;
	return Point2D(px, py);
}

int Point2D::operator * (Point2D point) const {
	int px = x * point.x;
	int py = y * point.y;
	return px + py;
}

Point2D Point2D::operator - () const {
	return Point2D(-x, -y);
}

void Point2D::operator ++() {
	++x;
	++y;
}

void Point2D::operator ++(int) {
	x++;
	y++;
}