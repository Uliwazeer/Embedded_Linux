#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
class student
{
    private:
    char name[20];
    int id;
    public:
    student()
    {
        strcpy(name,"NO NAME");
        id=0;
    }
    student(char n[],int i)// we can say student(char n[],int i=2030)
    {
        cout<<"PARAMETRIZE CONSTRUCTOR\n";
        strcpy_s(name,n);
        id = i;
    }
    student(char n[])
    {
        
        strcpy_s(name,n);
    
    }
    void print()
    {
        cout<<"NAME = "<<name<<endl;
        cout<<"ID = "<<id<<endl;
    }
};
int main()
{
//ex
    student st("Ali",2030);
    st.print(); 
    // ex 
    student st("Wazeer");
    st.print(); 
}