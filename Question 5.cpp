/*   Consider following class Numbers
    class Numbers

    {
    int x,y,z;
    public:
    // methods

    };

    Overload the operator unary minus (-) to negate the numbers.        */

#include<iostream>
using namespace std;

class Number
{
    private:
        int x,y,z;

    public:
        void set(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        void display()
        {
            cout<<x<<endl;
            cout<<y<<endl;
            cout<<z<<endl;
        }
        void operator-()
        {
            x=-x;
            y=-y;
            z=-z;
        }

};

int main()
{
    Number n1;

    n1.set(12,23,90);
    n1.display();
    -n1;
    n1.display();
}
