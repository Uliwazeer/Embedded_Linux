#include<iostream>
using namespace std;
// ex1
template<class T>
class number{
   T first,second;
    public:
    number(T a,T b)
    {
        first =a;
        second = b;
    }
    T max();
};
template<class T>
T number<T>::max()
{
    return (first>second ? first : second);
}
// ex2 template specialization
template<class t>
class A_char{
    public:
    A_char(t x)
    {
        cout<<x<<"IS NOT CHARACTER\n"<<endl;
    }
};
template<>//template specialization
class A_char<char>{
    public:
    A_char(char x)
    {
        cout<<x<<"IS A CHARACTER"<<endl;
    }
};
int main()
{
    // ex1a
    number<int>ob(10,20);
    cout<<ob.max()<<endl;//20
    // ex1b
    number<int>ob(10.5,20.5);
    cout<<ob.max()<<endl;//20 because 2 num are casting to int
    // ex1c
    number<double>ob(10.5,20.5);
    cout<<ob.max()<<endl;//31 because 2 num are casting to double
    // ex2
    A_char<int>ob1(8);
    A_char<double>ob2(8.199);
    A_char<char>ob3('A');

    return 0;
}