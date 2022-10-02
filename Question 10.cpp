/* Class Matrix
        {
        int a[3][3];
        Public:
        //methods;
        };
    Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
    overloading).       */

#include<iostream>
using namespace std;

class Matrix
{
    private:
        int a[3][3];
    public:
        void set_data()
        {
            cout<<"enter data -> "<<endl;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    cin>>a[i][j];
                }
            }
        }

        void show()
        {
            cout<<"\n---------------------"<<endl;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl;
            }
        }

        Matrix operator+(Matrix m)
        {
            Matrix t;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    t.a[i][j]=a[i][j]+m.a[i][j];
                }
            }
            return t;
        }
};

int main()
{
    Matrix m1,m2;

    m1.set_data();
    m2.set_data();

    m1.show();
    m2.show();

    Matrix m3;
    m3=m1+m2;
    m3.show();
}
