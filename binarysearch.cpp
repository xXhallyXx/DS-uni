#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int n,int data)
{
    int f=0, l=n-1,mid;

    while(f<=l)
    {
        mid=(f+l)/2;
        if(data==a[mid])
            return mid;

        if(data>a[mid])
            f=mid+1;
        else if(data<a[mid])
            l=mid-1;
    }
    return -1;
}
int main()
{
    int data;
    int n=7;
    int a[]= {1,2,3,4,5,6,7};
    cout<<"enter the searching value"<<endl;
    cin>>data;
    int result=binarysearch(a,n,data);
    if (result != -1)
        cout << "Element " << data << " found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;



}
