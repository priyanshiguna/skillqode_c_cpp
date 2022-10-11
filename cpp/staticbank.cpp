#include<iostream>
using namespace std;
class Bankcount
{
    static int transactioncount;
    static int withdrawcount;
    static int depositecount;
    int i , n;
    char name;
    float accountbalance,numofwithdraw,numofdiposite,totaltransaction ,withdrawamount,depositeamount,totaltransactionamount ;
    public:
    void getaccinfo()
    {
        cout<<"\n YOUR NAME PLEASE :-";
        cin>>name;
    }
   void accountbalance()
    {  
        accountbalance=1000;
        cout<<"\n default constructor called ....";
    }
   void accountbalance(int initbal)
    {
        accountbalance=initbal;
        cout<<"\n parameterized constructor called...";
    }
    void showaccountbalance()
    {
        cout<<"\n accountbalance :-" <<accountbalance;
    }
    void settransactoincount(int n)
    {
        transactioncount = n;
    }
    void counter()
    {
        transactioncount++;
    }
    void gettransactoincount()
    {
        cout << "\n transactoincount" << transactioncount;
    }
    void showtotaltransaction()
    {
        cout << "\n enter numofwithdraw :-..";
        cin >> numofwithdraw;
        cout << "\n enter numofdiposite :-..";
        cin >> numofdiposite;
        numofwithdraw = accountbalance - numofwithdraw;
        totaltransaction = numofwithdraw + numofdiposite;
        cout << "\n totalnumoftransactoin:-.."<<totaltransaction;
    }
     void showbankdetails()
    {  
        cout<<"\n your name please :-";
        cin>>name;
        cout<<"\n name :-"<<name;
        cout<<"\n accountbalance:-"<<accountbalance;
        showtotaltransaction();
    }
};
int Bankcount :: transactioncount = 0 ;
int main()
{
    Bankcount person1 , person2;
    person1.showaccountbalance();
    person1.showtotaltransaction();
    person1.showbankdetails();
   person1.settransactoincount(1000);
   person2.counter();
   person1.gettransactoincount();
    

}