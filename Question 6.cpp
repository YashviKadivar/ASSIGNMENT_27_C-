/*  Create a class CString to represent a string.
    a) Overload the + operator to concatenate two strings.
    b) == to compare 2 strings.     */

#include<iostream>
#include<string.h>
using namespace std;

class CString
{
    private:
        string str;
    public:
        void setString(string s){ str=s; }
        void showString(){ cout<<str<<endl; }
        CString operator+(CString S)
        {
            CString tmp;
            tmp.str=str+S.str;
            return tmp;
        }
        bool operator==(CString S)
        {
            if(str==S.str)
                return true;
            else
                return false;
        }
};
int main()
{
    CString s1,s2,s3;
    s1.setString("Hello");
    s1.showString();
    s2.setString("Hello");
    s2.showString();
    s3=s1+s2;
    s3.showString();
    if(s1==s2)
        cout<<"Strings are same";
    else
        cout<<"Strings are different";
    return 0;
}
