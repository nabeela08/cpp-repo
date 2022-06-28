#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interestrate;
    double returnvalue;

public:
    bankdeposit() {} //blank default constructor
    bankdeposit(int p, int y, float r); // r can be a value like 0.4
    bankdeposit(int p, int y, int r);   // r can be a value like 11, in terms of percentage
    void show();
};

bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = double(principal);
    for (int i = 0; i < y; i++)
    {
        // returnvalue += returnvalue * r;
        returnvalue = returnvalue * (1 + r);
    }
}

bankdeposit :: bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = (r / 100); // as value will be given in terms of percentage.
    returnvalue = double(principal);
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}

void bankdeposit :: show()
{
    cout << "Principal amount was " << principal << endl;
    cout << "Return value on your principal is " << returnvalue << " after " << years << " years." << endl;
}

int main()
{
    bankdeposit b1, b2;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y and r : " << endl;
    cin >> p >> y >> r;
    b1 = bankdeposit(p, y, r);
    b1.show();
    cout << endl;

    cout << "Enter the value of p, y and R :" << endl;
    cin >> p >> y >> r;
    b2 = bankdeposit(p, y, R);
    b2.show();

    cout << endl;
    return 0;
}