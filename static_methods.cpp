#include<iostream>
using namespace std;

// we need static methods or functions to access only static varibles of other static functions.
// They can't access non-static members.
// Also such a function can run with class name only it does not necessarily require a function name to be called.

class employee
{
    int id;
    static int count; 

    public:
        void setData(void)
        {    
            cout<<"Enter the ID of employee no. "<<(count+1)<<" : ";
            cin>>id;
            count++;           
        }

        void getData(void)
        {
            cout<<"The ID of employee no. "<<count<<" is : "<<id;   
        }

        static void getCount(void)
        {
            cout<<"The Value of count is : "<<count<<endl;
            // cout<<id; //---> this will give an error because, static function can only access static members of the class.
            // they can't access non-static members.
        }
};

int employee::count;

int main()
{
    employee Ross, Phoebe, Joey;
    // Joey.id = 100; //throw error because id and cout are private class members

    Ross.setData();
    Ross.getData();
    cout << endl;
    employee :: getCount();
    cout<<endl;

    Phoebe.setData();
    Phoebe.getData();
    cout << endl;
    employee :: getCount();
    cout << endl;

    Joey.setData();
    Joey.getData();
    cout << endl;
    employee :: getCount();
    cout<<endl;

    cout<<endl;
    return 0;
}