#include <iostream>
#include<set>
using namespace std;

int main()
{
    /*ex
    s.begin()//pointer at first element
    s.rbegin()//pointer at first element to end from left to right
    s.end()//pointer at end element
    s.rend()//pointer at  reverse end element to first from right to left
    s.cbegin()//using iterator ==begin() 
    s.cend()//using iterator == end()
    s.crend//using iterator == rend()
    s.crbegin()//using iterator == rbegin()
    */
    // ex 
    set<int>s{5,3,0,4,1,2};
    for(auto s:s)
    cout<<s<<endl;//will arrange element from min to max 0 1 2 3 4 5
    // ex 
    set<int>s{5,3,0,4,5,1,2};//unique will ignore 5 
    for(auto s:s)
    cout<<s<<endl;//will arrange element from min to max 0 1 2 3 4 5
    // ex 
    set<int>s{2,1,0,5,5};
    s.empty();
    for(auto s:s)
    cout<<s<<endl;
    // ex 
    set<int>s{2,1,0,5,5};
    s.size();
    for(auto s:s)
    cout<<s<<endl;
    // ex 
    set<int>s{2,1,0,5,5};
    s.max_size();
    for(auto s:s)
    cout<<s<<endl;
    // ex 
    set<int>s{2,1,0,5,5};
    s.insert(6);
    for(auto s:s)
    cout<<s<<endl;//0 1 2 5 6
    // ex 
    set<int>s{2,1,0,5,5};
    s.insert(6);
    s.insert(6);//will add 6 one time only
    for(auto s:s)
    cout<<s<<endl;//0 1 2 5 6
    // ex using iterator fast code compiler
    set<int>s{2,1,0,5,5};
    auto it=s.begin();
    s.insert(it,6);
    for(auto s:s)
    cout<<s<<endl;//
    //insert()=emplace()
    // ex way to reduce time complexity from o(log n) to o(1)
    set<string>s;
    auto it = s.begin();//it pointer to end element every time
    s.emplace_hint(it,"Ali");
    it = s.emplace_hint(it,"ASD");
    it = s.emplace_hint(it,"DSA");
    it = s.emplace_hint(it,"ZXC");
    s.emplace_hint(s.end(),"NASEM");
    for(auto s:s)
    cout<<s<<endl; 
    // ex 
    set<string>s;
    auto it = s.emplace("Wazeer");
    cout<<*it.first<<endl;//Wazeer
    // ex 
    set<string>s;
    auto it = s.emplace("Wazeer");
    cout<<it.second<<endl;//will print 1 meaning second element not exist
    // ex 
    set<string>s;
    auto it = s.emplace("Wazeer");
    it = s.emplace("Wazeer");
    cout<<it.second<<endl;//will print 0 meaning second element exist

    // ex 
    set<int>s{10,20,30,40,50,60,70,80,90};
    s.erase(50);//clear 50
    for(auto s:s)
    cout<<s<<endl;// 10 20 30 40 60 70 80 90
    // ex using iterator
    set<int>s{10,20,30,40,50,60,70,80,90};
    auto it=s.begin();
    ++++it; // 30 ++++++it 40 ++++++++it 50
    s.erase(it);//clear 30
    for(auto s:s)
    cout<<s<<endl;// 10 20 40 50 60 70 80 90
    // ex using iterator
    set<int>s{10,20,30,40,50,60,70,80,90};
    auto it=s.find(30);
    s.erase(it,s.end());//clear from 30 to end set
    for(auto s:s)
    cout<<s<<endl;// 10 20 
    // ex using iterator to clear in range
    set<int>s{10,20,30,40,50,60,70,80,90};
    auto itlow=s.lower_bound(30);
    auto itup=s.upper_bound(60);
    s.erase(itlow,itup);//clear from 30 to 60
    for(auto s:s)
    cout<<s<<endl;// 10 20 70 80 90
    // ex 
    set<int>s{10,20,30,40,50,60,70,80,90,100};
    auto com=s.key_comp();
    auto it = s.begin();
    int c=70;
    for(;com(*it,c);it++)
    cout<<*it<<endl;//will compare elements with 70 and print all elements before 70 ==>10 20 30 40 50 60
    // ex 
    set<int>s{10,20,30,40,50,60,70,80,90,100};
    cout<<s.count(20)<<endl;//does 20 is exist in set = 1 or not = 0 will print 1
    cout<<s.count(200)<<endl;//does 20 is exist in set = 1 or not = 0 will print 0 
    // ex 
    set<int>s{10,20,30,40,50,60,70,80,90,100};
    auto it = s.equal_range(40)<<endl;//will return2 value 1-element and 2-max than this element
    cout<<*it.first<<endl;//40
    cout<<*it.second<<endl;//50
    // ex 
    //you cannot edit about set elements read only
    set<int>s{10,20,30,40,50,60,70,80,90,100};
    auto it = s.begin();
    *it = 5;
    cout<<it<<endl;//will print error you cannot edit
    //not support random access
    s[1] = 500;//error
    // ex you can rearrange from min to max
    set<int,greater<int>>s{10,20,30,40,50,60,70,80,90,100};
    for(auto s:s)
    cout<<s<<" ";//100 90 80 70 60 50 40 30 20 10
    // ex 
    multiset<int>s{10,20,30,10,20,30,40,40,40,50};
     for(auto s:s)
    cout<<s<<" ";//10 20 30 10 20 30 40 40 40 50
    // ex 
    multiset<int>s{10,20,30,10,20,30,40,40,40,50};
    cout<<s.count(40)<<" ";//will print time of 40 exist in multiset will print 3


    return 0;
}