#include "point.h"
#include <iostream>
using namespace std;

float distance(Point parpa, Point parpb) {

	return sqrt(pow((parpb.getx() - parpa.getx()), 2) + pow((parpb.gety() - parpa.gety()), 2));
}
