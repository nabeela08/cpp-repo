#include <iostream>
using namespace std;

//Base Class
class employee
{
public:
    int id;
    float salary;
    employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
    employee(){}
};

/*Derived Class syntax
class {derived-class-name} : {{visibility-mode}} {{base-class-name}}
{
    members/meehods/etc.
}*/

/* Notes:
1. Default visibility mode is private
2. Private visibility Mode: Public members of the base class becomes private members of the derived class.
3. Public  visibility Mode: Public members of the base class becomes public  members of the derived class.
4. Private members of base class are never inherited.
*/

// Derived Class
class programmer : public employee 
//here it is public mode.
{
public:
    int languageCode = 9; //just giving a random variable
    programmer(int inpID)
    {
        id = inpID;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee nabs(1), suzz(2);
    cout << nabs.salary << endl;
    cout << nabs.id << endl;
    cout << suzz.salary << endl;
    cout << suzz.id << endl;

    programmer skillf(1);
    cout << skillf.languageCode << endl;
    skillf.getdata();

    cout << endl;
    return 0;
}