#include "iostream"
#include "Circle.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int radius = 5;
    cout << "Circle's radius = ";
    // cin >> radius;

    Circle c = Circle(radius);

    cout << "Area of the circle = " << c.getArea() << endl;
    cout << "Diameter of the circle = " << c.getDiameter() << endl;
    cout << "Circumference of the circle = " << c.getCircumference() << endl;

    return 0;
}