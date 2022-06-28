#include <iostream>
using namespace std;

// virtual base class helps in resolving ambuigity and duplication.
// student-->test-->result
// student-->sports-->result
class student
{
protected:
    int rollno;
public:
    void set_rollno(int a)
    {
        rollno = a;
    }
    void print_rollno(void)
    {
        cout << "Your roll no is " << rollno << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;
public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Result." << endl;
        cout << "Maths: " << maths << endl;
        cout << "Physics: " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;
public:
    void set_score(float pt)
    {
        score = pt;
    }
    void print_score(void)
    {
        cout << "Your PT score is  " << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;
public:
    void display(void)
    {
        total = maths + physics + score;
        print_rollno();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }
};

int main()
{
    result nabs;
    nabs.set_rollno(406);
    nabs.set_marks(90.5, 82);
    nabs.set_score(75);
    nabs.display();

    cout << endl;
    return 0;
}