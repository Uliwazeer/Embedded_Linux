#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<char>d={'a','r','o','g','m','a','e','m','r'};
    d.push_back('z');
    d.push_front('x');
    for (  int i = 0; i <d.size(); i++)
    {
        cout<<d[i];
    }
    cout<<endl; 
    // ex
    deque<char>d={'a','r','o','g','m','a','e','m','r'};
    d.push_back('z');
    d.push_front('x');
    deque<char>::iterator it =d.begin();
    for ( ; it !=d.end(); it++)
    {
        cout<<*it;
    }
    cout<<endl; 
    // ex print right to left
    deque<char>d={'a','r','o','g','m','a','e','m','r'};
    cout<<<d.front(); //complexity o(1) a
    cout<<<d.back(); //complexity o(1)  r
    d.push_back('z');
    d.push_front('x');
    d.pop_back();//clear end item
    d.pop_front();//clear first item
    auto it=d.rbegin();
    for ( ; it !=d.rend(); it++)
    {
        cout<<*it;
    }
    cout<<endl; 
    // ex
    deque<char>d={'a','r','o','g','m','a','e','m','r'};
    auto it = d.begin();
    d.insert(d.begin(),5,'F');//emplace()==insert()  
    for(auto dd:d)
    cout<<dd;
    // ex
    deque<char>d={'a','r','o','g','m','a','e','m','r'};
    auto it = d.begin();
    d.emplace(it,'F');//emplace()==insert()  
    for(auto dd:d)
    cout<<dd;
    // ex
    deque<char>d={'a','r','o','g','m','a','e','m','r'};
    auto it = d.begin();
    d.emplace_back(it,'F');//emplace()==insert()  
    d.emplace_front(it,'F');//emplace()==insert()  
    for(auto dd:d)
    cout<<dd;
// ex swap 2 deque
deque<int>d1={1,2,3};
deque<int>d2={4,5,6};
d1.swap(d2);
for(auto dd:d1)
cout<<dd;
// ex sort deque
deque<int>d1={5,2,3,10,7,8};
sort(d1.begin(),d1.end());//rearrange from left to right
sort(d1.rbegin(),d1.rend());//rearrange from right to left
reverse(d1.rbegin(),d1.rend());//rearrange from right to left
deque<int>d2={4,5,6};
d1.swap(d2);
for(auto dd:d1)
cout<<dd;



    return 0;
}
