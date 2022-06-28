#include<iostream>
using namespace std;
//union are same as struct but they provide better memory management.
typedef struct employee
{  
    int id;
    char favChar;
    float salary;
} here;

union money
{ 
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice = 34;
    m1.car = 's';
    cout<<m1.car;
    // here nabs;
    // nabs.id = 25;
    // nabs.favChar = 's';
    // nabs.salary = 1500000;
    // cout<<nabs.id<<endl;
    // cout<<nabs.favChar<<endl;
    // cout<<nabs.salary<<endl;

    return 0;
}