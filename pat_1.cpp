#include<iostream>
using namespace std;
class student
{
    string sname;
    int a1,a2,a3,a4,total,percentage;
    public:
    void setdata ()
    {
        cout<<"\n entername :";
        cin>>sname;
        cout<<"\n entername a1 :";
        cin>>a1;
        cout<<"\n enetrname a2 :";
        cin>>a2;
        cout<<"\n enetrname a3 :";
        cin>>a3;
    }
        void calresult()
    {

    }
    void printdata()
    {
        cout<<"\n student name : "<<sname;
        cout<<"\n marks 1 : "<<a1;
        cout<<"\n marks 2 : "<<a2;
        cout<<"\n marks 3 : "<<a3;
    }
};        
int main()
{    
    student abc;
    abc.setdata();
    abc.printdata();
}