#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Bank{
    char name[100] , add[100] , y;
    int balance;
    public:
    void openAcc();
    void depMoney();
    void withdrawMon();
    void displayAcc();
           };
void Bank :: openAcc(){
    cout<<"Enter your full name ::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address ::";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account do you want to open ::";
    cin>>y;
    cout<<"enter amount for deposit ::";
    cin>>balance;
    cout<<"account created\n";
}
void Bank :: depMoney(){
    int a;
    cout<<"Enter how much you wanna deposit ::";
    cin>>a;
    balance+=a;
    cout<<"total amount deposited :: \t"<<balance;
}
void Bank :: displayAcc(){
    cout<<"Your name ::\t"<<name;
    cout<<"Your address ::\t"<<add;
    cout<<"type of account opened ::\t"<<y;
    cout<<"Amount deposited ::\t"<<balance;

}
void Bank :: withdrawMon(){
    float amount;
    cout<<"\n withdraw";
    cout<<"\n Enter amount to withdraw :: ";
    cin>>amount;
    balance-=amount;
    cout<<"Total amount left in account :: ";
    cout<<balance;
}
int main(){
    int ch,x;
    Bank obj;
    do{   
cout<<"1. Open account\n";
cout<<"2. Deposit money\n";
cout<<"3. Withdraw money\n";
cout<<"4. Display account\n";
cout<<"5. Exit\n";
cout<<"select the option from above \n";
cin>>ch;
switch(ch)
{
    case 1:
    cout<<"1. Open account \n";
    obj.openAcc();
    break;
    case 2:
    cout<< "2. Deposit Money\n";
    obj.depMoney();
    break;
    case 3:
    cout<< "3. Withdraw Money \n";
    obj.withdrawMon();
    break;
    case 4:
    cout<< "4. Display Account \n";
    obj.displayAcc();
    break;
    case 5:
    if(ch ==5){
        exit(1);
    }
    break;
    default:
    cout<<"Try some other option\n";

}
cout<<"Do you want to try some other option ([y]/N)?\n";
x=getch();
if(x=='N'){
    exit(0);
}
}while(x=='y');
getch();
return 0;
}