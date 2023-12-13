#include <iostream>
#include<unordered_map>
#include <string>
using namespace std;
int main()
{

// ex 
unordered_map<string,int>um{{"BMW",2023},{"KIA",2024}};
cout<<um["BMW"]<<endl;//2023
cout<<um.at("BMW")<<endl;//2023
// ex
unordered_map<string,int>um{{"BMW",2023},{"KIA",2024}};
cout<<um["CRUSE"]<<endl;//0
cout<<um.at("CRUSE")<<endl;//run time error
// ex another way to initilize prametrize constructor
unordered_map<string,int>um({{"BMW",2023},{"KIA",2024}});
cout<<um.at("KIA")<<endl;//2024
// ex MODIFIYING EDITING
unordered_map<string,int>um({{"BMW",2023},{"KIA",2024}});
um["KIA"]=2025;
cout<<um.at("KIA")<<endl;//2025
// ex MODIFIYING EDITING on value not exist
unordered_map<string,int>um({{"BMW",2023},{"KIA",2024}});
um["JEEP"]=2030;
cout<<um.at("JEEP")<<endl;//2030
// ex MODIFIYING EDITING USING INSERT
unordered_map<string,int>um({{"BMW",2023},{"KIA",2024}});
um["BMW"]=2030;
um.insert({"BMW",2040});
cout<<um.at("JEEP")<<endl;//2030 WILL IGNORE INSERT() BECAUSE THIS KEY IS REPEATED
// ex MODIFIYING EDITING USING INSERT
unordered_map<string,int>um({{"BMW",2023},{"KIA",2024}});
um["BMW"]=2030;
um.insert_or_assign({"BMW",2040});
cout<<um.at("JEEP")<<endl;//2040 WILL not IGNORE INSERT() & overwrite on 2030 to become 2040
// ex TAKE FIRST INDEX FROM LEFT TO RIGHT
unordered_map<string,int>um({{"BMW",2023},{"KIA",2024}});
cout<<um.begin()->first<<endl;//BMW
// ex MAP MAKE SORT ACCORDING TO ALPHAPET
map<string,int>um({{"BMW",2023},{"KIA",2024}});
cout<<um.begin()->first<<endl;//KIA
// ex how many number you can add in map
unordered_map<string,int>um({{"BMW",2023},{"KIA",2024}});
cout<<um.max_size()<<endl;//size of map
cout<<um.empty()<<endl;// 
cout<<um.size()<<endl;//size of map
cout<<um.clear()<<endl;//
/*
-emplace() is better than insert in space
-insert take big space in memory
-try_emplace() dont take space if element not found
-extract() can change key 

*/
//ex
unordered_map<string,int>um({"MERCEDES",2015},{"BMW",2020},{"KIA",2025},{"HUNDA",2030});
cout<<um.bucket("KIA")<<endl;//0 exist in bucket zero
cout<<um.bucket("BMW")<<endl;//5 exist in bucket FIVE
//ex where elements exist in buckets and it's number
unordered_map<string,int>um({"MERCEDES",2015},{"BMW",2020},{"KIA",2025},{"HUNDA",2030});
int n=um.bucket_count();
cout<<"UNORDERED_MAP HAS "<<n<<" BUCKETS.\n ";
for (size_t i = 0; i < n; i++)
{
    cout<<"BUCKET #"<<i<<"CONTAINS: ";
    for(auto it= um.begin(i);it!=um.end(i);it++)//try this for(auto it= um.begin();it!=um.end();it++) & for(auto it= um.begin(i);it!=um.end();it++)
    cout<<"["<<it->first<<":"<<it->second<<"]";
    cout<<"\n";
}
// ex how many element in bucket num zero 
unordered_map<string,int>um({"MERCEDES",2015},{"BMW",2020},{"KIA",2025},{"HUNDA",2030});
cout<<um.bucket_size(0)<<endl;
// ex how many element in bucket num three 
unordered_map<string,int>um({"MERCEDES",2015},{"BMW",2020},{"KIA",2025},{"HUNDA",2030});
cout<<um.bucket_size(3)<<endl;
cout<<um.max_bucket_count()<<endl;//how many elements can store in buckets
cout<<um.load_factor()<<endl;//0.5=size()/bucket
cout<<um.max_load_factor()<<endl;//1 it is consederd each bucket contain one element 
// ex how can i make search on specific element 
unordered_map<string,int>um({"MERCEDES",2015},{"BMW",2020},{"KIA",2025},{"HUNDA",2030});
auto search = um.find("BMW");
if(search!=um.end())
cout<<"FOUND"<<endl;

else 
cout<<"NOT FOUND\n";
//ex if you want to add more than key we use unordered_multimap
unordered_multimap<string,int>um({"MERCEDES",2015},{"BMW",2020},{"KIA",2025},{"HUNDA",2030});

    return 0;
}