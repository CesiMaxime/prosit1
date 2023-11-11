#include "point.h"

Point::Point(void) {
	x = 0;
	y = 0;
}

Point::Point(int para, int parb) {
	x = para;
	y = parb;
}

void Point::deplacement(int para, int parb) {
	x = para;
	y = parb;
}

int Point::getx(void) {
	return x;
}

int Point::gety(void) {
	return y;
}