#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    cout << "Hello World!\n" << endl;
    Point a(0, 0);
    Point *b = new Point(1, 1);
    float res = distance(a, *b);

    cout << "Distance between A et B: ";
    cout << res << "\n" << endl;

    int newx;
    int newy;
    cout << "Insert the new integer x value for the point a: ";
    cin >> newx;
    cout << "Insert the new integer y value for the point a: ";
    cin >> newy;
    a.deplacement(newx, newy);

    cout << "Insert the new integer x value for the point b: ";
    cin >> newx;
    cout << "Insert the new integer y value for the point b: ";
    cin >> newy;
    b->deplacement(newx, newy);

    res = distance(a, *b);
    cout << "Distance between A et B: ";
    cout << res << "\n" << endl;
}
