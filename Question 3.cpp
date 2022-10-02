/* Write a C++ program to add two complex numbers using operator overloaded by a
    friend function.    */

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        void set(int r,int i)
        {
            real=r;
            img=i;
        }

        void display(void)
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }

        friend Complex operator+(Complex c1,Complex c2)
        {
            Complex t;
            t.real=c1.real+c2.real;
            t.img=c1.img+c2.img;
            return t;
        }
};

int main()
{
    Complex c1,c2,c3;

    c1.set(10,25);
    c2.set(8,4);

    c3=c1+c2;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}
