#include<iostream>
using namespace std;

int main(){
    int marks[] = {22, 25, 19, 10};
    //  cout<<marks[0]<<endl;
    //  cout<<marks[1]<<endl;
    //  cout<<marks[2]<<endl;
    //  cout<<marks[3]<<endl;

    for(int i=0; i<4; i++){
        cout<<"Value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    //Pointers and Arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"Value of marks[0] is "<<*p<<endl;
    // cout<<"Value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"Value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"Value of marks[3] is "<<*(p+3)<<endl;
    return 0;
} 