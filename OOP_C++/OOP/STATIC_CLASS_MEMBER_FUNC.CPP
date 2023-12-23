#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
// ex1
void f()
{
    int x=0;
    x++;
    cout<<x<<endl;
}
// ex2
void f()
{
    static int x=0;
    x++;
    cout<<x<<endl;
}
// ex3 static class member
class student{
    static int count;
    char name[20];
    int first,second,final,total,ID;
    public:
    student()//EMPTY CONSTRUCTOR
    {
        strcpy_s(name,"NO NAME");
        ID = 0;
        first = second = final = 0;
        count++;
        cout<<"NUMBER OF STUDENT CONSTRUCTED "<<count<<endl;
    }

};
int student::count = 0;//initile value for count must define outside class because static
// ex4
class student2{
    static int count;
    char name[20];
    int first,second,final,total,ID;
    public:
    static void print_count()
    {
        cout<<"STUDENT CONSTRUCTED "<<count<<endl;
    }
    student2()//EMPTY CONSTRUCTOR
    {
        strcpy_s(name,"NO NAME");
        ID= 0 ;
        first = second = final = 0;
        count++;
        print_count();
    }
};
int student2::count=0;
int main()
{
    // ex1
    f();//will print 1
    // ex1
    f();//will print 1
    f();//will print 1
    // ex1
    f();//will print 1
    f();//will print 1
    f();//will print 1
    f();//will print 1
    // ex2
    f();//will print 1
    f();//will print 2
    // ex2
    f();//will print 1
    f();//will print 2
    f();//will print 3
    f();//will print 4
    // ex3
    cout<<"CONSTRUCTOR 2 OBJECT\n";
    student s1,s2;
    cout<<"\nCONSTRUCTOR 3 OBJECT\n";
    student st[3];
    // ex4
    student2::print_count();
    cout<<"CONSTRUCTOR 2 OBJECT\n";
    student2 s1,s2;
    cout<<"\nCONSTRUCTOR 3 OBJECT\n";
    student2 st[3];



    return 0;
}