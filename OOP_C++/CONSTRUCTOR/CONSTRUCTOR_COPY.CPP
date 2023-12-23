//COPY CONSTRUCTOR ALLOW COPYING 1 OBJECT TO ANOTHER
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
class copy 
{
    private:
    int a1,a2,a3,a4,a5,a6,a7,a8;
    public:
    copy(int aa1,int aa2,int aa3,int aa4,int aa5,int aa6,int aa7,int aa8)
    {
        a1=aa1;
        a2=aa2;
        a3=aa3;
        a4=aa4;
        a5=aa5;
        a6=aa6;
        a7=aa7;
        a8=aa8;
    }
    copy(const copy &co)
    {
        a1=co.a1;
        a2=co.a2;
        a3=co.a3;
        a4=co.a4;
        a5=co.a5;
        a6=co.a6;
        a7=co.a7;
        a8=co.a8;
    }
    void print()
    {
        cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<" "<<a7<<" "<<a8<<" "<<endl;
    }

};
int main()
{
    copy cy(10,20,30,40,50,60,70,80);
    cy.print(); 
    copy cp(cy);
    cp.print();

}