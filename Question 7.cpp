/* Define a C++ class fraction
        class fraction
        {
        long numerator;
        long denominator;
        Public:
        fraction (long n=0, long d=0);
        }

    Overload the following operators as member or friend:
        a) Unary ++ (pre and post both)
        b) Overload as friend functions: operators << and >>.       */

#include<iostream>
using namespace std;

class fraction
{
    private:
        long number;
        long denominator;
    public:
        fraction()
        {
            long number=0;
            long denominator=0;
        }

        // void set(long n,long d)
        // {
        //     number=n;
        //     denominator=d;
        // }

        void show(void)
        {
            cout<<"Number : "<<number<<endl;
            cout<<"Denominator : "<<denominator<<endl;
        }
        // void display(void)
        // {
        //     cout<<number<<"/"<<denominator<<endl;
        // }

        fraction operator++()
        {
            fraction temp;
            temp.number=++number;
            temp.denominator=++denominator;
            return temp;
        }
        fraction operator++(int n)
        {
            fraction temp;
            temp.number=number++;
            temp.denominator=denominator++;
            return temp;
        }

        friend ostream & operator<<(ostream &o,fraction &f);
        friend istream & operator>>(istream &o,fraction &f);
};

ostream & operator<<(ostream &o,fraction &f)
{
    cout<<f.number<<"/"<<f.denominator<<endl;
    return cout;
}

istream & operator>>(istream &o,fraction &f)
{
    cout<<"Number : ";
    cin>>f.number;
    cout<<endl;
    cout<<"Denominator : ";
    cin>>f.denominator;
    return cin;
}


int main()
{
    fraction f1,f2;

    cin>>f1;
    f1++;
    cout<<"f1++ : "<<f1<<endl;
    ++f1;
    cout<<"++f1 : "<<f1<<endl;
    f2= ++f1;
    cout<<"f2 = ++f1"<<endl;
    cout<<"f1 : "<<f1<<endl;
    cout<<"f2 : "<<f2<<endl;
    f2= f1++;
    cout<<"f2 = f1++"<<endl;
    cout<<"f1 : "<<f1<<endl;
    cout<<"f2 : "<<f2<<endl;
}

