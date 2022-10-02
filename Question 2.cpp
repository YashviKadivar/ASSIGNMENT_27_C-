/* Write a C++ program to overload unary operators that is increment and decrement. */

#include<iostream>
using namespace std;

class Student
{
    private:
        int rno;
        int marks;
    public:
        void set_data(int r,int m)
        {
            rno=r;
            marks=m;
        }

        void display(void){
            cout<<"\n-----------------------------------------\n";
            cout<<"Roll no ->"<<rno<<endl;
            cout<<"Marks -> "<<marks<<endl;
        }

        Student operator++()
        {
            Student temp;
            temp.rno=++rno;
            temp.marks=++marks;
            return temp;
        }
        Student operator++(int n)
        {
            Student temp;
            temp.rno=rno++;
            temp.marks=marks++;
            return temp;
        }

};

int main()
{
        Student s1,s2;

        s1.set_data(15,100);
        s2.set_data(10,50);

        s1.display();
        s2.display();

        (s1++).display();
        (++s2).display();
        s1.display();
}
