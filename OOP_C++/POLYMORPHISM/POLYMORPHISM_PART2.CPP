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
        height =b;
    }
};
class CRectangle:public CPolygon{
    public:
    int area(){return (width * height);}
};
class CTriangle:pub CPolygon{
    public:
    int area(void)
    {
        return (width * height / 2);
    }
};
//ex2
class CPolygon{
    protected:
    int width,height;
    public:
    void set_values(int a,int b)
    {
        width = a;
        height = b;
    }
    virtual int area()
    {
        return (0);
    }
};
class CTriangle:public CPolygon{
    public:
    int area(void)
    {
        return (width * height/2);
    }
};
void main()
{
    // ex1
    CRectangle rect;
    CTriangle trgl;
    CPolygon * p1,*p2;//here its polymorphism
    p1 = &rect;
    p2 = &trgl;
    p1->set_values(4,5);
    p2->set_values(9,7);
    //cout<<p1->area()<<endl;//error func area must be in base in class
    cout<<rect.area()<<endl;
    cout<<trgl.area()<<endl;
    //ex2
    CRectangle rect;
    CTriangle trgl;
    CPolygon poly;
    CPolygon *p1,*p2,*p3;
    p1=&rect;
    p2=&trgl;
    p3=&poly;
    p1->set_values(4,5);
    p2->set_values(4,5);
    p3->set_values(4,5);
    cout<<p1->area()<<endl;//20
    cout<<p2->area()<<endl;//10
    cout<<p3->area()<<endl;//0

}