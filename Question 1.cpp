/* Define a class Complex with appropriate instance variables and member functions.
    Define following operators in the class:
        a. +
        b. -
        c. *
        d. ==       */

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;

    public:
        void set_data(int r,int i)
        {
            real=r;
            img=i;
        }

        void display_data(void)
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }

        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.img=img+c.img;
            return temp;
        }

        Complex operator-(Complex c)
        {
            Complex temp;
            temp.real=real-c.real;
            temp.img=img-c.img;
            return temp;
        }

        Complex operator*(Complex c)
        {
            Complex temp;
            temp.real=real*c.real;
            temp.img=img*c.img;
            return temp;
        }

        void operator==(Complex c)
        {
            if(img==c.img)
            {
                if(real==c.real)
                {
                    cout<<"TRUE"<<endl;
                }
                else
                cout<<"FALSE"<<endl;
            }
            else
            cout<<"FALSE"<<endl;
        }
};

int main()
{
        Complex c1,c2,c3;

        c1.set_data(11,5);
        c2.set_data(110,5);

        c3=c1+c2;
        c3.display_data();
        c3=c2-c1;
        c3.display_data();
        c3=c1*c2;
        c3.display_data();
        c1==c2;

        return 0;
}
