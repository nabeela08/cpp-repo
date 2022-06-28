#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
    list<int> :: iterator it;
    for (it=l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1; //list of zero length
    list1.push_back(3);
    list1.push_back(10);
    list1.push_back(5);
    list1.push_back(2);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

    display(list1);

    //Sorting the list
    list1.sort();
    display(list1);

    //to remove an element from last we use pop_back
    list1.pop_back();
    display(list1);
    //to remove an element from the beginning we use pop_front 
    list1.pop_front();
    display(list1);
    // to remove a particular element we use remove and it will remove every other same element too from the list
    list1.remove(5);
    display(list1);

    list<int> list2(3); //empty list of size 5
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 25;
    iter++;
    *iter = 8;
    iter++;
    display(list2);

    //Merging of lists
    list1.merge(list2);
    cout<<"List 1 after merging: "<<endl;
    display(list1);

    //Reversing the list
    list1.reverse();
    display(list1);

    cout<<endl;
    return 0;
}