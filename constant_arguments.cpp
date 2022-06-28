#include<iostream>
#include<string>
using namespace std;

// using const we can't make any changes to our string.
int length(const string test)
{
    return test.length();
}
int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);
    cout<<"Length of string is : "<<length(str)<<endl;

    cout<<endl;
    return 0;
}