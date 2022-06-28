#include<iostream>
#include<fstream>
//The useful classes for working with files in c++ are fstreambase, ifstream, ofstreaam.

//In order to work with files you have to open it and there are two ways to open a file:
//1. using a constructor
//2. using mmeber function open() of the class

using namespace std;

int main()
{
    string s = "wabi-sabi";
    string s2;
    //opening file using constructor to write in it.
    // ofstream out("read_files.txt"); 
    // out<<s;
    // out.close(); //closing a file

    //opening file using constructor and reading it
    ifstream in("read_files.txt");
    // in>>s2; //but this will print just first word of the sentence
    getline(in, s2);
    cout<<s2<<endl; 

    cout<<endl;
    return 0;
}