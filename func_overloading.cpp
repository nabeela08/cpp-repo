#include<iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"Sum with 2 arguments."<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"Sum with 3 arguments."<<endl;
    return a+b+c;
}

double volume (double radius, double height)
{
    return 3.14*radius*radius*height;
}

double volume(double side)
{
    return side*side*side;
}

int main()
{
    cout<<"The sum of 3 and 6 is "<<sum(3, 6)<<endl;
    cout<<"The sum of 3, 7 and 4 is "<<sum(3, 7, 6)<<endl;
    cout<<"Volume of the cylinder with radius=2cm, height=6cm is "<<volume(2, 6)<<endl;
    cout<<"Volume of the cube with side=2.5 cm is "<<volume(2.5)<<endl;
    cout<<endl;
    return 0;
}
