#include<iostream>
using namespace std;
void menu(){
    cout<<"\n**********MENU**********\n";
    cout<<"1.Check Balance\n";
    cout<<"2.Deposit\n";
    cout<<"3.withdraw"<<endl;
    cout<<"4.Exit\n";
    cout<<"************************\n\n";
}
int main(){
    int Balance = 10000000;
    int op;
    do{
    menu();
    cout<<"option: ";
    cin>>op;
    system("cls");
    switch (op)
    {
    case 1:
        cout<<"Balance is "<<Balance<<" birr";
        break;
        case 2:
        cout<<"Deposit: ";
        double Deposit;
        cin>>Deposit;
        Balance+=Deposit;
        break;
        case 3:
        cout<<"Withdraw: ";
        double Withdraw;
        cin>>Withdraw;
        if(Withdraw <= Balance)
        Balance-=Withdraw;
        else
        cout<<"Not enough Balance";
        break;
    }
    }
    while(op!=4);
}