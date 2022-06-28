#include<iostream>
using namespace std;

//structure using typedaf
typedef struct employee
{  
    int id;
    char favChar;
    float salary;
} here;

int main(){
    here nabs;
    nabs.id = 25;
    nabs.favChar = 's';
    nabs.salary = 1500000;
    cout<<nabs.id<<endl;
    cout<<nabs.favChar<<endl;
    cout<<nabs.salary<<endl;

    return 0;
}