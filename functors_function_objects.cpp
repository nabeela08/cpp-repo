#include <iostream>
#include<functional>
#include <algorithm>
using namespace std;

// Function objects, also known as functors are the function wrapped in a class so that is available like an object.

int main()
{
    int arr[] = {1, 5, 25, 8, 31, 26};
    sort(arr, arr+4); //this will sort first 4 elements of array in acsending order.
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    //to sort in descending order we have to pass a functional object in sort method.
    sort(arr, arr+4, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    cout << endl;
    return 0;
}