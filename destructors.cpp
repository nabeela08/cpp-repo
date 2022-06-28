 #include <iostream>
using namespace std;

int count = 0; // global variable

class num
{
public:
    num() //constructor
    {
        count++;
        cout << "This is the time when constructor is called for object number : " << count << endl;
    }
    ~num() //destructor - it never take san argument nor does it return any value
    {
        cout << "This is the time when destructor is called for object number : " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function." << endl;
    cout << "Creating first object n1" << endl;
    num n1;

    //creating a block
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n3, n2;
        cout << "Exiting the block." << endl;
    }
    cout << "Back to main." << endl;

    cout << endl;
    return 0;
}