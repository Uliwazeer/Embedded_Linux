#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
// ex0a
class Unary{
    int x,y;
    public:
    Unary(){};//empty costructor
    Unary(int i=0,int j=0)
    {
        x=i;
        y=j;
    }
    void show(){cout<<x<<" "<<y<<endl;}
    void operator++()
    {
        x++;
        y++;
    }
};
// ex0b
class Unary{
    int x,y;
    public:
    Unary(){};//empty costructor
    Unary(int i=0,int j=0)
    {
        x=i;
        y=j;
    }
    void show(){cout<<x<<" "<<y<<endl;}
    Unary operator++()//pre-fix
    {
        x++;
        y++;
        return *this;
    }
    Unary operator++(int)//post-fix we put int to know compiler that this is postfix operation
    {
        Unary t; 
        t = *this;
        x++;
        y++;
        return t;
    }
    Unary operator-()
    {
    
        x=-x;
        y=-y;
        return *this;
    }
    bool operator!()
    {
        return (x==0&&y==0);
    }
    Unary operator+=(Unary b2)
    {
        x+=b2.x;
        y+=b2.y;
        return *this;
    }
    // Unary operator-=(Unary b2)
    // {
    //     x-=b2.x;
    //     y-=b2.y;
    //     return *this;
    // }
};

int main()
{
    // ex0a
    Unary z(19,99);
    z++;
    z.show();
    // ex0b 
    Unary z(19,99),k;
    z++;// 20 100
    k=z++;//20 100
    z.show();//20 100
    z.show();//21 101
    // ex0b 
    Unary z(19,99),k;
    z++;// 20 100
    k=++z;//20 100
    z.show();//20 100
    z.show();//21 101
    // ex0b 
    Unary z(19,99),k;
    z++;// 20 100
    k=++z;//21 101
    z.show();//21 101
    //ex0c
    Unary k(1,2);
    -k;
    k.show(); 
    //ex0d
    Unary k(-1,2);
    -k;
    k.show(); 
    // ex0e
    Unary x(1,1);
    if(!x)
    cout<<"TRUE"<<endl;
    else 
    cout<<"FALSE"<<endl;
    //ex0f
    Unary b(1,2),b2(3,3);
    b+=b2;
    b.show();
    //ex0g
    Unary b(1,2),b2(3,3);
    b-=b2;
    b.show();

    // ex1
    int x=0,y=0;
    x++;
    cout<<x<<endl;//1
    // ex2
    int x=0,y=0;
    ++x;
    cout<<x<<endl;//1
    ///x++ == ++x if they are on one line
    // ex3
    int x=0,y=0;
    cout<<++x<<endl;//1
    // ex4
    int x=0,y=0;
    cout<<x++<<endl;//0
    // ex5
    int x=0,y=0;
    cout<<x++<<endl;//0
    cout<<x<<endl;//1
    // ex6
    int x=0,y=0;
    x=++y;
    cout<<x<<endl;//1
    cout<<y<<endl;//1
    // ex7
    int x=0,y=0;
    x=y++;
    cout<<x<<endl;//0
    cout<<y<<endl;//1
    // ex8
    int x=1;
    cout<<-x<<endl;// -1
    // ex9
    int x=10000;
    if(x)
    cout<<"TRUE\n";//TRUE 
    else 
    cout<<"FALSE\n";
    // ex10
    int x=-10000;
    if(x)
    cout<<"TRUE\n";//TRUE
    else 
    cout<<"FALSE\n";
    // ex10
    int x=0;
    if(x)
    cout<<"TRUE\n";
    else 
    cout<<"FALSE\n";//FALSE
    // ex11
    int x=0;
    if(!x)
    cout<<"TRUE\n";//TRUE
    else 
    cout<<"FALSE\n";
    //ex12
    Unary x(1,1);
    cout<<false<<endl;//0
    cout<<true<<endl;//1
    // ex13
    int x=1,y=5;
    x+=y;



    return 0;
}