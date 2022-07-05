/************************************************
** Author: Andrea Hayes
** Date: October 19, 2020
** Module 15 - Inheritance, Polymorphism, and Virtual Functions
*************************************************/

#include <iostream>
#include <iomanip>

using namespace std;
// Abstract Base Class
class BasicShape
{
private:
    double area = 0;

public:
    double getArea() {
        return area;
    }
    virtual void calcArea() = 0;
    void setArea(double a) {
        area = a;
    }
};
// Class with variables, overridden function, getters and setter for Circle
class Circle: public BasicShape {
private:
    long centerX, centerY;
    double radius;
public:
    Circle(long cX, long cY, double r) {
        centerX = cX;
        centerY = cY;
        radius = r;
        calcArea();
    }

    long getCenterX() {
        return centerX;
    }
    long getCenterY(){
        return centerY; }

    void calcArea() {
        double a = 3.14159 * radius * radius;
        setArea(a);
    }
};
// Class with variables, overridden function, getters and setter for Rectangle
class Rectangle : public BasicShape {
private:
    long length, width;
public:
    Rectangle(long l, long w) {
        length = l;
        width = w;
        calcArea();
    }
    long getLength() {
        return length;
    }
    long getWidth() {
        return width;
    }
    void calcArea() {
        long a = length * width;
        setArea(a);
    }
};

int main() {
    // Get Input and Display Results 
    long cX, cY, r, l, w;
    cout << "Enter the x coordiate of the circle's center: ";
    cin >> cX;
    cout << "Enter the y coordiate of the circle's center: ";
    cin >> cY;
    cout << "Enter the radius: ";
    cin >> r;
    Circle theCircle(cX, cY, r);
    cout << "The area of the circle is: " << theCircle.getArea()<< endl;
    cout << endl;

    cout << "Enter the length of the regtangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;
    Rectangle theRectangle(l, w);
    cout << "The area of the rectangle is: " << theRectangle.getArea() << endl;
    return 0;
}



