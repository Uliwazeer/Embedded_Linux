#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
bool GreaterThanThree(int i)
{
    return i >3;
}
using namespace std;
int main()
{//program to resize vector
/*
    vector<int>v(5);
    int n=0;
    for (size_t i = 0; i < v.size(); i++)
    {
        cin>>v[i];
        if(i==v.size()-1){
        cout<<"IF YOU WANNA RESIZE THE VECTOR"<<"ELSE PRESS -1 TO BREAK:";

        cin>>n;
        if(n==-1)
            break;
        else 
           v.resize(n);
        }

    }
    for (size_t i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    */
    //we can use iterator in printing it's fast
    // ex
    vector<int>v = {10,20,30,40,50,60};
    sort(v.begin(),v.end());
    // sort(v.rbegin(),v.rend()); == reverse(v.begin(),v.end()); 60 50 40 30 20 10
   cout<<*min_element(v.begin(),v.end())<<endl;//10
   cout<<*min_element(v.begin(),v.end()-2)<<endl;//
   cout<<*max_element(v.begin(),v.end())<<endl;//60
   cout<<*max_element(v.begin(),v.end()-2)<<endl;//
   auto pair = minmax_element(v.begin(),v.end());//10 60 
   cout<<*pair.first<<endl;//10
   cout<<*pair.second<<endl;//60

    for(int it : v)//foreach 
    {
        cout<<it<<endl;//10 20 30 40 50 60
    }
    //   ex
    vector<int>v={10,5,90,15,60,40,80,100,30};
    auto it = min_element(v.begin(),v.end());
    sort(v.begin(),it);
    for(auto i : v)
    {
        cout<<i<<endl;//will raarrange vector
    }
    //   ex
    vector<int>v={10,5,90,15,60,40,80,100,30};
    sort(v.begin(),it);
    auto it = find_if(v.begin(),v.end(),GreaterThanThree);
    for(; it != v.end(); it++)
    {
        cout<<*it<<endl;//will raarrange vector
    }
// ex
int arr[]={10,20,30,40,50,60,70};
vector<int>v(7);
copy(arr,arr+7,v.begin());// try arr+9 & arr+5
cout<<"VECTOR ELEMENTS";
for(auto it:v)
cout<<it<<"\n"; 
    // ex 
    vector<int>from_vector = {1,2,3,4,5,6,7,8,9,10};
    vector<int>to_vector(15);
    copy_backward(from_vector.begin(),from_vector.end(),to_vector.end());
    cout<<"TO_VECTOR ELEMENTS";
    for(auto i : to_vector)
    cout<<i<<endl;
    // ex 
    vector<int>v={1,2,3,4,5,6,7,8,9};
    copy(v.begin(),v.end(),ostreambuf_iterator<int>(cout," "));
    // ex 
    vector<int>v={1,2,3,4,5,6,7,8,9};
    int arr[]={90,80,70,60,50,40,30,20,10};
    copy(arr,arr+9,ostreambuf_iterator<int>(cout," "));
// ex 
vector<int>v;
cout<<"ENTER SEQUANCE OF INTEGERS "<<"PRESS Q TO QUIT "<<endl<<"INPUT : ";
copy(istream_iterator<int>(cin),
    istream_iterator<int>(),
    ostream_iterator<int>(cout,"\nINPUT : "));
int arr  
    return 0;
}