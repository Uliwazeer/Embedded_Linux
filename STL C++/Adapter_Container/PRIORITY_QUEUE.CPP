#include <iostream>
#include<queue>
#include<vector>
#include<dequeue>
#include<list>
#include <string>
using namespace std;
strcut com{
    bool operator()(int l,int r)
    {
        return l<r;
       // return (l>=50)<(r>=50);
    }

};
int main()
{
//we can use emplace() or push()

// ex 
priority_queue<int>pq;
pq.push(50);
pq.push(40);
pq.push(10);
pq.push(90);//have hightest priority
pq.push(20);
cout<<pq.top()<<endl;//max num 90
// ex 
priority_queue<int>pq;
pq.push(50);
pq.push(40);
pq.push(10);
pq.push(90);//
pq.push(20);
pq.pop();
cout<<pq.top()<<endl;//max num 50 after pop clear 90
// ex to print all numbers
priority_queue<int>pq;
pq.push(50);
pq.push(40);
pq.push(10);
pq.push(90);//
pq.push(20);
while (pq.size()!=0)
{
    cout<<pq.top()<<endl;//will print element sorted from max to min number
    pq.pop();
    
}
// ex to print all numbers another way
priority_queue<int>pq;
pq.push(50);
pq.push(40);
pq.push(10);
pq.push(90);//
pq.push(20);
while (!pq.empty())
{
    cout<<pq.top()<<endl;//will print element sorted from max to min number
    pq.pop();
    
}
// ex to print all numbers another way
priority_queue<int,deque<int>>pq;//storing data as deque
pq.push(50);
pq.push(40);
pq.push(10);
pq.push(90);//
pq.push(20);
while (!pq.empty())
{
    cout<<pq.top()<<endl;//will print element sorted from max to min number
    pq.pop();
    
}
}
// ex to print all numbers another way
priority_queue<int,list<int>>pq;//storing data as list
pq.push(50);
pq.push(40);
pq.push(10);
pq.push(90);//
pq.push(20);
while (!pq.empty())
{
    cout<<pq.top()<<endl;//will print element sorted from max to min number
    pq.pop();
    
}
// ex to print all numbers another way
priority_queue<int,vector<int>>pq;//storing data as vector
pq.push(50);
pq.push(40);
pq.push(10);
pq.push(90);//
pq.push(20);
while (!pq.empty())
{
    cout<<pq.top()<<endl;//will print element sorted from max to min number
    pq.pop();
    
}
// ex to print all numbers another way according to min to max
priority_queue<int,vector<int>,greater<int>>pq;//storing data as vector
pq.push(50);
pq.push(40);
pq.push(10);
pq.push(90);//
pq.push(20);
while (!pq.empty())
{
    cout<<pq.top()<<endl;//will print element sorted from max to min number
    pq.pop();//10 20 40 50 90
    
}
// ex to print all numbers another way according to max to min
priority_queue<int,vector<int>,less<int>>pq;//storing data as vector
pq.push(50);
pq.push(40);
pq.push(10);
pq.push(90);//
pq.push(20);
while (!pq.empty())
{
    cout<<pq.top()<<endl;//will print element sorted from max to min number
    pq.pop();//90 50 40 20 10
    
}
//ex compare
priority_queue<int,vector<int>,com>pq;
for(int n:{100,70,20,60,30,80,50,40,90,10,5,21,22,24,23  })
pq.push(n);//print num from max to min l<r in fun struct







return 0;
}