#include <iostream>
using namespace std;

template <class T>
//T is the data type it can be any data-type whether vuilt-in or user defined or may be any other class

class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    int dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // cout << endl;
    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;
    // int a = v1.dotproduct(v2);
    // cout<<a<<endl;

    vector <float> v1(3);
    v1.arr[0] = 1.2;
    v1.arr[1] = 2.6;
    v1.arr[2] = 3.3;
    vector <float> v2(3);
    v2.arr[1] = 2.1;
    v2.arr[2] = 6.2;
    v2.arr[0] = 0;
    float a = v1.dotproduct(v2);
    cout<<a<<endl;
    cout<<endl;
    return 0;
}
