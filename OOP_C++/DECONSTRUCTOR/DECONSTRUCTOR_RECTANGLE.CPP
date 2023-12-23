#include <iostream>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

class RECTANGLE
{
    private: //if you not written compiler considered it by default private
    int W,H;
    public:
    RECTANGLE(){//default constructor
    //empty constructor
    };
    RECTANGLE():W(0),H(0){
        cout<<W<<" "<<H<<" "<<"\n";  
    }
    RECTANGLE(int a,int b):W(0),H(0)//constructor parametrize
    {
        W = a;
        H = b;
        cout<<"A RECTANGLE HAS BEEN CREATED\n";
        RECTANGLE R;
        // RECTANGLE R(17,54);//infinity loop
    }
    ~RECTANGLE()
    {
        cout<<W<<" "<<H<<"A RECTANGLE HAS BEEN DELETED\n";
    }
};
int main()
{
    RECTANGLE R1(4,5),R2(10,50); 
    //will excute R2 firstly in printing then R1 because Destructor excute from down to up
    RECTANGLE R3;//eror should have intilize constructor default (empty constructor)

    return 0;
}