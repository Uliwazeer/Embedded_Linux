#include <iostream>
#include<map>
#include <string>
using namespace std;
 int arr[100];
 int freq[100];
 template<typename type>
 struct comp{
    bool operator()(const type & first,const type &second)comp
    {
        return first>second;
    }

 };
int main()
{
    // ex 
    map<string,int>GradeByName;
    GradeByName.insert({"Ali",100});
    GradeByName.insert({"Wazeer",200});
    GradeByName.insert({"Muhammed",300});
    GradeByName.insert({"Nour",400});
    string n;
    cin>>n;
    int c=0;
    for(auto it=GradeByName.begin();it!=GradeByName.end();it++){
    if(it->first==n)
    cout<<"THE GRADE IS -> "<<it->second<<endl;
    c++;
    break;
    }
    if(c==0)
    cout<<"YOUR ENTERED NAME NOT FOUND"<<endl;
    // ex frequancy array 
    int arr[]={3,3,1,1,2,2,5};
    cout<<sizeof(arr)<<endl;//28
    cout<<sizeof(arr[0])<<endl;//4
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;//8
    //ex frequancy array
     int arr[]={3,3,1,1,2,2,5,4,4,2,5};
     int n=sizeof(arr)/sizeof(arr[0]);
     sort(arr,arr+n);//1 1 2 2 2 3 3 4 4 5 5
     int c=0;
     for(int i=0;i<n;i++)
     {
        if(arr[i]==arr[i+1])
        c++;
        else{
            cout<<arr[i]<<"=>"<<c<<endl;
            c=1;
        }

     }
    //ex frequancy array number of repeating 3
     int arr[]={3,3,1,1,2,2,5,4,4,2,5};
     int n=sizeof(arr)/sizeof(arr[0]);
     sort(arr,arr+n);//1 1 2 2 2 3 3 4 4 5 5
     int c=0;
     for(int i=0;i<n;i++)
     {
        if(arr[i]==arr[i+1])
        c++;
        else{
           // cout<<arr[i]<<"=>"<<c<<endl;
            c=1;
        }

     }
     cout<<arr[5]<<endl;//2 times
    //  ex second way in freq areray using 2 array
    int arr[100];
    int freq[100] = {0};
    int n;
    cin>>n;
    for(int n=1;i<=n;i++)
    {
        cin>>arr[i];//1 1 1
        int x=arr[i];
        freq[x]++;//freq[1]++ =>3
    }
    sort(arr,arr+n);
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<"=>"<<freq[arr[i]]<<endl;
    }
    //  ex second way same previous example
    int arr[100];
    int freq[100] = {0};
    int n;
    cin>>n;
    for(int n=1;i<=n;i++)
    {
        cin>>arr[i];//1 1 1
        freq[arr[i]]++;//freq[1]++ =>3
    }
    sort(arr,arr+n);
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<"=>"<<freq[arr[i]]<<endl;
    }
    //  ex if you want to not printing repeating element in freq array
    int arr[100];
    int freq[100] = {0};
    int n;
    cin>>n;
    for(int n=1;i<=n;i++)
    {
        cin>>arr[i];//1 1 1
        freq[arr[i]]++;//freq[1]++ =>3
    }
    sort(arr,arr+n);
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=arr[i+1])
        cout<<arr[i]<<"=>"<<freq[arr[i]]<<endl;
    }
    //in previous ex if you entered ngative number will print garbage(random) value to solve this problem we must define arr as global var to become all var are zeros
    int n;
    cin>>n;
    for(int n=1;i<=n;i++)
    {
        cin>>arr[i];//1 1 1
        freq[arr[i]]++;//freq[1]++ =>3
    }
    sort(arr,arr+n);
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=arr[i+1])
        cout<<arr[i]<<"=>"<<freq[arr[i]]<<endl;
    }
    // ex map can solve freq array & performance in map is better than previous array
    //freq array using map 
    map<int,int>m;
    cout<<"ENTER SIZE OF ELEMENTS"<<endl;
    int s;
    cin>>s;
    for (size_t i = 0; i < s; i++)
    {
        int n;
        cin>>n;
        m[n]++;
    }
    for(auto m :m)
    cout<<m.first<<"=>"<<m.second<<endl;
    // ex 
    map<int,string>mp;
    mp[1]="one";
    mp[2]="two";
    mp[3]="three";
    for(auto m :mp)
    cout<<m.first<<" _ "<<m.second<<endl;
    // ex to print from max to min for key
    map<int,string,greater<int>>mp;
    mp[1]="one";
    mp[2]="two";
    mp[3]="three";
    for(auto m :mp)
    cout<<m.first<<" _ "<<m.second<<endl;
    // ex to print from max to min for value
    map<int,string,greater<string>>mp;
    mp[1]="one";
    mp[2]="two";
    mp[3]="three";
    for(auto m :mp)
    cout<<m.first<<" _ "<<m.second<<endl;
    //to compare in map we need struct & templete to recive any data type
     map<int,string,com<int>>mp;
    mp[1]="one";
    mp[2]="two";
    mp[3]="three";
    for(auto m :mp)
    cout<<m.first<<" _ "<<m.second<<endl;//wiull arrange from max to min
    return 0;
}