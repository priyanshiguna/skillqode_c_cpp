//nrwp

#include<iostream>
#include<math.h>
using namespace std;
float CmInt(float p,float r,float t)
{
	float ci;
	ci=p*(pow((1+r/100),t));
	return ci;
}
int main()
{
	float principle,rate,time,CI;
	cout<<"\n enter principle (amount) :";
    cin >> principle;
    cout<<"\n enter rate  :";
    cin >> rate;
    cout<<"\n enter time :";
    cin >> time;

	CI=CmInt(principle,rate,time);
    cout << "\n ci :" << CI ;
} 
