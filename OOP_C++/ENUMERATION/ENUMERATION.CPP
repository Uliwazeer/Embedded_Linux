#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
//ex1
enum days{
    sat,sun,mon,tue,wend,thur,fri};
//ex2
enum days{
    sat=1,sun,mon,tue,wend,thur,fri};
    
//ex3 enumeration in class
string d[7]={"sat","sun","mon","tue","wend","thur","fri"};
enum days{
    sat=1,sun,mon,tue,wend,thur,fri};
    class week{days d[7];
    public:
    void setday(days w[])
    {
        for (size_t i = 0; i < 7; i++)
        {
            d[i] = w[i];
        }
        void print()
        {
            for (size_t i = 0; i < 7; i++)
            {
                cout<<"THE NUMBER OF DAY "<<d[i]<<" = "<<d[i]<<endl;
            }
            

        }
        
    }
    };

void main()
{

    //ex1
    days m[7]={sat,sun,mon,tue,wend,thur,fri};
    for (size_t i = 0; i < 7; i++)
    {
        cout<<m[i]<<endl;//0 1 2 3 4 5 6
    }
    //ex2a
    days m[7]={sat,sun,mon,tue,wend,thur,fri};
    for (size_t i = 0; i < 7; i++)
    {
        cout<<m[i]<<endl;//1 2 3 4 5 6 7
    }
    //ex2b
    string d[7]={"sat","sun","mon","tue","wend","thur","fri"};
    days m[7]={sat,sun,mon,tue,wend,thur,fri};
    for (size_t i = 0; i < 7; i++)
    {
        cout<<m[i]<<" _ "<<d[i]<<endl;
    }

    //ex3
    days d[7]={sat,sun,mon,tue,wend,thur,fri};
    week g;
    g.setday(d);
    g.print();
    
}