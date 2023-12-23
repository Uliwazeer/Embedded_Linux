#include<iostream>
#include<string.h>
#include<math.h>
#include<cmath>
using namespace std;
struct  car
{
    string name;
    string color;
    int maxspeed;
    int model;
};
struct  car
{
    string name;
    string color;
    int maxspeed;
    int model;
}c,x;
//ex how can send struct to func
struct distance{
    int feet;
    float inches;
};
distance add_distance(distance d1,distance d2)
{
    distance result;
    result.feet=d1.feet+d2.feet;
    result.inches=d1.inches+d2.inches;
    return result;
}
//ex how can send struct to class
struct exam{
    float first;
    float second;
    float final;
    //you can make func inside struct  
    void f(){cout<<"Ali Wazeer";}
};
class subject{
    char name[10];
    exam Exam;
    public:
    subject()//empty constructor
    {
        strcpy_s(name,"NO NAME");
        Exam = {0,0,0};
    }
    subject(char n[],float fa,float s,float fi)//parametrize constructor
    {
        Exam.f();
        strcpy_s(name,n);
        Exam = {fa,s,fi};  
    }
    float total()
    {
        return Exam.first + Exam.second + Exam.final;
    }
    void print()
    {
        cout<<"THE SUBJECT = "<<name<<endl;
        cout<<"THE FIRST EXAM IS = "<<Exam.first<<endl;
        cout<<"THE SECOND EXAM IS = "<<Exam.second<<endl;
        cout<<"THE FINAL EXAM IS = "<<Exam.final<<endl;
        cout<<"THE TOTAL IS  = "<<total()<<endl;
    }


};
int main()
{
    //ex
     car g;
     g.name = "BMW";
     g.color = "RED";
     cout<<g.name<<endl;
     cout<<g.color<<endl;
    //ex
    car g={"BWM","RED",250,90};
    cout<<g.name<<endl;
    cout<<g.color<<endl;
    cout<<g.maxspeed<<endl;
    cout<<g.model<<endl;
    //ex
    c={"zz","black",205,230};
    x={"ss","green",2050,2030};
    cout<<c.name<<endl;
    cout<<c.color<<endl;
    cout<<c.maxspeed<<endl;
    cout<<c.model<<endl;
    cout<<x.name<<endl;
    cout<<x.color<<endl;
    cout<<x.maxspeed<<endl;
    cout<<x.model<<endl;
    //ex compare in struct
    car g={"BWM","RED",250,90},k;
    if(g.model<k.model)
    cout<<"G IS LESS THAN K\n";
    if(g.model<k.maxspeed)
    cout<<"G IS BIGGER THAN K\n";
    //ex
    distance x,y,z;
    cout<<"ENTER FEET VALUE\n";
    cin>>x.feet>>y.feet;
    cout<<"ENTER INCHEES VALUE\n";
    cin>>x.inches>>y.inches;
    z=add_distance(x,y);
    cout<<"Z.FEET = "<<z.feet<<"Z.INCHES = "<<z.inches<<endl;
    //ex
    subject e("OOP",20,30,40);
    e.print();

  return 0;
}
