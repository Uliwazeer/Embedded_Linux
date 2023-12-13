#include <iostream>
#include <list>
bool EvenNumber(int i)
{
    return i %2;
}
bool OddNumber(int i)
{
    return i %2==0;
}
using namespace std;


int main()
{

    // ex 
    list<int>l(6);
    l.push_back(7);
    l.push_front(0);
    // l.pop_front(8);
    // l.pop_back(9);
    for(auto li:l)
    cout<<li<<endl;//0 1 2 3 4 5 6 7 

    // ex 
    list<int>l(6);
    l.push_back(7);
    l.push_front(0);
    list<int>::iterator it=l.begin();
    for(;int !=l.end();it++)
    cout<<*it<<endl; //0 1 2 3 4 5 6  
    // ex 
    list<int>l(6);
    l.push_back(7);
    l.push_front(0);
    list<int>::reverse_iterator it=l.rbegin();
    for(;int !=l.rend();it++)
    cout<<*it<<endl;//7 6 5 4 3 2 1 0
    // ex 
    list<int>l={1,2,3,4,5,,5,5,,5,5,5,6};
    cout<<l.front();//1
    cout<<l.back();//6
    cout<<l.remove(5);//will clear all 5
    l.erase(l.begin());//clear 1
    l.erase(l.begin(),l.end());//clear from 1 to 6 remove all list
    for(auto li:l)
    cout<<li<<endl;
    // ex will clear from second element to end list
    list<int>l={1,2,2,2,2,3,4,5,6,7,8,9};
    auto it=l.begin();
    it++;
    l.erase(it,l.end());
    for(auto li:l)
    cout<<li<<endl;
    // ex will add elements in list
    list<int>l={1,2,2,2,2,3,4,5,6,7,8,9};
    auto it=l.begin();
    l.insert(it,2,50);//will add 50 two times in list
    l.insert(it,7,90);//will add 90 seven times in list
    for(auto li:l)
    cout<<li<<endl;

    // ex 
    list<int>l={1,2,3,4};
    l.size();
    l.resize(7);
    l.empty();
    l.clear();

    // ex 
    list<int>l1={1,2,3,4,5};
    list<int>l1={9,7,8,6,10};
    l1.merge(l2);//considerd concatenate and sort 
    for(auto li:l1)
    cout<<li<<" ";//1 2 3 4 5 6 7 8 9 10
    // ex 
    list<int>l1={1,2,3,4,5};
    list<int>l1={9,7,8,6,10};
    l1.merge(l2);//considerd concatenate and sort 
    for(auto li:l2)
    cout<<li<<" ";//will not print anything because item will pass to l2 will be remove from l2
    // ex 
    list<int>l1={1,2,3,4,5};
    list<int>l1={9,7,8,6,10};
    l1.splice(l1.begin(),l2);
    for(auto li:l1)
    cout<<li<<" ";//will print 9 7 8 6 10 1 2 3 4 5 dont make sort
    
    // ex 
    list<int>l1={1,2,3,4,5};
    list<int>l1={9,7,8,6,10};
    l1.splice(l1.begin(),l2);
    for(auto li:l2)
    cout<<li<<" ";//will not print anything because item will pass to l2 will be remove from l2
    // ex unique list
    list<int>l={1,2,2,2,2,3,3,3,4,5,6};
    l.unique();
    for(auto li:l)
    cout<<li<<" ";//will print non repeated number in list 1 4 5 6
    // ex 
    list<int>l={1,2,3,4,5,6,7,8,9};
    l.remove_if(EvenNumber);
    for(auto li:l)
    cout<<li<<endl;//willl print even number
    // ex 
    list<int>l={1,2,3,4,5,6,7,8,9};
    l.remove_if(OddNumber);
    for(auto li:l)
    cout<<li<<endl;//willl print odd number

    // ex 
    list<int>l={4,2,5,0,-1,3,1,9,7};
    l.sort();
    for(auto li:l)
    cout<<li<<endl;//rearrange list 
    // ex 
    list<int>l={4,2,5,0,-1,3,1,9,7};
    l.sort(greater<int>());
    for(auto li:l)
    cout<<li<<endl;//rearrange list based on max number in list 9 7 5 4 3 2 1 0 -1  

     return 0;

}