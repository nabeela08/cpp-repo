#include <iostream>
using namespace std;

class shopItem
{
    int id;
    float price;
public:
    void setdata(int a, double b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "Code of this item is: " << id << endl;
        cout << "Price of this item is: " << price << endl;
    }
};

int main()
{
    int size; 
    int id, price, i;
    cout<<"How many items are bought: ";
    cin>>size;
    // int *ptr = &size;
    // int *ptr = new int[35];
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter ID and price of item "<<(i+1)<<endl;
        cin>>id>>price;
        ptr->setdata(id, price);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<endl;
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
    cout << endl;
    return 0;
}