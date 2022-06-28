#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void); // we cant use this in main() or any other function as it is private. It can only be used by other functions of program.
public:
    // this is the way to create methods.
    void read(void);
    void ones_compliment(void);
    void display(void);
};

int main() // driver program
{
    binary b;
    b.read();
    // b.check_bin(); will give error as it is a private class so we will use it by nesting in a func.
    b.display();
    b.ones_compliment();
    b.display();
    cout << endl;
    return 0;
}

void binary :: read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format." << endl;
        }
        exit(0);
    }
}

void binary :: ones_compliment(void)
{
    chk_bin(); //this is important. Here, I called chk_bin() inside ones()
    // this is called as nesting of member fucntions. chk_bin() will run on same object on which ones() will target, when we will use ones() in main().
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying entered binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
