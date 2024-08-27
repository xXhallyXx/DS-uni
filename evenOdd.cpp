#include<iostream>

using namespace std;

int main(){
    int arr[6],e=0,o=0;

    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<6; i++)
    {
        if (arr[i]%2==0){
            cout<<"arr["<<i<<"]="<<arr[i]<<",even"<<endl;
            e++;
        }
        else{
            cout<<"arr["<<i<<"]="<<arr[i]<<",odd"<<endl;
            o++;
        }
    }
    cout<<"Total Even ="<<e<<endl;
    cout<<"Total Odd ="<<o<<endl;
}

