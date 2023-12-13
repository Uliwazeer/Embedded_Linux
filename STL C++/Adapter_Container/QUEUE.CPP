#include <iostream>
#include<queue>
#include<dequeue>
#include<vector>
#include<list>
#include <string>
using namespace std;
int main()
{

// ex 
queue<int>q;
q.push(60);
q.push(70);
q.push(80);
q.push(90);
cout<<q.back()<<endl;//will print element from at back 90
cout<<q.front()<<endl;//will print element from at front 60
// ex 
queue<int>q;
q.push(60);
q.push(70);
q.push(80);
q.push(90);
q.pop();
cout<<q.back()<<endl;//will print element from at back 80
cout<<q.front()<<endl;//will print element from at front 70
// ex 
queue<int>q;
q.emplace(60);
q.emplace(70);
q.emplace(80);
q.emplace(90);
q.pop();
cout<<q.back()<<endl;//will
cout<<q.front()<<endl;//will 
// ex to print all elements use while loop
queue<int>q;
q.emplace(60);
q.emplace(70);
q.emplace(80);
q.emplace(90);
q.emplace(90);
q.emplace(100);
q.emplace(110);
q.emplace(120);
q.emplace(130);
while (!q.empty())
{
    cout<<q.front()<<endl;
    q.pop();
}

// ex to print all elements use for loop
queue<int>q;
q.emplace(60);
q.emplace(70);
q.emplace(80);
q.emplace(90);
q.emplace(90);
q.emplace(100);
q.emplace(110);
q.emplace(120);
q.emplace(130);
for(int i=0;!q.empty();i++)
{
    cout<<q.front()<<endl;
    q.pop();
}
// ex1
queue<int,list<int>>q;//storing data as list
q.emplace(60);
q.emplace(70);
q.emplace(80);
q.emplace(90);
q.emplace(90);
q.emplace(100);
q.emplace(110);
q.emplace(120);
q.emplace(130);
for(int i=0;!q.empty();i++)
{
    cout<<q.front()<<endl;
    q.pop();
}
// ex2
queue<int,deque<int>>q;//storing data as deque
q.emplace(60);
q.emplace(70);
q.emplace(80);
q.emplace(90);
q.emplace(90);
q.emplace(100);
q.emplace(110);
q.emplace(120);
q.emplace(130);
for(int i=0;!q.empty();i++)
{
    cout<<q.front()<<endl;
    q.pop();
}
//ex1=ex2=have same data type





return 0;
}