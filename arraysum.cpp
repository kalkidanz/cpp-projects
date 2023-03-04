#include<iostream>
using namespace std;
int main(){
    const int row =2,col =3;
    int myarray[row][col];
    int myarray2[row][col];
    int sum[row][col]; 
    cout<<"Enter 1st matrix\n";
    for(int i=0; i<row; i++)
    {
    for(int j=0; j<col; j++)
        cin>>myarray[i][j];
    }
    cout<<"\n";
    cout<<"Enter 2nd matrix\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>myarray2[i][j];
        }
    }cout<<"\n\n";
    cout<<"Elements of the 1st matrix are listed below\n";
    for(int i=0; i<row; i++)
    {  
        for(int j=0; j<col; j++)
        {
            cout<<myarray[i][j]<<"\t";
        }
        cout<<endl;
    }cout<<endl;
    cout<<"Elements of the 2nd matrix are listed below\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<myarray2[i][j]<<"\t";
        }
        cout<<endl;
    } cout<<"Sum of the two arrays is\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum[i][j] = myarray[i][j] + myarray2[i][j];
            cout<<sum[i][j]<<"\t";
        }cout<<endl;
    }
    return 0;
}