#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
//anything written in class called member ifwritten in private & public
//anything written in public called meber func we called it by object x in main
class car
{
private:
     char name[15];
     char color[10];
     int maxspeed;
     int model;
public:
//SET FUNC
    void setName(char n)
    {
        strcpy_s(name,n);
    }
    void setColor(char n[])
    {
        strcpy_s(color n);
    }
    void setMaxspeed(int m)
    {
        maxspeed = m;
    }
    void setModel(int m)
    {
        model = m;
    }
    //GET FUNC
    char *getName()
    {
        return name;
    }
    char *getColor()
    {
        return color;
    }
    int getMaxspeed()
    {
        return maxspeed;
    }
    int getModel()
    {
        return model;
    }
    void print()
    {
        cout<<"NAME = "<<name<<endl;
        cout<<"COLOR = "<<color<<endl;
        cout<<"MAXSPEED = "<<maxspeed<<endl;
        cout<<"MODEL = "<<model<<endl;
    }
 
};
int main()
{
    car x;
    x.setName("BMW");
    x.setColor("BLACK");
    x.setMaxspeed(23023);
    x.setModel(20230);
    x.print();
//if you want to print 1 object from class we use func get for this object
//ex to print name without using func print
x.setName("FERRARRI");
cout<<x.getName()<<endl;
    return ;
}