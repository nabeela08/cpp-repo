#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream file;
    file.open("open_eof_in_file.txt");
    file<<"This is a quote:\n";
    file<<"Better an oops, than a what if.\n";
    file.close();

    ifstream file2;
    string str1, str2;
    file2.open("open_eof_in_file.txt");
    // file2>>str1>>str2;
    //bcoz we have to extract each line one by one.

    // cout<<str1<<endl<<str2<<endl;
    //to resolve this problem we will use while loop
    while (file2.eof()==0)
    {
        getline(file2, str1);
        cout<<str1<<endl;
    }
    file2.close();
    
    cout<<endl;
    return 0;
}