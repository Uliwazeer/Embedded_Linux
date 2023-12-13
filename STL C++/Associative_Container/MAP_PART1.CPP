#include <iostream>
#include<map>
#include <string>
using namespace std;
int main()
{
    //map[key]="value";
    // ex 
    map<int,string>m{{1234,"Ali"},{1235,"Muhammed"},{1236,"Adel"}};
    for(auto mm:m)
    cout<<mm.first<<" _ "<<mm.second<<endl;
    // ex addition element in map first way
    map<int,string>m{{1234,"Ali"},{1235,"Muhammed"},{1236,"Adel"}};
    m[2468] = "Hussieny";
    for(auto mm:m)
    cout<<mm.first<<" _ "<<mm.second<<endl;
    // ex addition element in map second way
    map<int,string>m{{1234,"Ali"},{1235,"Muhammed"},{1236,"Adel"}};
    m.at(2468) = "Hussieny";
    for(auto mm:m)
    cout<<mm.first<<" _ "<<mm.second<<endl;
    // ex iterator
    map<int,string>m{{1234,"Ali"},{1235,"Muhammed"},{1236,"Adel"}};
    map<int,string>::iterator it=m.begin();
    for(auto mm:m)
    cout<<it->first<<" _ "<<it->second<<endl;//will print 1234 Ali
    // ex iterator
    map<int,string>m{{1234,"Ali"},{1235,"Muhammed"},{1236,"Adel"}};
    map<int,string>::iterator it=m.begin();
    for(;it!=m.end();it++)
    cout<<it->first<<" _ "<<it->second<<endl;//will print all elements
    // ex iterator
    map<int,string>m{{1234,"Ali"},{1235,"Muhammed"},{1236,"Adel"}};
    map<int,string>::reverse_iterator it=m.rbegin();
    for(;it!=m.rend();it++)
    cout<<it->first<<" _ "<<it->second<<endl;//will print all elements from right to left
    // ex overwrite & editing Ali to become Wazeer
    map<int,string>m{{1234,"Ali"},{1235,"Muhammed"},{1236,"Adel"}};
    m[1234]="Wazeer";
    for(auto m:m)
    cout<<m.first<<" _ "<<m.second<<endl;//will 
    // ex 
    map<int,string>m{{1234,"Ali"},{1235,"Muhammed"},{1236,"Adel"}};
    m[1234]="Wazeer";
    cout<<m.count(12345)<<endl;//will 1 if key is exist in map and print 0 if key not exist in map
    // ex to add elements in map using 3 way 
    //this is first way
    map<char,int>m{{'a',10},{'b',20},{'c',30}};
    m.insert({'d',40});
    for(auto m:m)
    cout<<m.first<<" =>> "<<m.second<<endl;
    //this is second way
    map<char,int>m{{'a',10},{'b',20},{'c',30}};
    m.insert(make_pair('d',40));
    for(auto m:m)
    cout<<m.first<<" =>> "<<m.second<<endl;
    //this is third way
    map<char,int>m{{'a',10},{'b',20},{'c',30}};
    m.insert(pair<char,int>('d',40));
    for(auto m:m)
    cout<<m.first<<" =>> "<<m.second<<endl;
    //this is fourth way using iterator 
    map<char,int>m{{'a',10},{'b',20},{'c',30}};
    m.insert({'e',50});
    auto it=m.begin();
    m.insert(it,{'f',60});
    for(auto m:m)
    cout<<m.first<<" =>> "<<m.second<<endl;
    //this using iterator
    map<char,int>m{{'a',10},{'b',20},{'c',30}};
    m.insert({'e',50});
    auto it=m.begin();
    m.insert(it,{'f',60});
    m.insert(it,{'g',70});//will slow printing because iterator related with begin (first element)
    for(auto m:m)
    cout<<m.first<<" =>> "<<m.second<<endl;
    //this using iterator fifth way
    map<char,int>m{{'a',10},{'b',20},{'c',30}};
    m.insert({'e',50});
    auto it=m.begin();
    it=m.insert(it,{'f',60});//will store value at first element in  iterator
    m.insert(it,{'g',70});//
    for(auto m:m)
    cout<<m.first<<" =>> "<<m.second<<endl;
    //this using iterator fifth way
    map<char,int>m{{'a',10},{'b',20},{'c',30}};
    m.insert({'e',50});
    auto it=m.begin();
    it=m.insert(it,{'f',60});//will store value at first element in  iterator
    m.insert(it,{'g',70});//
    map<char,int>m2;
    m2.insert(m.begin(),m.find('f'));
    for(auto m:m2)
    cout<<m.first<<" =>> "<<m.second<<endl;//will add elements from start of map until char 'f'
    // ex addition using emplace
    map<char,int>m{{'a',10},{'b',20},{'c',30}};
    m.emplace('h',70);
    for(auto m:m)
    cout<<m.first<<" => "<<m.second<<endl;
    // ex addition using emplace + iterator to fast code
    map<char,int>m{{'a',10},{'b',20},{'c',30}};
    auto it=m.begin();
    m.emplace(it,'h',70);
    for(auto m:m)
    cout<<m.first<<" => "<<m.second<<endl;//print error because func emplace dont take iterator
    // ex addition using emplace + iterator to fast code
    map<char,int>m{{'a',10},{'b',20},{'c',30}};
    auto it=m.begin();
    m.emplace_hint(it,'h',70);
    for(auto m:m)
    cout<<m.first<<" => "<<m.second<<endl;//print results func emplace_hint() take iterator
    // ex remove using erase() first way
    map<char,int>m{{'a',10},{'b',20},{'c',30},{'d',40},{'e',50}};
    m.erase('a');//clear 1st element key & value
    for(auto m:m)
    cout<<m.first<<" => "<<m.second<<endl
    // ex remove using erase() second way using iterator
    map<char,int>m{{'a',10},{'b',20},{'c',30},{'d',40},{'e',50}};
    auto it=m.begin();
    it++;
    m.erase(it);//clear 1st element key & value
    for(auto m:m)
    cout<<m.first<<" => "<<m.second<<endl
    // ex remove range using erase() third way using iterator
    map<char,int>m{{'a',10},{'b',20},{'c',30},{'d',40},{'e',50}};
    auto it=m.begin();
    it++;
    m.erase(it,m.end());//clear 2nd element key & value till end of map
    for(auto m:m)
    cout<<m.first<<" => "<<m.second<<endl
    // ex remove range using erase() third way using iterator
    map<char,int>m{{'a',10},{'b',20},{'c',30},{'d',40},{'e',50}};
    auto it=m.begin();
    m.erase(it,m.find('c'));//clear from char 'c' element key & value till iterator(starting of map) of map
    for(auto m:m)
    cout<<m.first<<" => "<<m.second<<endl
    //ex equal_range+ pair first way
     map<char,int>m{{'a',10},{'b',20},{'c',30},{'d',40},{'e',50}};
     pair<map<char,int>::iterator,map<char,int>::iterator>it;//==auto it
     m.equal_range('c')
     cout<<m<<endl;
    //ex equal_range+ pair second way
     map<char,int>m{{'a',10},{'b',20},{'c',30},{'d',40},{'e',50}};
     auto it = m.equal_range('c')
     cout<<it.first->first<<" " <<it.first->second<<endl;
     cout<<it.second->first<<" " <<it.second->second<<endl;
   //ex key_compare
   map<char,int>m;
   m['a']=10;
   m['b']=20;
   m['c']=30;
   m['d']=40;
   m['e']=50;
   m['f']=60;
   m['g']=70;
   m['h']=80;
   map<char,int>::key_compare com=m.key_comp();
   auto it = m.begin();
   char c = 'f';
   for(;com(it->first,c);it++)
   cout<<it->first<<"=>"<<it->second<<endl;//will print all elements without char f and it's after
   //ex key_compare
   map<char,int>m;
   m['a']=10;
   m['b']=20;
   m['c']=30;
   m['d']=40;
   m['e']=50;
   m['f']=60;
   m['g']=70;
   m['h']=80;
   auto itlow=m.lower_bound('a');
   auto itup=m.upper_bound('e');
   m.erase(itlow,itup);
   for(auto mm:m)
   cout<<mm.first<<"=>"<<mm.second<<endl;//will print all elements without char f and it's after
   //ex key_compare
   map<char,int,greater<char>>m;//to arrange elements decending to char value==>> h g f e d c b a 
   m['a']=10;
   m['b']=20;
   m['c']=30;
   m['d']=40;
   m['e']=50;
   m['f']=60;
   m['g']=70;
   m['h']=80;
   for(auto mm:m)
   cout<<mm.first<<"=>"<<mm.second<<endl;//will print all elements without char f and it's after
   //ex key_compare
   map<char,int,greater<int>>m;//to arrange elements decending to int key==>> 80 70 60 50 40 30 20 10 
   m['a']=10;
   m['b']=20;
   m['c']=30;
   m['d']=40;
   m['e']=50;
   m['f']=60;
   m['g']=70;
   m['h']=80;
   for(auto mm:m)
   cout<<mm.first<<"=>"<<mm.second<<endl;//will print all elements without char f and it's after
   //ex when there are repeating we use multimap
   multimap<string,string>mp;
   mp.insert({"Ali","CS"});
   mp.insert({"Ali","CSE"});
   mp.insert({"Wazeer","CE"});
   for(auto m:mp)
   cout<<m.first<<" _ "<<m.second<<endl;
   //ex when there are repeating we use multimap if you wanna to edit IN KEY==error
   multimap<string,string>mp;
   mp.insert({"Ali","CS"});
   mp.insert({"Ali","CSE"});
   mp.insert({"Wazeer","CE"});
   auto it=mp.begin();
   it->first="XCV";//ERROR 
   for(auto m:mp)
   cout<<m.first<<" _ "<<m.second<<endl;
   //ex when there are repeating we use multimap if you wanna to edit VALUE 
   multimap<string,string>mp;
   mp.insert({"Ali","CS"});
   mp.insert({"Ali","CSE"});
   mp.insert({"Wazeer","CE"});
   auto it=mp.begin();
   it->second="XCV";//NOT ERROR 
   for(auto m:mp)
   cout<<m.first<<" _ "<<m.second<<endl;//WILL EDIT ON 1ST ELEMENT
   //ex dynamic way to edit value using find
   multimap<string,string>mp;
   mp.insert({"Ali","CS"});
   mp.insert({"Ali","CSE"});
   mp.insert({"Wazeer","CE"});
   auto it=mp.find("Ali");
   it++;
   it->second="CIS";//NOT ERROR 
   for(auto m:mp)
   cout<<m.first<<" _ "<<m.second<<endl;//WILL EDIT ON 2ND ELEMENT
   //ex to count number of string in map
   multimap<string,string>mp;
   mp.insert({"Ali","CS"});
   mp.insert({"Ali","CSE"});
   mp.insert({"Wazeer","CE"});
   cout<<mp.count("Ali");//Ali is exist 2 time in map
    return 0;
}