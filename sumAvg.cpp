#include<iostream>
using namespace std;

int main(){
    int a1[]={1,2,3,4,5,6,7,8,9,10};
    int sum,avg,f=0;
    for(int i=0;i<10;i++)
    {
        if(i%2==1)
        {
            sum+=a1[i];
            f++;
        }
    }
    avg=sum/f;

    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;

    if (sum%2==0){
        cout<<"Sum is Even";
    }
    else{
        cout<<"Sum is Odd";
    }
}
