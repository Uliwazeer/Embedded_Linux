//STACK IMPLEMENTATION USING ARRAY
//EX1
#include <iostream>
using namespace std;
const int Max_Size=100;
class stack{
    int top;
    int item[Max_Size];
    public:
    stack():top(-1){}
    void push(int Element)
    {
        if(top >=Max_Size - 1)//0-99
        {
            cout<<"STACK IS FULL";
        }
        else{
        top++;
        item[top]=Element;
        }
    }
    bool isEmpty()
    {
        return top <0;

    }
    void pop()
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else 
            top--;

    }
     void pop(int Element)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else {
            Element = item[top];
            top--;
        }

    }
     void getTop(int&stackTop)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY ON GETTOP";
        else {
            stackTop = item[top];
            cout<<stackTop<<endl;
        }
        }
        void print()
        {
            cout<<"[";
            for(int i=0;i<=top;i++)
            {
                cout<<item[i]<<" ";
            }
            cout<<"]";
            cout<<endl;
        }
};
int main()
{
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.print();
}
// EX2 GETTOP NUMBER IN STACK
#include <iostream>
using namespace std;
const int Max_Size=100;
class stack{
    int top;
    int item[Max_Size];
    public:
    stack():top(-1){}
    void push(int Element)
    {
        if(top >=Max_Size - 1)//0-99
        {
            cout<<"STACK IS FULL";
        }
        else{
        top++;
        item[top]=Element;
        }
    }
    bool isEmpty()
    {
        return top <0;

    }
    void pop()
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else 
            top--;

    }
     void pop(int Element)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else {
            Element = item[top];
            top--;
        }

    }
     void getTop(int&stackTop)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY ON GETTOP";
        else {
            stackTop = item[top];
            cout<<stackTop<<endl;
        }
        }
        void print()
        {
            cout<<"[";
            for(int i=0;i<=top;i++)
            {
                cout<<item[i]<<" ";
            }
            cout<<"]";
            cout<<endl;
        }
};
int main()
{
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    int y=0;
    s.getTop(y);
}
// EX3 REVERSE STACK 
#include <iostream>
using namespace std;
const int Max_Size=100;
class stack{
    int top;
    int item[Max_Size];
    public:
    stack():top(-1){}
    void push(int Element)
    {
        if(top >=Max_Size - 1)//0-99
        {
            cout<<"STACK IS FULL";
        }
        else{
        top++;
        item[top]=Element;
        }
    }
    bool isEmpty()
    {
        return top <0;

    }
    void pop()
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else 
            top--;

    }
     void pop(int Element)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else {
            Element = item[top];
            top--;
        }

    }
     void getTop(int&stackTop)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY ON GETTOP";
        else {
            stackTop = item[top];
            cout<<stackTop<<endl;
        }
        }
        void print()
        {
            cout<<"[";
            for(int i=top;i>=0;i--)//REVERSE STACK
            {
                cout<<item[i]<<" ";
            }
            cout<<"]";
            cout<<endl;
        }
};
int main()
{
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.print();
}
// EX4 
#include <iostream>
using namespace std;
const int Max_Size=100;
class stack{
    int top;
    int item[Max_Size];
    public:
    stack():top(-1){}
    void push(int Element)
    {
        if(top >=Max_Size - 1)//0-99
        {
            cout<<"STACK IS FULL";
        }
        else{
        top++;
        item[top]=Element;
        }
    }
    bool isEmpty()
    {
        return top <0;

    }
    void pop()
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else 
            top--;

    }
     void pop(int Element)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else {
            Element = item[top];
            top--;
        }

    }
     void getTop(int&stackTop)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY ON GETTOP";
        else {
            stackTop = item[top];
            //cout<<stackTop<<endl;
        }
        }
        void print()
        {
            cout<<"[";
            for(int i=top;i>=0;i--)
            {
                cout<<item[i]<<" ";
            }
            cout<<"]";
            cout<<endl;
        }
};
int main()
{
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    int y=0;
    s.getTop(y);
    cout<<y<<endl;//20
}
// EX5 SAME EX4 BUT WE REMOVE & FROM getTop
#include <iostream>
using namespace std;
const int Max_Size=100;
class stack{
    int top;
    int item[Max_Size];
    public:
    stack():top(-1){}
    void push(int Element)
    {
        if(top >=Max_Size - 1)//0-99
        {
            cout<<"STACK IS FULL";
        }
        else{
        top++;
        item[top]=Element;
        }
    }
    bool isEmpty()
    {
        return top <0;

    }
    void pop()
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else 
            top--;

    }
     void pop(int Element)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else {
            Element = item[top];
            top--;
        }

    }
     void getTop(int stackTop)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY ON GETTOP";
        else {
            stackTop = item[top];
            //cout<<stackTop<<endl;
        }
        }
        void print()
        {
            cout<<"[";
            for(int i=top;i>=0;i--)
            {
                cout<<item[i]<<" ";
            }
            cout<<"]";
            cout<<endl;
        }
};
int main()
{
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    int y=0;
    s.getTop(y);
    cout<<y<<endl;//0
}
// EX6
#include <iostream>
using namespace std;
const int Max_Size=100;
class stack{
    int top;
    int item[Max_Size];
    public:
    stack():top(-1){}
    void push(int Element)
    {
        if(top >=Max_Size - 1)//0-99
        {
            cout<<"STACK IS FULL";
        }
        else{
        top++;
        item[top]=Element;
        }
    }
    bool isEmpty()
    {
        return top <0;

    }
    void pop()
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else 
            top--;

    }
     void pop(int Element)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else {
            Element = item[top];
            top--;
        }

    }
     void getTop(int&stackTop)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY ON GETTOP";
        else {
            stackTop = item[top];
            //cout<<stackTop<<endl;
        }
        }
        void print()
        {
            cout<<"[";
            for(int i=top;i>=0;i--)
            {
                cout<<item[i]<<" ";
            }
            cout<<"]";
            cout<<endl;
        }
};
int main()
{
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.pop();
    s.push(8);
    s.print();//8 15 10 5
}
//EX7 IF I WANT STACK RECIVE ANY DATA TYPE WILL USE TEMPELETE
#include <iostream>
using namespace std;
const int Max_Size=100;
template <class t>
class stack{
    t top;
    t item[Max_Size];
    public:
    stack():top(-1){}
    void push(t Element)
    {
        if(top >=Max_Size - 1)//0-99
        {
            cout<<"STACK IS FULL";
        }
        else{
        top++;
        item[top]=Element;
        }
    }
    bool isEmpty()
    {
        return top <0;

    }
    void pop()
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else 
            top--;

    }
     void pop(t&Element)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else {
            Element = item[top];
            top--;
        }

    }
     void getTop(t&stackTop)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY ON GETTOP";
        else {
            stackTop = item[top];
            //cout<<stackTop<<endl;
        }
        }
        void print()
        {
            cout<<"[";
            for(int i=top;i>=0;i--)
            {
                cout<<item[i]<<" ";
            }
            cout<<"]";
            cout<<endl;
        }
};
int main()
{
    stack<int> s;//if you change data type just change int into any data type you want
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.pop();
    s.push(8);
    s.print();
}
//EX8
#include <iostream>
using namespace std;
const int Max_Size=100;
template <class t>
class stack{
    t top;
    t item[Max_Size];
    public:
    stack():top(-1){}
    void push(t Element)
    {
        if(top >=Max_Size - 1)//0-99
        {
            cout<<"STACK IS FULL";
        }
        else{
        top++;
        item[top]=Element;
        }
    }
    bool isEmpty()
    {
        return top <0;

    }
    void pop()
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else 
            top--;

    }
     void pop(t&Element)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY";
        else {
            Element = item[top];
            top--;
        }

    }
     void getTop(t&stackTop)
    {
        if(isEmpty())
            cout<<"STACK IS EMPTYY ON GETTOP";
        else {
            stackTop = item[top];
            //cout<<stackTop<<endl;
        }
        }
        void print()
        {
            cout<<"[";
            for(int i=top;i>=0;i--)
            {
                cout<<item[i]<<" ";
            }
            cout<<"]";
            cout<<endl;
        }
};
int main()
{
    stack<char> s;
    s.push('A');
    s.push('B');
    s.push('C');
    s.push('D');
    s.pop();
    s.push('E');
    s.print();
}
//EX9
#include<iostream>
using namespace std;
const int MAX_SIZE = 3;
template<class t>
class stack {
	int top;
	t item[MAX_SIZE];
public:
	stack() :top(-1) {}
	bool isEmpty()
	{
		return top < 0;
	}

	void push(t Element)
	{
		if (top >= MAX_SIZE-1)
		{
			cout << "Stack full on push";
		}
		else
		{
			top++;
			item[top] = Element;
		}
	}
	void pop()
	{
		if (isEmpty())
			cout << "stack empty on pop";
		else
			top--;
	}
	void pop(t&Element)
	{
		if (isEmpty())
			cout << "stack empty on pop";
		else {
			Element = item[top];
			top--;
		}
	}
	void getTop(t&stackTop)
	{
		if (isEmpty())
			cout << "stack empty on getTop";
		else {
			stackTop = item[top];
			cout << stackTop << endl;
		}
	}
	void print() {
		cout << "[ ";
		for (int i = top; i >= 0; i--)
		{
			cout << item[i] << " ";
		}
		cout << "]";
		cout << endl;

	}
};
int main() {
	stack<string>s;
	s.push("Ali");
    s.push("Nour");
    s.push("Muhammed");
    s.print();
}