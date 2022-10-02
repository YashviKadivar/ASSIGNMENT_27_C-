/* Create a class Time which contains:
    - Hours
    - Minutes
    - Seconds
        Write a C++ program using operator overloading for the following:
        1. = = : To check whether two Times are the same or not.
        2. >> : To accept the time.
        3. << : To display the time.            */


#include<iostream>
using namespace std;

class Time
{
    private:
        int hr,min,sec;
    public:
        bool operator==(Time t)
        {
            if(hr==t.hr && min==t.min && sec==t.sec)
                return true;
            else
                return false;
        }
        friend istream& operator>>(istream&,Time&);
        friend ostream& operator<<(ostream&,Time&);
};

istream& operator>>(istream &ip,Time &t)
{
    cout<<"Enter Hours : ";
    ip>>t.hr;

    cout<<"Enter Minutes : ";
    ip>>t.min;

    cout<<"Enter Seconds : ";
    ip>>t.sec;

    return ip;
}

ostream& operator<<(ostream &op,Time &t)
{
    op<<"Hours : "<<t.hr<<endl;
    op<<"Minutes : "<<t.min<<endl;
    op<<"Seconds : "<<t.sec<<endl;

    return op;
}

int main()
{
    Time t1,t2;

    cout<<"Enter first Time"<<endl;
    cout<<"--------------------------"<<endl;
    cin>>t1;
    cout<<"First time"<<endl;
    cout<<t1;
    cout<<"Enter second Time"<<endl;
    cout<<"--------------------------"<<endl;
    cin>>t2;
    cout<<"Second time"<<endl;
    cout<<t2;

    if(t1==t2)
        cout<<"Times are same";
    else
        cout<<"Times are different";

    return 0;
}
