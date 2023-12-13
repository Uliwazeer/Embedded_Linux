#include <iostream>
#include<map>
#include <string>
#include <unordered_set>
using namespace std;
int main()
{
    // ex 
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    for(auto s:us)
    cout<<s<<endl;
    // ex to know where bucket element stored
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    for(auto s:us)
    cout<<s<<"IS IN BUCKET #"<<us.bucket(s)<<endl;
    // ex to know number of buckets
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    cout<<"NUM OF BUCKET IS = "<<us.bucket.count()<<endl;
    // ex to know each element where is stored in buckets and name of backet using iterator
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    unordered_set<string>::iterator it;
    int c=us.backet_count();
    for(int i=0;i<c;i++)
    {
        cout<<"BUCKET # "<<i<<"CONTAINS:\n";
        for(it=us.begin(i);it!=us.end(i);it++)//for(it=us.begin();it!=us.end();it++) will print all nums 
        cout<<*it<<endl;
        cout<<endl;
    }
    
    cout<<"NUM OF BUCKET IS = "<<us.bucket.count()<<endl;
    // ex to know each bucket how many element exist in without printing these element
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    unordered_set<string>::iterator it;
    int c=us.backet_count();
    for(int i=0;i<c;i++)
    {
        cout<<"BUCKET # "<<i<<"CONTAINS:"<<us.bucket_size(i)<<endl;
        //will print 
        cout<<endl;
    }
    //each bucket has specific number to store in
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    cout<<us.load_factor()<<endl;//0.875=size()/bucket_count()
    cout<<us.size()<<endl;//7
    cout<<us.backet_count()<<endl;//8
    cout<<us.max_load_factor()<<endl;//1 how many num of element stored in 1 bucket
    cout<<us.max_bucket_count()<<endl;//1 how many num of bucket can stored elements
    /* ex addition using 3 ways
    1-insert() store in memory
    2-emplace()
    3-emplace_hint() useing iterator ,reduce complexity,high performance
    */
   //first way in addition using insert()
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    us.insert("5 O'CLOCK");//will store based on bucket which addition in
    for(auto us:us)
    cout<<us<<endl;
   //first way in addition using insert()
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    us.insert("5 O'CLOCK,7 O'CLOCK");//will store based on bucket which addition in
    for(auto us:us)
    cout<<us<<endl;
   //first way in addition using insert() +array
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    string arr[]=({"9 O'CLOCK","11 O'CLOCK"});
    us.insert("5 O'CLOCK,7 O'CLOCK");//will store based on bucket which addition in
    us.insert(arr,arr+2);
    for(auto us:us)
    cout<<us<<endl;
    /*erase using
    1-erase by iterator
    2-erase by key
    3-erase by range
    */
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    us.erase(us.begin());
    for(auto us:us)
    cout<<us<<endl;//will clear MON NOT SUN
//    ex same previous ex with another way
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    auto it = us.begin();
    us.erase(*it);
    for(auto us:us)
    cout<<us<<endl;//will clear MON NOT SUN
    //ex erase by key
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    auto it = us.begin();
    us.erase("WED");
    for(auto us:us)
    cout<<us<<endl;//WILL CLEAR WED 
    //ex erase by range
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    auto it = us.begin();
    us.erase(us.find("WED"),us.end());
    for(auto us:us)
    cout<<us<<endl;//WILL CLEAR FROM WED TO END OF SET 
    //HASH FUNC + iterator
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    unordered_set<string>::hasher fn;
    fn=us.hash_function();
    cout<<fn("Ali")<<endl;//will print num of bucket which string Ali will stored in
    //ex
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    cout<<us.count("XCV")<<endl;//0 NOT EXIST IN SET
    cout<<us.count("THU")<<endl;//1 EXIST IN SET
    /*
    -WROST CASE IF ALL ELEMENTS STORED IN SAME BUCKET
    -WE USE FUNC REHASH(NUM) & NUM MUST GREATER THAN NUM OF BUCKET
    -rehash func make new distribution(rearrange) for elements in buckets
    us.rehash(10)
*/
// ex 
    unordered_set<string>us({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    cout<<"NUM OF BUCKETS = "<<us.count()<<endl;
    //ex dont print repeat nums
    unordered_set<string>us({1,2,3,4,5,6,1,2,3,4,5,7,8});
    for(auto us:us)
    cout<<us<<endl;//1 2 3 4 5 6 7 8
    //ex print repeat nums we use multiset
    unordered_multiset<string>us({1,2,3,4,5,6,1,2,3,4,5,7,8});
    for(auto us:us)
    cout<<us<<endl;//1 1 2 2 3 3 4 4 5 5 6 7 8

    





    return 0;
}
