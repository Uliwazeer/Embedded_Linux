#include<iostream>
using namespace std;
// ex1 
class cexception{
    int array[100];
    public:
    cexception()
    {
        for(int i=0;i<100;i++)
        {
            array[i] = i;
        }
    }
        int getElement(int x)
        {
            if(x>=100)
            throw xBig();
            else if(x<0)
            throw xSmall();
            else 
            return array[x];
        }
        class xBig{};
        class xSmall{};
    
};
// ex2 
class cexception{
    int array[100];
    public:
    cexception()
    {
        for(int i=0;i<100;i++)
        {
            array[i] = i;
        }
    }
        int getElement(int x)
        {
            if(x>=100)
            throw xBig();
            else if(x<0)
            throw xSmall();
            else 
            return array[x];
        }
        class xBig{
            public:
            xBig(){}
            void big()
            {
                cout<<"BIG\n";
            }
        };
        class xSmall{
             public:
            xSmall(){}
            void small()
            {
                cout<<"SMALL\n";
            }
        };
    
};
int main()
{
    //ex1
    int i=0;
    cexception a;
    try
    {
        cout<<"CHOOSE THE ELEMENT\n";
        cin>>i;
        cout<<"THE ELEMENT IS\t"<<a.getElement(i)<<endl;
    }
    catch(exception::xSmall)
    {
        cout<<"SMALL ELEMENT\n";
    }
    catch(exception::xBig)
    {
        cout<<"Big ELEMENT\n";
    }
    //ex2
    int i=0;
    cexception a;
    try
    {
        cout<<"CHOOSE THE ELEMENT\n";
        cin>>i;
        cout<<"THE ELEMENT IS\t"<<a.getElement(i)<<endl;
    }
    catch(exception::xSmall s)
    {
        s.Small();
    }
    catch(exception::xBig b)
    {
        b.Big();
    }
    

    return 0;
}