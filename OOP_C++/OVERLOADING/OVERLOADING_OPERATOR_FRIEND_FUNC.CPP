#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
class binary{
    int x,y;
    public:
    binary(int a=0,int b=0)//parametrize constructor
    {
        x=a;
        y=b;
    }
    binary operator + (binary c2)
    {
        binary c3;
        c3.x=x+c2.x;
        c3.y=y+c2.y;
        return c3; 

    }
    void print()
    {
        cout<<x<<','<<y<<endl;
    }
    friend binary operator+(int n,binary c1);
};
binary operator+(int n,binary c1)
{
    binary c3;
    c3.x=c1.x+n;
    c3.y=c1.y+n;
    return c3;
}
void main()
{
    binary c1(3,1),c2(1,5),c3;
    c3=c1.operator+(c2);//c3=c1.operator+(c2) == c3=c1+c2;//c = a.operator + (b);
    c3.print();
    c3=c1+10;
    c3.print();
    c3=10+c1;
    c3.print();
}