#include <iostream>
#include <vector>
using namespace std;
// vector is a library that contains pre-defined class templates for working with the vector. an array we can say.

template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    //ways to create a vector
    vector<int> vec1; //zero length vector
    // vector<char> vec2(4); //4 element character vector
    // vector<char> vec3(vec2); //4 element character vector from vec2
    // vector<int> v(4, 3); //4 element vector whose all elements are 3. 
    // // display(vec1);
    int num, size=3;
    cout<<"How many vectors you want? "<<endl;
    cin>>size;
    for (int i = 1; i < 3; i++)
    {
        cout << "Enter a number to add to this vector" << endl;
        cin>>num;
        vec1.push_back(num); //push_back method is used to enter the elements into the vector starting from the index.
    }
    cout << endl;
    vec1.pop_back(); //removes one element from last.
    display(vec1);

    //Iterator
    vector<int> :: iterator iter = vec1.begin();  // iterator will create a pointer, and begin() method will give the address of starting element of the vector.
    vec1.insert(iter,406);
    display(vec1);

    vec1.insert(iter+2, 3, 1);
    // here 3 copies of 1 will get inserted at position iter+2
    display(vec1);

    cout << endl;
    return 0;
}