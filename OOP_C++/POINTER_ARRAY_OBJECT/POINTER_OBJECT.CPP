#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
class student{
    char name[20];
    int ID;
    public:
    student()
    {
        cout<<"EMPTY CONSTRUCTOR\n";
        strcpy_s(name,"NO NAME");
        ID = 0;
    }
    student(char n[],int id)//constructor overloading parametrize
    {
         cout<<"PARAMETRIZE CONSTRUCTOR\n";
        strcpy_s(name,n);
        ID = id;
    }
    void print(void)
    {
        cout<<name<<"\t"<<ID<<endl;
    }
};
int main()
{
    student s1("Ali",12345),s2("Wazeer",67890);
    student arr[3];
    for (size_t i = 0; i < 3; i++)
    {
        arr[i].print();
    }
    //ex
    student s1("Ali",12345),s2("Wazeer",67890);
    student arr[3];
    for (size_t i = 0; i < 3; i++)
    {
        arr[0].print();
    }
    //ex
    student s1("Ali",12345),s2("Wazeer",67890);
    student arr[3];
    for (size_t i = 0; i < 3; i++)
    { 
        arr[1].print();
    }
    //ex0
    student s1("Ali",12345),s2("Wazeer",67890);
    student arr[3]={student("Muhammed",14520)};
    for (size_t i = 0; i < 3; i++)
    { 
        arr[i].print();
    }
    //ex1
    student s1("Ali",12345),s2("Wazeer",67890);
    student arr[3]={s1,s2};
    for (size_t i = 0; i < 3; i++)
    { 
        arr[i].print();
    }
    //ex2
    student s1("Ali",12345),s2("Wazeer",67890),*p;
    student arr[3]={s1,s2};
    p = arr;
    for (size_t i = 0; i < 3; i++)
    { 
        (p+i)->print();
    }
    //ex3
    student s1("Ali",12345),s2("Wazeer",67890),*p;
    student arr[3]={s1,s2};
    p = arr;
    for (size_t i = 0; i < 3; i++)
    { 
        p++->print();
    }
    //ex4
    student s1("Ali",12345),s2("Wazeer",67890),*p;
    student arr[3]={s1,s2};
    p = arr;
    int i = 0;
    (p+i)->print();
    i++;
    (p+i)->print();
    i++;
    (p+i)->print();

    //ex0=ex1=ex2=ex3=ex4=same output





    return 0;
}