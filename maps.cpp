#include<iostream>
#include<map>
#include<string>
using namespace std;
//map is an associative array

int main()
{
    map<string, int> marksmap;
    marksmap["Nabeela"] = 85;
    marksmap["Suzain"] = 92;
    marksmap["Faizah"] = 95;

    map <string, int> :: iterator itr;
    for ( itr = marksmap.begin(); itr!=marksmap.end() ; itr++)
    {
        cout<<(*itr).first<<" : "<<(*itr).second<<endl;
    }

    marksmap.insert({{"Ghazal", 68}, {"Nida", 100}});
    for(itr=marksmap.begin(); itr!=marksmap.end(); itr++){
        cout<<(*itr).first<<" : "<<(*itr).second<<endl;
    }

    cout<<endl;
    return 0;
}