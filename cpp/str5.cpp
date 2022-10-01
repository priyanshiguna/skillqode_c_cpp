//wrwp

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
	cout<<"enter principle (amount) :\n";
    cin >> principle;
    cout<<"enter rate  :\n";
    cin >> rate;
    cout<<"enter time :\n";
    cin >> time;

	CI=CmInt(principle,rate,time);
    cout << "\n ci :" << CI ;

	return 0;
} 
