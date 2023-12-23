#include <iostream>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

class phone{

    char name[10];
    char model[10];
    int price;
public:
phone(){}
phone(char n[],char m[],int p)
{
    strcpy(name,n);
    strcpy(model,m);
    price = p;
}
void print();
~phone();
};
phone::~phone()
{
    cout<<"object destructord\n";
}
void phone::print()
{
    cout<<"NAME = "<<name<<endl;
    cout<<"MODEL = "<<model<<endl;
    cout<<"PRICE = "<<price<<endl;
}
void main()
{
    phone ph1,ph("HUAWI","SAMSUNG","IPHONE",400);
    ph.print();
}