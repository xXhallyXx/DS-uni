#include<iostream>
using namespace std;
int main ()
{
    int a1[3][2],a2[3][2],sum[3][2];
    cout<<"Array 1: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"a["<<i<<"] ["<<j<<"]=";
            cin>>a1[i][j];

        }
    }
    cout<<"Array 2: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"a["<<i<<"] ["<<j<<"]=";
            cin>>a2[i][j];

        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            sum[i][j]=a1[i][j]+a2[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<sum[i][j]<<"  ";

        }
        cout<<endl;
    }

    return 0;
}
