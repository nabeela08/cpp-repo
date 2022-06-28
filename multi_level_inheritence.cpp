#include <iostream>
using namespace std;

class student //base class
{
protected:
    int rollno;
public:
    void set_rollno(int);
    void get_rollno(void);
};

void student :: set_rollno(int r){
    rollno = r;
}
void student :: get_rollno(){
    cout<<"The roll number is "<<rollno<<endl;
}

class exam : public student //derived class derived from base class
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam :: set_marks(float m1, float m2){
    maths =  m1;
    physics = m2;
}
void exam :: get_marks(){
    cout<<"The marks obtained in maths are "<<maths<<endl;
    cout<<"The marks obtained in physics are "<<physics<<endl;
}

class result : public exam //derived from former derived class
{
    float percentage;
    public:
    void display(){
        get_rollno();
        get_marks();
        cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        //it is possible to access the maths and physics because they are the protected members of exam class thus they are also the protected members of result class
    }
};

int main()
{
    result damon;
    damon.set_rollno(18);
    damon.set_marks(85.0, 90.5);
    damon.display();

    cout << endl;
    return 0;
}
/* Notes:
If we are inheriting from A to C using B then [A-->B-->C]
A is base class for B and B is base class for C.*/