#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std; 
/*
relational operator overloading return true/false it is a func
*/
// exa 
class Relational{
    int x,y,z;
    public:
    Relational()
    {
        x=y=z=0;
    }
    Relational(int i,int j,int k)
    {
        x=i;
        y=j;
        z=k;
    }
    int operator==(Relational b)
    {
       /* if(x==b.x&&y==b.y&&z==b.z)
        return true;
        else
        return false;
        */
       return (x==b.x&&y==b.y&&z==b.z);
    }

};
// exb 
class Relational{
    int x,y,z;
    public:
    Relational()
    {
        x=y=z=0;
    }
    Relational(int i,int j,int k)
    {
        x=i;
        y=j;
        z=k;
    }
    int operator==(Relational b)
    {
       /* if(x==b.x&&y==b.y&&z==b.z)
        return true;
        else
        return false;
        */
       return (x==b.x||y==b.y||z==b.z);
    }

};
void main()
{
    // exa1 
    Relational a(10,10,10),b(10,10,10);
    if(a==b)//if(a.operator==(b))
    cout<<"THE TWO OBJECTS ARE EQUAL\n";
    else 
    cout<<"THE TWO OBJECTS ARE NOT  EQUAL\n";
    // exa2 
    Relational a(10,10,10),b(10,10,11);
    if(a==b)//if(a.operator==(b))
    cout<<"THE TWO OBJECTS ARE EQUAL\n";
    else 
    cout<<"THE TWO OBJECTS ARE NOT  EQUAL\n";
    // exb1
    Relational a(10,10,10),b(10,10,11);
    if(a==b)//if(a.operator==(b))
    cout<<"THE TWO OBJECTS ARE EQUAL\n";
    else 
    cout<<"THE TWO OBJECTS ARE NOT  EQUAL\n";

}