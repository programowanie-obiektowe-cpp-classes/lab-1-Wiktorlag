#include <iostream>
using namespace std;

class Wektor2D
{
private:
    double x;
    double y;

public:
    Wektor2D()
    {
        x = 0;
        y = 0;
    }

    Wektor2D(double a, double b)
    {
        x = a;
        y = b;
    }

    void setX(double a) { x = a; }

    void setY(double a) { y = a; }

    double getX() { return x; }

    double getY() { return y; }
};
Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    return Wektor2D(v1.getX() + v2.getX(), v1.getY() + v2.getY());
}

double operator*(Wektor2D v1, Wektor2D v2)
{
    return (v1.getX() * v2.getX() + v1.getY() * v2.getY());
}