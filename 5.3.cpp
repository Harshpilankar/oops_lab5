/**
Lab Id: 5.3
Program Title: Operator Overloading
Author: Harsh Pilankar
Roll no.: 21CO42
Language: CPP
Class: BE Computer B
Due Date: 13 october
-------------------------------
Description: Write a program to overload unary minus operator using member function(give students to solve)
Input:
Output:
Algorithms:
Prerequisite: NULL
Known bugs: NULL
===============================*/

#include<iostream>
using namespace std;

class Unary
{
    int value;
    public:
       Unary(){value=0;}
       Unary(int n){value=n;}
       void operator-()
       {value=-value;}
       void operator-(int)
       {value=-value;}
       void display()
       {
            cout<<value<<endl;
       }
};

int main()
{
        cout<<"================UNARY MINUS OPERATOR OVERLOADING=============="<<endl<<endl;

        Unary mins(7);     //perameterized Object initialized

        cout<<"Initial Value = ";
        mins.display();       //Displaying initial value

        -mins;               //Incrementing

        cout<<"New Value = ";
        mins.display();      //Displaying Incremented value

        return 0;
}
