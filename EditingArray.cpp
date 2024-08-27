#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter value Number "<<i+1<<": ";
        cin>>a[i];
    }

    int b, k = n - 1;
    cout<<"Enter the Number You want to take to the end: ";
    cin>>b;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == b)
        {

                int z = a[i];
                a[i] = a[k];
                a[k] = z;

        }
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<"\n";

    int min = a[0], max = a[0];

    for(int i=0; i<n; i++)
    {
        if(min > a[i])
            min = a[i];
        else if(max < a[i])
            max = a[i];
    }
    cout<<"Max value: "<<max<<endl;
    cout<<"Min value: "<<min<<endl;
    cout<<"Difference: "<<max-min<<endl;

    return 0;
}
