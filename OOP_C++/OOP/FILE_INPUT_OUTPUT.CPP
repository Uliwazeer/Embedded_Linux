#include<iostream>
using namespace std;
int main()
{
    //ex1
    ofstream Ali_file;//initilize file name
    Ali_file.open("Ali.txt");//type file
    cout<<"FACULTY OF ENGINEERING\n";//text will written in Ali_file
    Ali_file.close();//file will be found at Documents
    
    //ex2
    ofstream Ali_file("Ali.txt");//initilize file name
    Ali_file<<"FACULTY OF ENGINEERING\n";//text will written in Ali_file
    Ali_file.close();//file will be found at Documents
    
    //ex3
    ofstream Ali_file("c:/Ali.txt");//initilize file name
    Ali_file<<"FACULTY OF ENGINEERING\n";//text will written in Ali_file
    Ali_file.close();//file will be found at C Partition
    //ex4
    ofstream alifile("a.txt");
    if(alifile.is_open())
    cout<<"IT'S OPEN\n";
    else 
    cout<<"IT IS CLOSE\n";
    alifile.close();
    //ex5
    ofstream alifile("sfile.txt");
    cout<<"ENTER STUDENT STATUS\n";
    cout<<"PRESS CTRL+Z TO EXIT\n";
    char name[10];
    int id;
    while (cin>>name>>id)
    {
        alifile<<name<<" "<<id<<endl;
    }
    //ex6
    int arr[10];
    int j=0;
    for(int i=0;i<10;i++)
    {
        j=i*10;
        arr[i]=j;
    }
    
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    ofstream fout("text.txt",ios::binary);//store file as binary
    fout.wrte(reinterpret_cast<char*>(arr),10*sizeof(int));//or fout.write((char*)&arr,sizeof arr);
    fout.close();
    //ex7
    int arr[20];
    int i=0;
    ifstream fin("test.txt",ios::binary);
    fin.read((char*)&arr,10*sizeof(int));
    for(i=10;i<20;i++)
    {
        arr[i]=i*10;
    }
    for(i=0;i<20;i++)
    {
        cout<<arr[i]<<endl;
    }
    fin.close();


    return 0;
}