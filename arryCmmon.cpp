#include<iostream>
using namespace std;
int main()
{
    int Array_1[] = {1,4,6,3,6,9};
    int Array_2[] = {5,3,7,1,2,6};
cout<<"Scenario 1:";
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(Array_1[i]==Array_2[j])
                cout<<Array_1[i]<<" ";
        }

    }
    cout<<endl;
    int Array_3[] = {1,4,6,3,6,9};
    int Array_4[] =  {5,8,7,12,21,63};
    int a=0;
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(Array_3[i]==Array_4[j])
            a++;

        }
    }
    if(a==0)
        cout<<"Scenario 2: No common element!";


    cout<<endl;
}
