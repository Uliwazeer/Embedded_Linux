#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
// ex1
class mother{
    public:
    mother()
    {
        cout<<"MOTHER:EMPTY CONSTRUCTOR\n";
    }
    mother(int a)
    {
        cout<<"MOTHER:PARAMETRIZE CONSTRUCTOR = "<<a<<endl;
    }
};
class daughter:public mother{
    public:
    daughter()
    {
        cout<<"DAUGHTER:EMPTY CONSTRUCTOR\n\n";
    }
     daughter(int a)
    {
        cout<<"DAUGHTER:PARAMETRIZE CONSTRUCTOR = "<<a<<endl;
    }
};
class son:public mother{
    public:
    son(int a,int b):mother(a)
    {
        cout<<"SON:PARAMETRIZE CONSTRUCTOR = "<<a<<" "<<b<<"\n";
    }/*
    son(int a,int b):mother(b)
    {
        cout<<"SON:PARAMETRIZE CONSTRUCTOR = "<<a<<" "<<b<<"\n";
    }
    */
};
//ex2
class name{
    char n[20];
    protected:
    void set_name(char N[])
    {
        strcpy_s(n,N);
    }
    void print_name()
    {
        cout<<n<<" ";
    }
};
class ID{
    int id;
    protected:
    void set_id(int i)
    {
        id = i;
    }
    void print_id()
    {
        cout<<id<<endl;
    }
};
class student:public name,public ID{
    public:
    student(char Name[],int Id)
    {
        set_name(Name);
        set_id(Id);
    }
    void print()
    {
        print_name();
        print_id();
    }
};
void main()
{
    //ex1
    daughter shehan(1);
    //ex1
    daughter shehan;
    //ex1
    son sara(4);
    //ex1
    son manal(5,8);
    //ex2
    student ST("Ali",12059823);
    ST.print();

}