#pragma once
class Point
{
private:
	int x;
	int y;

public:
	Point(void);
	Point(int para, int parb);
	int getx(void);
	int gety(void);
	void deplacement(int para, int parb);
};

