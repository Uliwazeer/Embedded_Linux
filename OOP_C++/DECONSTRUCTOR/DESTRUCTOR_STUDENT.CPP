#include <iostream>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
class student{
    char name[20];
    int ID;
public:
    student(){//empty constructor
        cout<<"OBJECT CREATED\n";
    }
    ~student(){
        cout<<"OBJECT DESTRUCTED\n";
    }
    void Set_Name_ID(char n[],int id)
    {
        strcpy(name,n);
        ID= id;
    }
    void print(void)
    {
        cout<<name<<"\t"<<ID<<endl;
    }

};
void Func(student s)
{
    student s1;
    s1 =s;
    s.Set_Name_ID("Wazeer",12345);
    s.print();
    s1.print();
}
int main()
{
    student st1,st2;
    st1.Set_Name_ID("Ali",11111);
    st2.Set_Name_ID("Wazeer",22222);
    cout<<"GOING TO FUNCTION\n";
    Func(st1);
    cout<<"BACK FROM FUNC\n";
    st1.print();



    return 0;
}