#include<iostream>
using namespace std;
/* syntax-
template <class T1, class T2>
class nameofclass{
    body
}
*/
template<class T1, class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main()
{
    myclass<string, int> student("Nabeela", 406);
    student.display();
    
    cout<<endl;
    return 0;
}