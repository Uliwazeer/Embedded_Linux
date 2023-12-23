#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
// ex1
class myclass{
    int a,b;
    public:
    myclass(int i,int j)
    {
        a=i;
        b=j;
    }
    friend int sum(myclass ob);//prototype 
};
int sum(myclass ob)
{
    return ob.a + ob.b;
}
// ex2 
class CRectangle
{
    private:
    int width,height;
    friend CRectangle duplicate(CRectangle); 
    public:
    void set_values(int,int);
    int area(void)
    {
        return (width * height);
    }

};
void CRectangle::set_values(int a,int b)
{
    width = a;
    height = b;
}
CRectangle duplicate(CRectangle r)
{
    CRectangle t;
    t.width = r.width * 2;
    t.height = r.height * 2;
    return t;
}
// ex3 use 2 class
class tri;
class CRectangle
{
    int width,height;
    public:
    void set_values(int a,int b)
    {
        width = a;
        height = b;
    }
    friend int sum(tri t,CRectangle r);

};
class tri
{
    int w,h;
    public:
    tri(int a,int b)
    {
        w=a;
        h=b;
    }
    friend int sum(tri t,CRectangle r);
};
int sum(tri t,CRectangle r)//this func is friend for more than class
{
    return t.w + r.width;
}
// ex4
class CSquare;//hint
class CRectangle
{
    int width;height;
    public:
    int area()
    {
        return (width * height);
    }
    void convert(CSquare);
};
class CSquare
{private:
int side;
public:
void set_values(int x)
{
    side = x;

}
friend class CRectangle;

};
void CRectangle::convert(CSquare a)
{
    width = a.side;
    height = a.side;

}
void main()
{
    // ex1
    myclass o(10,20);
    cout<<sum(o)<<endl;
    // ex2  
    CRectangle rect,rectb;
    rect.set_values(5,6);
    cout<<"AREA BEFORE DUPLICATE = "<<rect.area()<<endl;
    rectb = duplicate(rect);
    cout<<"AREA AFTER DUPLICATE = "<<rectb.area()<<endl;
    // ex3
    CRectangle r;
    r.set_values(4,9);
    tri l(8,9);
    cout<<sum(l,r)<<endl;
    // ex4
    CSquare sqr;
    CRectangle rect;
    sqrt.set_values(4);
    rect.convert(sqrt);
    cout<<rect.area()<<endl;

}