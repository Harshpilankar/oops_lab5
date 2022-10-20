#include<string>
using namespace std;
namespace payslip
{
class emp
{
string name;
int id;
public:
void setname(string n)
{
name=n;
}
string getname()
{
return name;
}
void setid(int i)
{
id=i;
}
int getid()
{
return id;
}
};
class payscale
{
double final_amount,sal;
public:
void setsal(double s)
{
sal=s;
}
double getsal()
{
return sal;
}
void pay_cal()
{
if(sal>20000)
final_amount=sal+((sal*20)/100)+((sal*20/100));
else
final_amount=sal+((sal*10)/100)+((sal*10/100));
}
double total_pay()
{
return final_amount;
}

};
}

