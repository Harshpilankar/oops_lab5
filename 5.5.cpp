/**
Lab Id: 5.4
Program Title: Operator Overloading
Author: Harsh Pilankar
Roll no.: 21CO42
Language: CPP
Class: BE Computer B
Due Date: 13 october
-------------------------------
Description: Write a program to overload << and >> stream insertion operator

Input:
Output:
Algorithms:
Prerequisite: NULL
Known bugs: NULL
===============================*/

#include<iostream>
using namespace std;

class  Insertion
{
    int value;
    public:
        Insertion(){value=0;}
        Insertion(int n){value=n;}
        friend void operator<<(ostream &out ,Insertion &op);
        friend void operator>>(istream &in,Insertion &op);

};
void operator<<(ostream &out, Insertion &op)
{ out<<op.value;
}
void operator>>(istream &in ,Insertion &op)
{ in>>op.value;
}
int main()
{   Insertion i1;
    cout<<"================FRIEND OPERATOR OVERLOADING=============="<<endl<<endl;
    cout<<"Initial Value: ";
    cin>>i1;
    cout<<"New Value = "<<i1;
    return 0;
}

