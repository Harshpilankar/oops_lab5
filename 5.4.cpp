/**
Lab Id: 5.4
Program Title: Operator Overloading
Author: Harsh Pilankar
Roll no.: 21CO42
Language: CPP
Class: BE Computer B
Due Date: 13 october
-------------------------------
Description: Write a program to overload ++ operator using friend functions
Input:
Output:
Algorithms:
Prerequisite: NULL
Known bugs: NULL
===============================*/

#include<iostream>
using namespace std;

class Overloadfriend
{
    int value;
    public:
        Overloadfriend(){value=0;}
        Overloadfriend(int n){value=n;}
        friend void operator++(Overloadfriend &q);
        friend void operator++(Overloadfriend &q,int);
        void display()
        { cout<<value<<endl;}
};
void operator++(Overloadfriend &op)
{
    op.value++;
}
void operator++(Overloadfriend &op,int not_used)
{
    op.value=op.value;
}

int main()
{
    Overloadfriend i,i2(7);
    cout<<"================FRIEND OPERATOR OVERLOADING=============="<<endl<<endl;
    cout<<"Initial Value = ";
        i.display();       //Displaying initial value

        ++i;                //Incrementing

        cout<<"New Value = ";
        i.display();      //Displaying Incremented value

        cout<<"=================================================="<<endl<<endl;
        cout<<"Initial Value = ";
        i2.display();       //Displaying initial value

        i2++;               //Incrementing

        cout<<"Incremented Value = ";
        i2.display();      //Displaying Incremented value


}
