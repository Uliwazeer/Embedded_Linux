#include <iostream>
#include<stack>
#include <string>
#include <list>
#include <vector>
#include <deque>
using namespace std;
int main()
{

// ex 
stack<string>s;
s.push("A");
s.emplace("B");//will print B NOT A BECAUSE B LAST IN ADDITION IN STACK
cout<<s.top()<<endl;//func top() use to print element in stack because it is pointer to element in stack
// ex 
stack<string>s;
s.push("A");
s.emplace("B");//will print B NOT A BECAUSE B LAST IN ADDITION IN STACK
s.pop();//will print A because pop() clear last element addition on stack
cout<<s.top()<<endl;//func top() use to print element in stack because it is pointer to element in stack
// ex 1
stack<string>s;
s.push("A");
s.emplace("B");//
s.push("C");//
s.push("D");//
for (size_t i = 0; i < !s.empty(); i++)
{
    cout<<s.top()<<endl;
    s.pop();
}
// ex same previous ex
stack<string,deque<string>>s;
s.push("A");
s.emplace("B");//
s.push("C");//
s.push("D");//
for (size_t i = 0; i < !s.empty(); i++)
{
    cout<<s.top()<<endl;
    s.pop();
}
// ex same previous ex2
stack<string,list<int>>s;
s.push("A");
s.emplace("B");//
s.push("C");//
s.push("D");//
for (size_t i = 0; i < !s.empty(); i++)
{
    cout<<s.top()<<endl;
    s.pop();
}
// ex same previous ex3
stack<string,vector<string>>s;
s.push("A");
s.emplace("B");//
s.push("C");//
s.push("D");//
for (size_t i = 0; i < !s.empty(); i++)
{
    cout<<s.top()<<endl;
    s.pop();
}
// ex
stack<string>s1;
stack<string>s2;
s1.push("A"); 
s1.push("B"); 
s1.push("C"); 
s1.push("D"); 
for(string ss:{"AA","BB","CC","DD"})
s2.push(ss);

for(int i=0;!s2.empty();i++)
{
    cout<<s2.top()<<endl;//DD CC BB AA
    s2.pop();
}
// ex swap
stack<string>s1;
stack<string>s2;
s1.push("A"); 
s1.push("B"); 
s1.push("C"); 
s1.push("D"); 
for(string ss:{"AA","BB","CC","DD"})
s2.push(ss);
s1.swap(s2);
for(int i=0;!s2.empty();i++)
{
    cout<<s2.top()<<endl;//D C B A
    s2.pop();
}

   
    return 0;
}