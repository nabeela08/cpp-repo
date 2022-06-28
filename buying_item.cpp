#include<iostream>
using namespace std;

int main(){
    string item;
    double price;
    int quantity;
    double total;

    cout<<"Which item you wanna buy?\n";
    getline(cin, item);
    cout<<"What is its price?\n";
    cin>>price;
    cout<<"How many you wanna buy?\n";
    cin>>quantity;
    cout<<endl;

    total = price*quantity;
    cout<<"Your total is: Rs."<<total<<endl;
    return 0;
}