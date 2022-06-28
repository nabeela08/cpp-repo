#include <iostream>
using namespace std;

template <class T>
class nabs
{
public:
    T data;
    nabs(T a)
    {
        data = a;
    }
    void display();
};

// mmeber function template
template <class T>
void nabs<T>::display()
{
    cout << "Value in data is " << data << endl;
}

int main()
{
    nabs<int> n(250800);
    n.display();
    nabs<float> n2(25.08);
    n2.display();

    cout << endl;
    return 0;
}