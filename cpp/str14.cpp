// METHOD 2 WPNR

#include<iostream>
using namespace std;
void pattern(int a)

{
    int i,j,sp=15;
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=sp;j++)
        {
            cout << " ";
        }
        for(j=0;j<=i;j++)
        {
            cout << " *";
        }
            cout << "\n";
            sp--;
    }                  
}
int main()
{
        int a;
         cout<<"\n enter value of  row";
        cin >> a;
        pattern(3);
        pattern(5);
        pattern(7);
}             