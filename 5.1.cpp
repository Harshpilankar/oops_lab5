#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }
        Complex(int r, int i)
        {
            real=r;
            img=i;
        }
        Complex operator +(Complex c)
        {
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
        void display()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};
int main()
{
    Complex c1(3,5), c2(1,4), c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
