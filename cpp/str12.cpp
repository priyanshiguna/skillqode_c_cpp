//nrnp

#include<iostream>
#include<math.h>
using namespace std;
float CmInt()
{
    float principle,rate,time,CI;
	cout<<"\n enter principle (amount) :";
    cin >> principle;
    cout<<"\n enter rate  :";
    cin >> rate;
    cout<<"\n enter time :";
    cin >> time;

    CI=principle*(pow((1+rate/100),time));
    cout << "\n CI :" << CI ;
}
int main()
{
	CmInt();
} 
