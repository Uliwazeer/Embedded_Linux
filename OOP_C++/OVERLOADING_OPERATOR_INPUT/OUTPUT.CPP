#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
// ex1 
class distance{
    private:
    int feet;
    int inches;
    public:
    distance(){
        feet = 0;
        inches = 0;
    }
    distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    friend istream&operator>>(istream&input,distance&d);
};
istream&operator>>(istream&input,distance&d)
{
    input>>d.feet>>d.inches;
    return input;
}
// ex2 
class distance{
    private:
    int feet;
    int inches;
    public:
    distance(){
        feet = 0;
        inches = 0;
    }
    distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    friend istream&operator>>(istream&input,distance&d)
{
    input>>d.feet>>d.inches;
    return input;
}
friend ostream&operator>>(ostream&output,distance&d)
{
    output<<"F = "<<d.feet<<" "<<"D = "<<d.inches<<endl;
}
};//ex1==ex2
// ex3 
class number
{
    int num;
    public:
    number()//empty constructor
    {
        num = 0;
    }
    number (int x)
    {
        num=x;
    }
    number(const number &ob)
    {
        num=ob.num;
    }
    int getNum()
    {
        return num;
    }
    operator int()
    {
        return int(num);
    }
};
// ex4
class arr{
    int a[3];
    public:
    arr(){
        for(int i=0;i<3;i++)
        {
            a[i]= i + 2;
        }
    }
    int&operator[](int in)
    {
        return a[in];
    }
};
void main()
{
    distance d1(11,10),d2(5,11),d3;
    cin>>d3;
    cout<<d3;//d3.operator<<(d3);
    // ex3 
    number ob;
    int x=10;
    ob=x;
    cout<<ob.getNum()<<endl;
    // ex3 
    number ob(30);
    int x=10;
    x=ob;//error to solve this porblem we make an operator
    cout<<x<<endl;
    // ex4
    arr ob;
    cout<<ob[2]<<endl;//ob.operator[](2)
    ob[2]=50;
    cout<<ob[2]<<endl;


}