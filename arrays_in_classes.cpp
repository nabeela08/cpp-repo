#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 0;;
public:
    void setPrice(void);
    void displayPrice(void);
};

void shop :: setPrice(void)
{
    cout << "Enter Id of your item no "<<(counter+1)<<": ";
    cin>>itemId[counter];
    cout<<"Enter price of your item: ";
    cin>>itemPrice[counter];
    counter++;
} 

void shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    shop fairprice;
    fairprice.setPrice();
    fairprice.setPrice();
    fairprice.setPrice();
    fairprice.displayPrice();

    cout << endl;

    shop big_bazaar;
    big_bazaar.setPrice();
    big_bazaar.setPrice();
    big_bazaar.displayPrice();

    cout<<endl;
    return 0;
}