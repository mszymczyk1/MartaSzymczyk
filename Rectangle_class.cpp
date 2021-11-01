#include <iostream>

using namespace std;


class Rectangle {
    double m_length;
    double m_height;
public:
    Rectangle(double length = 1.0, double height = 1.0) {
        m_length = length;
        m_height = height; 
    }
    void setLength(double length) { m_length = length; }
    void setHeight(double height) { m_height = height; }
    double getLength() { return m_length; }
    double getHeight() { return m_height; }
    double  rectanglecircumference() {
        double circumference = 2 * m_height + 2 * m_length;
        return circumference;
    }
    double rectangleArea() {
        double area = m_height * m_length;
        return area;
    }
};

int main()
{   
    Rectangle r1(2, 2);
    cout << "Height of the rectangle: " << r1.getHeight() << endl;
    cout << "Length of the rectangle: " << r1.getLength() << endl;
    cout <<"Circumference: "<< r1.rectanglecircumference() << endl;
    cout <<"Area: " << r1.rectangleArea() << endl;
    return 0;
}