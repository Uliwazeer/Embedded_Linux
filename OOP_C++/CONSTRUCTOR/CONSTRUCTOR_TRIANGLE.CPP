#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
/*
1-constructor hold same name of class
2-always non return value & void
3-call it when you define new object we call the constructor
*/
class triangle
{
private:
    float base;
    float height;
public:
// ex first type of constructor called empty constructor 
triangle()//empty constructor not take any parameters
{
    cout<<"FIRST CONSTRUCTOR\n";
     base = 0;
    height = 0;
}
//ex second type of constructor called parameterize constructor
/*triangle(int a)//parameterize constructor take any parameters
{
    cout<<"PARAMETRIZE CONSTRUCTOR\n";
     base = 0;
    height = 0;
}
*/
triangle(float b,float h)//parameterize constructor take any parameters
{
    cout<<"PARAMETRIZE CONSTRUCTOR\n";
     base = b;
    height = h;
}
void setBase_height(float b,float h)
{
    base = b;
    height = h;
}
float area()
{
    return 0.5*base*height;
}
void print()
{
    cout<<"BASE = "<<base<<endl;
    cout<<"HEIGHT = "<<height<<endl;
    cout<<"AREA = "<<area()<<endl;
}
};
int main()
{
//   ex first type of constructor called empty constructor 
    triangle tr1;//will print FIRST CONSTRUCTOR
    triangle tr2;//will print FIRST CONSTRUCTOR
    triangle tr3;//will print FIRST CONSTRUCTOR
    //ex
    tr1.print();//will print garbage value for base & height if you not initilze value in empty constructor in base & height
    //ex
    tr1.print();//will print 0 value for base & height because you initilze value in empty constructor in base & height with zero
 //ex
 triangle tr1(10);//will print parameterize constructor because you sent a value
//  ex 
 triangle tr1(10,20);//will print parameterize constructor because you sent a value
   
   //ex to print values
   triangle tr1(15,20);
   tr1.print();
   //ex can you edit on base or height using func void setBase_height(float b,float h)
   //and you can delete this func if you don't want to edit it
   triangle tr1(15,20);
   tr1.print();
   tr1.setBase_height(30,50);//you make overwrite on 15,20 to become 30,50 
    //ex 
     triangle tr1(15,20),tr2;//will print parameterize constructor & FIRST CONSTRUCTOR
//ex
triangle tr1(15,20),tr2;
tr1.print();
tr2.print();//base=height=area =0
//ex to edit on tr2.print() we use func setBase_Height
triangle tr1(15,20),tr2;
tr1.print();
tr2.print();//base=height=area =0
tr2.setBase_height(60,70);//we make overwrite on values to becomme 60,70 instead of 0,0 for base & height
tr2.print();
    return 0;
}