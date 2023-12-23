#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
// ex1
class triangle
{
    private:
    float width,height;
    public:
    triangle(float a=0,float b=0)
    {
        width = a;
        height = b;
    }
    void getdata()
    {
        cout<<"ENTER WIDTH\n";
        cin>>>width;
        cout<<"ENTER HEIGHT\n";
        cin>>height;
    }
    void showdata()
  {
    cout<<"WIDTH & HEIGHT= ("<<width<<","<<height<<")"<<endl;
  }
  void add(triangle c1,triangle c2)
  {
        width=c1.width+c2.width;
        height = c1.height + c2.height;
        
  }
};
// ex2
class triangle
{
    private:
    float width,height;
    public:
    triangle(float a=0,float b=0)
    {
        width = a;
        height = b;
    }
    void getdata()
    {
        cout<<"ENTER WIDTH\n";
        cin>>>width;
        cout<<"ENTER HEIGHT\n";
        cin>>height;
    }
    void showdata()
  {
    cout<<"WIDTH & HEIGHT= ("<<width<<","<<height<<")"<<endl;
  }
  triangle add(triangle c2)
  {
    triangle c3;
        c3.width  = width+c2.width;
        c3.height = height + c2.height;
        return c3;

  }
};
// ex3
class triangle
{
    private:
    float width,height;
    public:
    triangle(float a=0,float b=0)
    {
        width = a;
        height = b;
    }
    void getdata()
    {
        cout<<"ENTER WIDTH\n";
        cin>>>width;
        cout<<"ENTER HEIGHT\n";
        cin>>height;
    }
    void showdata()
  {
    cout<<"WIDTH & HEIGHT= ("<<width<<","<<height<<")"<<endl;
  }
  triangle operator+(triangle c2)
  {
    triangle c3;
        c3.width  = width+c2.width;
        c3.height = height + c2.height;
        return c3;

  }
};
// ex4
class triangle
{
    private:
    float width,height;
    public:
    triangle(float a=0,float b=0)
    {
        width = a;
        height = b;
    }
    void getdata()
    {
        cout<<"ENTER WIDTH\n";
        cin>>>width;
        cout<<"ENTER HEIGHT\n";
        cin>>height;
    }
    void showdata()
  {
    cout<<"WIDTH & HEIGHT= ("<<width<<","<<height<<")"<<endl;
  }
  triangle operator-(triangle c2)
  {
    triangle c3;
        c3.width  = width-c2.width;
        c3.height = height -c2.height;
        return c3;

  }
};
// ex5
class triangle
{
    private:
    float width,height;
    public:
    triangle(float a=0,float b=0)
    {
        width = a;
        height = b;
    }
    void getdata()
    {
        cout<<"ENTER WIDTH\n";
        cin>>>width;
        cout<<"ENTER HEIGHT\n";
        cin>>height;
    }
    void showdata()
  {
    cout<<"WIDTH & HEIGHT= ("<<width<<","<<height<<")"<<endl;
  }
  triangle operator*(triangle c2)
  {
    triangle c3;
        c3.width  = width*c2.width;
        c3.height = height*c2.height;
        return c3;

  }
};
void main()
{
    // ex1
    triangle c1,c2(3.5,1.5),c3;
    c1.getdata();
    c3.add(c1,c2);
    c3.showdata();
    // ex2
    triangle c1,c2(3.5,1.5),c3;
    c1.getdata();
    c3.add(c2);
    c3.showdata();
    // ex3
    triangle c1,c2(3.5,1.5),c3;
    c1.getdata();
    c3=c2+c1;
    c3.showdata();
    // ex4
    triangle c1,c2(3.5,1.5),c3;
    c1.getdata();
    c3=c1-c2;//same way c3=c1.operator-(c2);
    c3.showdata();
    // ex5
    triangle c1,c2(3.5,1.5),c3;
    c1.getdata();
    c3=c1*c2;//same way c3=c1.operator*(c2);
    c3.showdata();



}