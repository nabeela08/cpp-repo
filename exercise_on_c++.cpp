#include<iostream>
#include<cmath>
using namespace std;

/*
A. Create 2 classes:
1. SimpleCalculator - takes input of 2 numbers using a utility function and performs +, -, *, / and displays the result usinng another function.
2. ScientificCalculator - takes input of 2 numbers using a utility function and performs  any four scientific operation of your choice.
3. HybridCalculator - inherit it using the above two classes.
*/

class simple_cal{
    double num1, num2;
    public:
    void get_data(){
        cout<<"Enter value of num1: ";
        cin>>num1;
        cout<<"Enter value of num2: ";
        cin>>num2;    
    }
    void display()
        {
            cout<<endl;
            cout<<"Performed Operations:"<<endl;
            cout<<num1<<" + "<<num2<<" = "<<(num1+num2)<<endl;
            cout<<num1<<" - "<<num2<<" = "<<(num1-num2)<<endl;
            cout<<num1<<" * "<<num2<<" = "<<(num1*num2)<<endl;
            cout<<num1<<" / "<<num2<<" = "<<(num1/num2)<<endl;
        }
};

class scientific_cal : public simple_cal{
    double num1, num2;
    public:
    void get_data(){
        cout<<"Enter value of num1: ";
        cin>>num1;
        cout<<"Enter value of num2: ";
        cin>>num2;    
    }
    void display2()
        {
            cout<<endl;
            cout<<"Performed Operations:"<<endl;
            cout<<num1<<"^"<<num2<<" = "<<pow(num1, num2)<<endl;
            cout<<"sin(num1) is "<<sin(num1)<<endl;
            cout<<"sin(num2) is "<<sin(num2)<<endl;
            cout<<"exp(num1) is "<<exp(num1)<<endl;
            cout<<"exp(num2)) is "<<exp(num2)<<endl;
        }
};

class hybrid_cal : public scientific_cal{};

int main()
{
    // simple_cal cal1;
    // scientific_cal cal2;
    // cal1.get_data();
    // cal1.display();
    // cout<<endl;
    // cal2.get_data();
    // cal2.display();

    hybrid_cal cal;
    cal.get_data();
    cal.display();
    cal.display2();

    cout<<endl;
    return 0;
}