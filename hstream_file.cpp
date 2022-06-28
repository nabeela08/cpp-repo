#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //writing in a file with hout stream
    ofstream hout("file_io.txt");
    cout<<"Enter your name:  ";
    string name;
    cin>>name;
    hout<<name; 
    hout.close(); 

    //reading a file with hin stream
    ifstream hin("file_io.txt");
    string content;
    hin>>content;
    cout<<"The content of the file is: "<<content;
    hin.close();

    cout<<endl;
    return 0;
}
