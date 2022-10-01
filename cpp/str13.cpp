//WPNR
#include<iostream>
using namespace std;
void pattern(int a)
{
     int i,j,sp=a;
        for(i=0;i<=a;i++)
        {
            for(j=0;j<=sp;j++)
            {
               cout <<" ";
            }
            for(j=1;j<=i;j++)
            {
                cout <<" *";
            }
                cout << "\n";
            sp--;
        }
	for(i=4;i>=1;i--)
    {
        for(j=1;j<=sp+3;j++)
        {
            cout <<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout <<" *";
        }
            cout <<"\n";
            sp++;
    }
}
int main()
{
        int a;
        cout<<"\n enter value of  row";
        cin >> a;

        pattern(a);
}       