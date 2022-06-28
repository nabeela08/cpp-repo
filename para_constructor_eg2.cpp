#include <iostream>
#include <cmath>
using namespace std;

class point
{
    double x, y;
public:
    point(double a, double b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The point is : (" << x << "," << y << ")" << endl;
    }
    friend double distance(point p1, point p2);
};

double distance(point p1, point p2)
{
    double res;
    res = pow((pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2)), 0.5);
    return res;
}

int main()
{
    double x, y;
    cout << "Enter x1 : ";
    cin >> x;
    cout << "Enter y1 : ";
    cin >> y;
    point p1(x, y);
    cout << endl;

    cout << "Enter x2 : ";
    cin >> x;
    cout << "Enter y2 : ";
    cin >> y;
    point p2(x, y);
    cout << endl;

    cout << "The distance between them is " << distance(p1, p2) << endl;

    cout << endl;
    return 0;
}