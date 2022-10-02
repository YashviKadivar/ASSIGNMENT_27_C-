/* Consider the following class mystring

    Class mystring
    {
    char str [100];
    Public:
    // methods
    };

    Overload operator “!” to reverse the case of each alphabet in the string
    (Uppercase to Lowercase and vice versa).    */

#include<iostream>
#include<string.h>
using namespace std;

class mystring
{
    private:
        char str[20];
    public:
        void set_data(char s[20])
        {
            strcpy(str,s);
        }

        void show_data()
        {
            cout<<"string -> "<<str<<endl;
        }

        void upper()
        {
            for(int i=0;str[i]!='\0';i++)
            {
                if(str[i]>=65 && str[i]<=90)
                {
                    str[i]=str[i]+32;
                }
                else if(str[i]>=97 && str[i]<=122)
                {
                    str[i]=str[i]-32;
                }
            }
        }
};

int main()
{
    mystring m1;

    m1.set_data("YaShVi");
    m1.show_data();
    m1.upper();
    m1.show_data();
}


