#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std; 
//ex1
class CPolygon{
    protected:
    int width,height;
    public:
    void set_values(int a,int b)
    {
        width = a;
        height = b;
    }
};
class CRectangle:public CPolygon{//here this is heritance
public:
int area()
{
    return (width* height);
}

};
class CTriangle:public CPolygon{
    public:
    int area()
    {
        return (width * height/2);
    }
};
//ex2
class A{
    int i;
    protected:
    int j;
    public:
    int k;
};
class B:public A{//inherited public member
    int x;
    public:
    int y;
    int get_i()
{
    return i;
}//cannot access private member declared in class 'A'
int get_i()
{
    return j;
}
};
//EX3
class base{
    int i;//private base
    public:
    int j,k;
    void seti(int x)
    {
        i = x;
    }
    int geti()
    {
        return i;
    }
};
class derived:private base{
    public:
    base::j;//make j public again
    base::seti;//make seti() public
    base::geti;//make geti() public
    //base::i;//illegal, you cannot elevate access .it is private
    int a;
};

void main()
{
    //ex1
    CRectangle rect;//width , height &&set_values&&area
    CTriangle trgl;//width , height &&set_values&&area
    rect.set_values(4,6);
    trgl.set_values(8,10);
    cout<<rect.area()<<endl;
    cout<<trgl.area()<<endl;
    //ex2
    //B OP;
    A OP;
    OP.i=5;//cannot access private member declared in class 'A'
    OP.j=6;//cannot access private member declared in class 'A'
    OP.k=7;
    OP.x=8;//cannot access private member declared in class 'B'
    OP.y=9;
    //EX3
    derived ob;
    ob.i=10;
    ob.j=20;//legal j is made public
    ob.k=30;//illegal k is private
    ob.a=40;//legal a is public
    ob.seti(20);
    cout<<ob.geti()<<" ";
    cout<<ob.j<<" "<<ob.a<<endl;
}