#include <iostream>
using namespace std;

// in last program we created a counter and we made sure that for each new object of that class, that counter must start from 0.
// But there may be a situation in which we want that our counter must reatain its value between new objects we create.
// so in such a case we use static data members.
// static varible is sometimes called as class variable as it is associates with a class.

class employee
{
    int id;
    static int count;
    // it is 0 by default.

public:
    void setData(void)
    {
        cout << "Enter the ID of employee no. " << (count + 1) << " : ";
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The ID of employee no. " << count << " is " << id;
    }
};

int employee ::count;
// when we create a static variable then we also have to declare like this.
//  since, we can not initialize a static variable so we can use it to initialize one.
//  e.g. int employee :: count=1000; ---> this is initialized to 1000.

int main()
{
    employee Ross, Phoebe, Joey;
    // Joey.id = 100; //throw error because id and cout are private class members

    Ross.setData();
    Ross.getData();
    cout << endl;
    Phoebe.setData();
    Phoebe.getData();
    cout << endl;
    Joey.setData();
    Joey.getData();
    cout << endl;

    cout << endl;
    return 0;
}