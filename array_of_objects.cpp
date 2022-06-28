#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 15000;
        cout << "Enter the Id of an employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of an employee is " << id << endl;
    }
};

int main()
{
    // employee joey, rachel, monica;
    // joey.setId();
    // joey.getId();

    //but if you have many employee then it will be ideal to store them in an array
    employee central_perk[6];
    for (int i = 0; i < 6; i++)
    {
        central_perk[i].setId();
        central_perk[i].getId();
    }

    cout << endl;
    return 0;
}