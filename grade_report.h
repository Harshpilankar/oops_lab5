#include<string>
using namespace std;
namespace grade_report
{
class Student
{
int roll_no;
string name;
string branch;
public:
void setrollno(int roll)
{
roll_no=roll;
}
void setname(string name1)
{
name=name1;
}
void setbranch(string branch1)
{
branch=branch1;
}
int getrollno()
{
return roll_no;
}
string getname()
{
return name;
}
string getbranch()
{
return branch;
}
};
class report
{
double mks1,mks2,mks3,per;
string grade;
public:
void setmks(double x,double y,double z)
{
mks1=x;
mks2=y;
mks3=z;

}
double getmaks1()
{
return mks1;
}
double getmaks2()
{
return mks2;
}
double getmaks3()
{
return mks3;
}
void computeper()
{
per=((mks1+mks2+mks3)/300)*100;
}
int computegrade()
{
if(per>=90)
grade="A";
else if(per<90&&per>=89)
grade="B";
else if(per<89&&per>=70)
grade="C";
else if(per<70)
grade="F";
return 0;
}
string getgrade()
{
return grade;
}
double getper()
{
return per;
}
};
}

