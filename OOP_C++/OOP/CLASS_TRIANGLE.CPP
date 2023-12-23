#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
class triangle
{
private:
    float base;
    float height;
public:
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
//   ex 
    triangle tr;
    tr.setBase_height(10,15);
    cout<<tr.area()<<endl;
//   ex 
    triangle tr;
    tr.setBase_height(10,15);
    tr.print();
    
    return 0;
}