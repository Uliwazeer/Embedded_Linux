//STACK IMPLEMENTATION USING POINTER
#include <iostream>
using namespace std;
template<class t>
class stack{
    struct node{
        t item;
        node *next;
    };
    node *top;
public:
    stack(){
        top = NULL;
    }
    void push(t newItem)
    {
        node *newItemPtr = new node;
        if(newItemPtr==NULL)
            cout<<"STACK PUSH CANNOT ALLOCATE MEMORY";
        else{
        newItemPtr->item = newItem;
        newItemPtr-> = top;
        top=newItemPtr;
        }
    }
    bool isEmpty(){
        return top ==NULL;
    }
    void pop()
    {
        if(isEmpty())
            cout<<"STACK EMPTY ON POP";
    
    else{
        node*temp = top;
        top = top->next;
        top = top->next=NULL;
        delete temp;

    }
    }
     void pop(t &stackTop)
    {
        if(isEmpty())
            cout<<"STACK EMPTY ON POP";
    
    else{
        stackTop = top->item;
        node*temp = top;
        top = top->next;
        top = top->next=NULL;
        delete temp;

    }
    }
     void GetTop(t &stackTop)
    {
        if(isEmpty())
            cout<<"STACK EMPTY ON POP  ";
    
    else{
        stackTop = top->item;
        node*temp = top;
        top = top->next;
        top = top->next=NULL;
        delete temp;

    }
    }


};
