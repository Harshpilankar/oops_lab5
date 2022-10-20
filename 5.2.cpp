/**
Lab Id: 5.2
Program Title: Operator Overloading
Author: Harsh Pilankar
Roll no.: 21CO42
Language: CPP
Class: BE Computer B
Due Date: 13 october
-------------------------------
Description: Write a program to overload ++ operator using member functions
Input:
Output:
Algorithms:
Prerequisite: NULL
Known bugs: NULL
===============================*/

#include<iostream>
using namespace std;

class Operator
{
    int value;

    public:
        Operator() { value = 0; }
        Operator(int n) { value=n; }
        void operator++(){value++;}
        void operator ++(int){value++;}
        void display()
        {
            cout<<value<<endl;
        }
};

int main()
{
        cout<<"================OPERATOR OVERLOADING=============="<<endl<<endl;
        Operator op, op2(4);          //Object initialized
        cout<<"Initial Value = ";
        op.display();        //Displaying initial value

        ++op;                //Incrementing

        cout<<"Incremented Value = ";
        op.display();        //Displaying Incremented value

        cout<<"=================================================="<<endl<<endl;


        cout<<"Initial Value = ";
        op2.display();       //Displaying initial value

        op2++;               //Incrementing

        cout<<"Incremented Value = ";
        op2.display();      //Displaying Incremented value

        return 0;
}
