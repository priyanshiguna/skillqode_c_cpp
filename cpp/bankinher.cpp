#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Bank
{
    int acno;
    char AccountHolderName[100], Account_Type[100];
    float bal; 
    public:
    void Bank :: accdetails()
    {
        cout<<"Enter name :";
        cin >> AccountHolderName;
        cout<<"Enter Account Number  : ";
        cin>>acno;
        cout<<"Enter Account Type    : ";
        cin>> Account_Type;
    }
    void Bank :: displaydetails()
    {
        cout<<"\n\nCustomer Name : "<<AccountHolderName;
        cout<<"\nAccount Number  : "<<acno;
        cout<<"\nAccount Type    : "<<Account_Type;
    }
};
class saving_account : public Bank
{
    private:
    float sav_balance;
    public:
    void s_display()
    {
        cout<<"\nBalance :  "<<sav_balance;
    }
    void s_deposit() 
    {
        float deposit,interest;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        interest=(sav_balance*2)/100;
        sav_balance=sav_balance+interest;
    }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\nBalance :- "<<sav_balance;
        cout<<"\nEnter amount to be withdraw : ";
        cin>>withdraw;
        if(sav_balance > 500)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }
};
class current_account : public Bank
{
    private:
    float balance;
    public:
    void c_display()
    {
        cout<<"\nBalance :"<<balance;
    }
    void c_deposit()
    {
        float deposit;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        balance = balance + deposit;
    }
    void c_withdraw()
    {
        float withdraw;
        cout<<"\n\nBalance : "<<balance;
        cout<<"\nEnter amount to be withdraw :";
        cin>>withdraw;
        if(balance > 1000)
        {
            balance=balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
 
    }
};
class totalbalance : public saving_account , public current_account
{
    int total,s_total,c_total;
     
    public:
    void process()
    {
        total=s_total+c_total;
    }
    void printbankdetails()
    {
        cout<<"total = "<< endl;
        cout<<"\n";
    }
};
int main()
{
    totalbalance 
}