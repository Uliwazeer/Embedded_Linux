#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>

using namespace std;
int main()
{
    // ex 
    pair<int,string>p(123,"Ali");
    cout<<p.first<<" ";
    cout<<p.second<<" ";
    // ex 
    pair<int,string>p(123,"Ali");
    cin>>p.first;//overwrite on 123 which user input
    cin>>p.second;//overwrite on Ali which user input
    // ex 
    pair<int,string>p(123,"Ali");
    p.first = 147; p.second = "Wazeer";
    cout<<p.first<<" ";//overwrite on 123 will print 147
    cout<<p.second<<" ";//overwrite on Ali will print Wazeer
    // ex 
    pair<string,pair<int,double>>NAS;//nested pair for more data type
    NAS.first = "Wazeer";
    NAS.second.first = 70;
    NAS.second.second = 75.5;
    cout<<"NAME : "<<NAS.first<<" AGE : "<<NAS.second.first<<" SALARY : "<<NAS.second.second<<endl;
    
    // ex you can make infinity number of pair
    pair<string,pair<int,pair<int,int>>>NAS;//nested pair for more data type
    NAS.first = "Wazeer";
    NAS.second.first = 70;
    NAS.second.second.first = 75;
    cout<<"NAME : "<<NAS.first<<" AGE : "<<NAS.second.first<<" SALARY : "<<NAS.second.second.first<<endl;
    // ex 
    vector<pair<int,string>>vp;
    vp.push_back(make_pair(12345,"Ali"));//way 1
    vp.push_back({12345,"Ali"});//way 2
    vp.push_back(pair<int,string(12345,"Ali"));//way 3 = way 2 = way 1
   
    // ex 
    vector<pair<int,string>>vp;
    vp.push_back({12345,"Ali"});//to print cout<<vp[0].first<<" "<<vp[0].second<<"\n";
    vp.push_back({12346,"Uli"});//to print cout<<vp[1].first<<" "<<vp[1].second<<"\n";
    vp.push_back({12347,"Aly"});//to print cout<<vp[2].first<<" "<<vp[2].second<<"\n";
    vp.push_back({12348,"Uly"});//to print cout<<vp[3].first<<" "<<vp[3].second<<"\n";
    //to print using for loop
    for (size_t i = 0; i <vp.size(); i++)
    {
        cout<<vp[i].first<<" _ "<<vp[i].second<<endl;
    }
    // ex using iterator more fast than loop in printing
    vector<pair<int,string>>vp;
    vector<pair<int,string>>::iterator it;
    vp.push_back({12345,"Ali"});//to print cout<<vp[0].first<<" "<<vp[0].second<<"\n";
    vp.push_back({12346,"Uli"});//to print cout<<vp[1].first<<" "<<vp[1].second<<"\n";
    vp.push_back({12347,"Aly"});//to print cout<<vp[2].first<<" "<<vp[2].second<<"\n";
    vp.push_back({12348,"Uly"});//to print cout<<vp[3].first<<" "<<vp[3].second<<"\n";
    //to print using iterator
    for (it=vp.begin();it!=vp.end();it++)
    {
        cout<<it->first<<" _ "<<it->second<<endl;
    }
    // ex using iterator foreach more fast than loop in printing
    vector<pair<int,string>>vp;
    vector<pair<int,string>>::iterator it;
    vp.push_back({12345,"Ali"});//to print cout<<vp[0].first<<" "<<vp[0].second<<"\n";
    vp.push_back({12346,"Uli"});//to print cout<<vp[1].first<<" "<<vp[1].second<<"\n";
    vp.push_back({12347,"Aly"});//to print cout<<vp[2].first<<" "<<vp[2].second<<"\n";
    vp.push_back({12348,"Uly"});//to print cout<<vp[3].first<<" "<<vp[3].second<<"\n";
    //to print using iterator foreach
    for (auto vp:vp)
    {
        cout<<vp.first<<" _ "<<vp.second<<endl;
    }
    
   
    return 0;
}