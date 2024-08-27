#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int a[10]= {50, 60, 44, 222, 15, 24, 63, 57, 59, 88};
    for(int i=0; i<n-1; i++)
    {
        int min =i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(a[i],a[min]);
        }


    }
    cout<<"Selection sort : ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
