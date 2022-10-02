/* Consider a class Matrix

    Class Matrix
    {
    int a[3][3];
    Public:
    //methods;
    };

    Overload the - (Unary) should negate the numbers stored in the object.      */

#include<iostream>
using namespace std;

class Matrix
{
    private:
        int a[3][3];
    public:
        Matrix()
        {
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    cin>>a[i][j];
                }
            }
        }

        void operator-()
        {
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    a[i][j]=-a[i][j];
                }

            }
        }

        void show_data()
        {
            cout<<"\n----------------------"<<endl;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
};

int main()
{
    Matrix m1;
    m1.show_data();
    -m1;
    m1.show_data();
}
