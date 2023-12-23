#include <iostream>
using namespace std;
// ex1
template<class t>
t sum(t x,t y)
{
    return x+y;
}
// ex2 sum two num with different data type
template<class t,class t2>
t sum(t x,t2 y)
{
    return x+y;
}
//ex3
template<class first,class second>
first smaller(first a,second b)
{
    return (a<b ? a : b);
}
int main()
{
    // ex1
    double x=0,y=0;
    cin>>x>>y;
    cout<<sum(x,y)<<endl;
    // ex2
    int x=10,y=20;
    double f=15.5,d=1.3;
    cout<<sum(x,d)<<endl;//11.3
    cout<<sum(f,x)<<endl;//25.5
    cout<<sum(x,f)<<endl;//25
    //ex3
    int x=89;
    double y = 56.78;
    cout<<smaller(x,y)<<endl;//56 because first is int
    cout<<smaller<double>(x,y)<<endl;//56.78 casting x to become a double
    cout<<smaller(y,x)<<endl;//56.78
    cout<<smaller<double,int>(y,x)<<endl;//56.78 send y as double,send x as int








    return 0;
}