#include<iostream>

using namespace std;

int main(){
    int Array_1[5] = {1,2,3,4,5};
    int Array_2[6] = {6,7,8,9,10,11};

    int Array_3[11];

    for(int i=0; i<5; i++)
    {
        Array_3[i]=Array_1[i];
    }
    for(int i=0; i<=5; i++)
    {
        Array_3[i+5]=Array_2[i];
    }
    cout<<"Output: ";
    for(int i=10; i>=0; i--)
    {
        cout<<Array_3[i]<<" ";
    }
}

