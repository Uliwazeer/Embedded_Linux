#include<iostream>
#include<string.h>
#include<math.h>
#include<cmath>
using namespace std;
//new delete on class
class CRectangle{
    int *width,*height;
    public:
    CRectangle(int,int);//constructor
    ~CRectangle();//destructor
    int area()
    {
        return (*width* *height);
    }
};
CRectangle::CRectangle(int a,int b)//parametrize constructor
{
    width = new int;
    height = new int;
    *width = a;
    *height = b;
}
CRectangle::~CRectangle()//destructor
{
    delete width;
    delete height;
}
int main() 
{
    int *p1,*p2;
    p1=new int;
    *p1=10;
    cout<<&p1<<endl;//location pointer
    cout<<"MEMORY LOCATION "<<p1<<endl;
    cout<<"VALUE "<<*p1<<endl;
    p2=new int;
    *p2=10;
    cout<<&p2<<endl;//location pointer
    cout<<"MEMORY LOCATION "<<p2<<endl<<"VALUE "<<*p2<<endl;
    delete p1;
    delete p2;
    //ex
    CRectangle erct(5,8),rect(4,3);
    cout<<"ERCT AREA "<<erct.area()<<endl;
    cout<<"RECT AREA "<<rect.area()<<endl;


  return 0;
}
 