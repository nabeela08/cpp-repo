#include <iostream>
#include <cstring>
using namespace std;

class cwh //codewithharry
{ 
protected:
    string title;
    float rating;
public:
    cwh(string s, float r)
    {
        title = s; 
        rating = r;
    }
    virtual void display() = 0; //this is called do-nothing function or pure virtual function.
};
class cwhvideo : public cwh{
    float videolength;
    public:
    cwhvideo(string s, float r, float vl): cwh(s,r){
        videolength = vl;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<endl;
        cout<<"Length of video is: "<<videolength<<" hours"<<endl;
    }
};
class cwhtext : public cwh{
    int words;
    public:
    cwhtext(string s, float r, int w): cwh(s,r){
        words = w;
    }
    void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<endl;
        cout<<"Number of words: "<<words<<endl;
    }
};

int main()
{
    string title;
    float rating, vl;
    int words;
    //for cwh video
    title = "C++ Tutorials";
    vl = 7.5;
    rating = 4;
    cwhvideo cplus(title, rating, vl);
    cplus.display();
    cout << endl;

    //for cwh text
    title = "C++ Tutorials";
    words = 1865;
    rating = 3.5;
    cwhtext cplustxt(title, rating, words);
    cplustxt.display();
    cout << endl;

    cwh *tuts[2]; //pointers array
    tuts[0]= &cplus;
    tuts[1]= &cplustxt;
    tuts[0]->display(); // this will invoke display of cwhvideo as we have used virtual method in base class.
    tuts[1]->display();

    return 0;
}
