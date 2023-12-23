#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
//ex const object
class time{
    private:
    int h,m,s;
    public:
    void print() const{//const func const void print(){error const should be  on left not right }
        cout<<"THE TIME = "<<h<<":"<<m<<s<<endl;
    }
    time(int i,int j,int k)
    {
        h = i;
        m = j;
        s = k;

    }
};
void main()
{
    // ex 
    time noon(12,5,9);//const object
    noon.print();//error must const before time
    // ex 
    const time noon(12,5,9);//const object
    noon.print();
//when you define const object can access const func only
//when you define object can access const func or not const func (you can access any func)
}