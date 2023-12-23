#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
// ex1
class stu{
    public:
    void address(){
        cout<<this;
    }
};
// ex2
class student{
    int id;
    public:
    void set_id(int id)
    {
       this->id = id;//if you remove this-> will print garbage value
    }
    void print_id()
    {
        cout<<"ID IS "<<id<<endl;
    }
}
void main(){
    // ex1
    stu a,b,c;
    cout<<"ADDRESS OF A\n";
    a.address();
    cout<<"\n&a\t\t\t"<<&a<<endl;
    cout<<"ADDRESS OF B\n";
    b.address();
    cout<<"ADDRESS OF C\n";
    c.address();
    // ex2
    student st;
    st.set_id(10);
    st.print_id();
    }