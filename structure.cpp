#include<iostream>
using namespace std;

struct employee
{  
    //data
    int id;
    char favChar;
    float salary;
};

int main(){
    struct employee nabs;
    struct employee damon;
    nabs.id = 25;
    nabs.favChar = 's';
    nabs.salary = 1500000;
    cout<<nabs.id<<endl;
    cout<<nabs.favChar<<endl;
    cout<<nabs.salary<<endl;

    return 0;
}

