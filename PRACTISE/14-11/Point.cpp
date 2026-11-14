#include "Point.h"

int main() {
	Point p(1.5, 2.5, 3.5);
	p.saveToFile("point.txt");
	Point p2;
	p2.loadFromFile("point.txt");
	p2.printData();
	return 0;
}	