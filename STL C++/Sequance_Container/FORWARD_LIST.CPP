#include <iostream>
#include <forward_list>
bool fun(int n)
{
    return n<=2;
}
using namespace std;
int main()
{

    // ex 
    forward_list<int>fl{1,2,3,4,5};
    fl.assign(5,7);
    for(int&x:fl)
    cout<<x<<" ";//7 7 7 7 7

    // ex 
    forward_list<int>fl{1,2,3,4,5};
    fl.push_front(6);//will add 6 in as first element
    for(auto it:fl)
    cout<<it<<" ";//6 1 2 3 4 5
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    fl.pop_front();//clear first element
    for(auto it:fl)
    cout<<it<<" ";// 2 3 4 5
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    fl.emplace_front(8);//add 8 as first element
    for(auto it:fl)
    cout<<it<<" ";// 8 1 2 3 4 5
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    fl.insert_after(fl.begin(),6);//add 6 as second element
    for(auto it:fl)
    cout<<it<<" ";// 1 6 2 3 4 5
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    fl.insert_after(fl.before_begin(),6);//add 6 as first element
    for(auto it:fl)
    cout<<it<<" ";// 6 1 2 3 4 5
    // ex same previous using iterator ex
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.begin();
    it++;
    fl.insert_after(it,6);//add 6 as first element
    for(auto it:fl)
    cout<<it<<" ";// 6 1 2 3 4 5
    // ex same previous using iterator ex
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
    fl.insert_after(it,{7,8,9,10});//add 6 as first element
    for(auto it:fl)
    cout<<it<<" ";// 7 8 9 10 1 2 3 4 5
    // ex same previous using iterator ex
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.end();
    fl.insert_after(it,6);//run time error
    for(auto it:fl)
    cout<<it<<" ";// compiler not understand because func add after last element from end 
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
    fl.emplace_after(it,9);//accept 1 element not {7,5,4,1}
    for(auto it:fl)
    cout<<it<<" ";// 9 1 2 3 4 5
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
    it++;
    fl.emplace_after(it,9);//accept 1 element not {7,5,4,1}
    for(auto it:fl)
    cout<<it<<" ";// 1 9 2 3 4 5 
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
   auto f = fl.begin();
    cout<<*f<<" ";// 1
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
   auto f = next(fl.begin());
    cout<<*f<<" ";// 2
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
   auto f = next(fl.begin(),2);
    cout<<*f<<" ";// 3
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
   auto f = next(fl.begin(),3);
    cout<<*f<<" ";// 4
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
   auto f = next(fl.begin(),4);
    cout<<*f<<" ";// 5
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
    fl.erase_after(fl.begin());//clear 1nd element===>2
    for(auto it:fl)
    cout<<it<<" ";// 1 3 4 5
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
    fl.erase_after(fl.before_begin());//clear 1
    for(auto it:fl)
    cout<<it<<" ";// 2 3 4 5
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
    it=next(it,3);
    fl.erase_after(it);//clear 4
    for(auto it:fl)
    cout<<it<<" ";// 1 2 3 5
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
    fl.remove(1);//clear 1
    for(auto it:fl)
    cout<<it<<" ";// 2 4 3 5
    // ex func
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
    fl.remove_if(fun);//clear all elements which is least 2 
    for(auto it:fl)
    cout<<it<<" ";// 3 4 5
    // ex func previous but this is more fast func than previous
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>::iterator it = fl.before_begin();
    fl.remove_if([](int n){return n<=2;});//clear least 2 
    for(auto it:fl)
    cout<<it<<" ";// 3 4 5
    // ex copy 2 forwardlist
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>f2{10,20,30,40,50};
    forward_list<int>::iterator it = fl.begin();
   fl.splice_after(fl.before_begin(),f2)
    for(auto it:fl)
    cout<<it<<" ";// 10 20 30 40 50 1 2 3 4 5
    // ex copy 2 forwardlist
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>f2{10,20,30,40,50};
    forward_list<int>::iterator it = fl.begin();
   fl.splice_after(fl.before_begin(),f2);
    for(auto it:f2)
    cout<<it<<" ";// run time error
    // ex copy 2 forwardlist
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>f2{10,20,30,40,50};
    forward_list<int>::iterator it = fl.begin();
    fl.splice_after(fl.before_begin(),f2,f2.begin());
    for(auto it:fl)
    cout<<it<<" ";// 10 20 30 40 50
    // ex copy 2 forwardlist
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>f2{10,20,30,40,50};
    forward_list<int>::iterator it = fl.begin();
    fl.splice_after(fl.before_begin(),f2,f2.begin());
    for(auto it:fl)
    cout<<it<<" ";// 10 1 2 4 5 
    // ex copy 2 forwardlist
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>f2{10,20,30,40,50};
    forward_list<int>::iterator it = fl.begin();
    fl.splice_after(fl.before_begin(),f2,f2.begin(),f2.end());
    for(auto it:fl)
    cout<<it<<" ";// 20 30 40 50 60 1 2 3 4 5 6
    // ex 
    forward_list<int>fl{1,2,3,4,5};
    forward_list<int>f2{10,20,30,40,50};
    fl.resize(10,2);//store 10 places fl + for empty places will store 2
    fl.empty();//is forwardlist empty or no
    fl.merge(f2);//1 2 3 4 5 10 20 30 40 50
    fl.sort(greater<>());//6 5 4 3 2 1
    for(auto it:fl)
    cout<<it<<" ";// 1 2 3 4 5 2 2 2 2



    return 0;
}