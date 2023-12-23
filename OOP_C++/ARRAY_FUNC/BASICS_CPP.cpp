#include <iostream>
#include <stdio.h>
using namespace std;
// typedef unsigned char bool;
// #define FALSE 0
// #define TRUE 1

void fun(int x, int y=3)
{
    cout<< "X = "<<x<<"\n"<<"Y = "<<y<<"\n";
}
int main(){
//session 1
    printf("Ali Wazeer\n");
    // std::cout<<"Hello, Eng. Ali Wazeer"<<"\n";
    // bool x1 = true;
    // bool x2 = false;
    // bool x3 = 1;
    // bool x4 = 0;
    // cout<<x1<<"\n"<<x2<<"\n"<<x3<<"\n"<<x4<<"\n";
    // cout<<boolalpha<<x4<<"\n"; //boolalpha make 1 as true & 0 as false

//session 2
    //wchar_t x = 'ع'; //or typedef unsighned short wchar_t to sore in 2 byte instead 4 byte
    //cout<<"Size x = "<<sizeof(x)<<"\n"<<"Value of x in wchar = "<<x<<"\n";
//Session 3 Ranged For Loop
    //ordinary array
    // int arr[3] = {10,20,30};
    // for(int i=0; i<3; i++)
    // {
    //     cout<<i<<"\n";
    // }
    //ranged for loop take more instruction than ordinary array
    // for(int i : arr){
    //     cout<<i<<"\n";
    // }
    //     return 0;
    // }
//Session 4 Function
    // fun(2);
    // fun(2,5);

//Sesiion 5 Initilization
//Session 6 References
    int x{10};
    int &y = x;
    int *ptr = &x;
    y = 3;
    cout<<"Ref y= "<<y<<"\n"<< "x = "<<x<<"\n"<<"ptr"<<*ptr<<"\n";
    //change referance
    int n=0;
    y=n;
    y=12;
    cout<<"x"<<x<<"\n"<<"n"<<n<<"\n";
    //unintilized reference is error int &a; is error
    //pass by value
    //pass by referance
    //pass pointer
//Session 9 auto
auto var1 = 10;
auto var2 = 10.5F;
auto var3 = 'a';
auto var4 = "Const Char";
auto var5 = string("Ali Wazeer");

//with const 
const int x=10;
auto var6 = x;
//to make it const 
const auto var7=x;

//with referance const 
auto &var8=x;
//pointer const 
auto ptr = &x;
//initilizer list 
auto lst = {1,2,3,4,5,6} //error
//auto lst{1,2,3,4,5,6};
//most common used
std::vector<int>obj{1,2,3,4,5,6};
auto it=obj.begin(); //std::vector<int>::iterator



return 0;
}