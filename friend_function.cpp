#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    
    friend complex sumComplex(complex num1, complex num2); //it just allow the non members of class to do anything with their private members

    void printNum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex num1, complex num2){
    complex num3;
    num3.setNum((num1.a + num2.a) , (num1.b + num2.b));
    //it will throw an error as a and b are private members of class therefore sumComplex can't access it because it is an outside function.

    // to fix this error we can make this function a friend of class.
    return num3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNum(2,5);
    c1.printNum();
    c2.setNum(8,5);
    c2.printNum();

    sum = sumComplex(c1, c2);
    sum.printNum();

    cout << endl;
    return 0;
}

/*Properties of friend function
1. Not in the scope of class
2. Since not in the scope of class it cannot be called from object of that class. c1.sumComplex() == invalid
3. Can be called without the help of any object
4. Usually contains the obects as arguments
5. Can be declared inside public or private section of class
6. Cannot access the private members directly by their names and need object_name.member_name to access any number.
*/