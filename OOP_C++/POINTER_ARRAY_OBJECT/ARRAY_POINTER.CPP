#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    //ex
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        cout<<*arr+i<<endl;//10 11 12 13 14 
    }
    //ex
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<endl;//10 20 30 40 50
        //cout<<arr[i]<<endl;//10 20 30 40 50
    }
    //ex
    int a=0;
    cout<<a + 1;//1
    cout<<a;//0
    //ex
    int a=0;
    cout<<a++;//1
    cout<<a;//1
    //ex
    int arr[5]={10,50,40,77,33};
    int *p;
    p = arr;
    cout<<*p<<endl;//10
    cout<<*p+1<<endl;//11
    cout<<*p+4<<endl;//14
    cout<<*p+6<<endl;//16
    cout<<*(p+1)<<endl;//50
    cout<<*(p+4)<<endl;//33
    cout<<*(p+3)<<endl;//77
    //ex
    int arr[5]={10,50,40,77,33};
    int *p;
    p = arr;
    p +=2;//will add 2 on address of 1st element in array
    cout<<*p<<endl;//40
    //ex
    int arr[5]={10,50,40,77,33};
    int *p;
    p = arr;
    p +=3;//will add 3 on address of 1st element in array
    cout<<*p<<endl;//77
    //ex
    int arr[5]={10,50,40,77,33};
    int *p;
    p = arr;
    for (size_t i = 0; i < 5; i++)
    {
        cout<<*p<<endl;//10 10 10 10 10
    }
    //ex
    int arr[5]={10,50,40,77,33};
    int *p;
    p = arr;
    for (size_t i = 0; i < 5; i++)
    {
        cout<<*p+1<<endl;//11 11 11 11 11
    }
    //ex
    int arr[5]={10,50,40,77,33};
    int *p;
    p = arr;
    for (size_t i = 0; i < 5; i++)
    {
        cout<<*p+3<<endl;//77 77 77 77 77
    }
    //ex
    int arr[5]={10,50,40,77,33};
    int *p;
    p = arr;
    for (size_t i = 0; i < 5; i++)
    {
        cout<<*(p+i)<<endl;//10 50 40 77 33
    }
    //ex
    int arr[5]={10,50,40,77,33};
    int *p;
    p = arr;
    for (size_t i = 0; i < 5; i++)
    {
        cout<<*p<<endl;
        ++p;//10 50 40 77 33
    }
    //ex
    int arr[5]={10,50,40,77,33};
    int *p;
    p = arr;
    for (size_t i = 0; i < 5; i++)
    {
        cout<<*(p++)<<endl;//10 50 40 77 33
    }
    //ex
    int arr[5]={10,50,40,77,33};
    int *p;
    p = arr;
    for (size_t i = 0; i < 5; i++)
    {
        cout<<*(arr++)<<endl;//run time error arrary is constant pointer cann't edit or change on it 
    }
    
    

    return 0;
}