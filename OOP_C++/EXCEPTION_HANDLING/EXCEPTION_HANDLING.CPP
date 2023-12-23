#include<iostream>
using namespace std;
int main()
{
    // ex1 
    int hour;
    try{
        cin>>hour;
        if(hour<0)
        throw "ERROR";
        cout<<"TIME IS "<<hour<<":00\n";
    }
    catch(...)
    {
        cout<<"WRONG VALUE\n";
    }
    // ex2 
    int hour;
    try{
        cin>>hour;
        if(hour<0)
        throw "ERROR";
        cout<<"TIME IS "<<hour<<":00\n";
    }
    catch(char *x)
    {
        cout<<x<<" WRONG VALUE\n";
    }
    // ex3 
    int hour;
    cin.exceptions(cin.failbit);
    try{
        cin>>hour;
        if(hour<0)
        throw "ERROR";
        cout<<"TIME IS "<<hour<<":00\n";
    }
    catch(char *x)
    {
        cerr<<x<<" WRONG VALUE\n";
    }
    // ex4
    try{
        int answer;
        cout<<"5 + 7 = ";
        cin>>answer;
        if(answer != 12)
        throw "ERROR,WRONG ANSWER\n";

        cout<<"GOOD,RIGHT ANSWER\n";
    }
    catch(char *str)
    {
        cout<<"EXCEPTION: "<<str;
    }
    //ex5
    try
    {
        int A[10]={2,3,4,1,3,5,6,8,9};
        int index;
        cout<<"ENTER INDEX = ";
        cin>>index;
        if(index<0)
        throw "ERROR,NEGATIVE INDEX\n";
        if(index>=10)
        throw index;
        for(int n=0;n<=index;n++)
        {
            cout<<A[n]<<endl;
        }
    }
    catch(int i)
    {
       cout<<"EXCEPTION: ";
       cout<<"INDEX "<<i<<"IS OUT OF RANGE"<<endl;
    }
    catch(char *str)
    {
        cout<<"EXCEPTION "<<str;
    }
    



    return 0;
}