#include<iostream>
using namespace std;

class c2;

class c1
{
    
    int val1;
    public:
        void intdata(int a)
        {
            val1 = a;
        }
        void display(void)
        {
            cout<<val1<<endl;
        }
    friend void swap(c1 &, c2 &); 
};

class c2
{
    int val2;
    public:
        void intdata(int a)
        {
            val2 = a;
        }
        void display(void)
        {
            cout<<val2<<endl;
        }
    friend void swap(c1 &, c2 &);
};

void swap(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 o1;
    c2 o2;
    o1.intdata(8);
    o2.intdata(25);
    
    o1.display();
    o2.display();

    swap(o1, o2);
    cout<<endl;

    cout<<"The values after the exchange becomes: "<<endl;
    o1.display();
    o2.display();

    cout<<endl;
    return 0;
}