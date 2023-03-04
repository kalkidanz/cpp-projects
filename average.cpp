#include<iostream>
using namespace std;
int main(){
    int arr[5];
    float avg,sum=0;
    cout<<"enter five numbers: ";
    for(int i=0;i<5;i++)
    cin>>arr[i];
    for(int i=0;i<5;i++)
   { cout<<arr[i]<<" ";
    sum+=arr[i];}
    avg=sum/5.0;
    cout<<"sum is: "<<sum<<endl;
    cout<<"average is: "<<avg<<endl;
    return 0;
}