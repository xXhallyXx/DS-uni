#include<iostream>

using namespace std;

int main(){

    int a[13]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Given Array: ";
    for (int i=0; i<10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int n=12;

    a[12]=100;

    int k = 4;

    for(int i=11; i>k; i--)
    {
        a[i]=a[i-1];
    }
    a[k]=200;

    for(int i=11; i>0; i--)
        a[i] = a[i-1];

    a[0]=300;

    cout<<"Array after addition: ";
    for (int i=0; i<13; i++)
    {
        cout<<a[i]<<" ";
    }
}
