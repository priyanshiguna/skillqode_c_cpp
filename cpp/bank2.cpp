/*#include<iostream>
using namespace std;
class Bank
{
    string name;
    int accBalance;
    public:
    Bank();
    Bank(int);
    void showAccountBalance();
    void getAccInfo();
    void showBankDetails();
};
void Bank::getAccInfo(){
    cout<<"\n Your Name Please.. ";
    cin>>name;
}
Bank::Bank(){
    accBalance=1000;
    cout<<"\n Defult Constructor Called..";
}
Bank::Bank(int initbal){
    accBalance=initbal;
    cout<<"\nParameterized Constructor Called .. ";
}
void Bank::showAccountBalance(){
    cout<<"\nAccount Blance : "<<accBalance;
}
void Bank::showBankDetails(){
    cout<<"\n Name : "<<name;
    cout<<"\n Account Balance : "<<accBalance;
}
int main()
{
    Bank person[3];
    person[1].getAccInfo();
    person[1].showAccountBalance();
    person[1].showBankDetails();
}*/
#include<iostream>
using namespace std;
class bank
{
    string name;
    int accountbalance,withdrawbalance,dipositebalanace,totalbalance,i;
    public:
    bank();
    bank(int);
    void showaccountbalance();
    //void getaccinfo();
    void showbankdetails();
    void showtotalbalance();
};
/*void bank::getaccinfo()
{
    cout<<"\n YOUR NAME PLEASE :-";
    cin>>name;
}*/
bank::bank()
{  
    accountbalance=1000;
    cout<<"\n default constructor called ....";
}
bank::bank(int initbal)
{
    accountbalance=initbal;
    cout<<"\n parameterized constructor called...";
}
void bank::showaccountbalance()
{
    cout<<"\n account balance :-" <<accountbalance;
}
void bank::showbankdetails()
{
    for(i=0;i<=5;i++)
    {
    cout<<"\n your name please :-";
    cin>>name;
    cout<<"\n name :-"<<name;
    cout<<"\n account balance:-"<<accountbalance;
    showtotalbalance();
    }
}
void bank::showtotalbalance()
{
        cout << "\n enter withdrawbalance :-..";
        cin >> withdrawbalance;
        cout << "\n enter dipositebalanace :-..";
        cin >> dipositebalanace;
        withdrawbalance = accountbalance - withdrawbalance;
        totalbalance = withdrawbalance + dipositebalanace;
        cout << "\n totalbalance:-.."<<totalbalance;
}
int main()
{
    bank person[3];
    //person[1].getaccinfo();
    person[1].showaccountbalance();
    person[1].showbankdetails();
}


















































































































































































































































































































































































