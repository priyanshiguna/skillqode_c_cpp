#include <iostream>
using namespace std;

int main()
{
    int i, j , k=1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "\t" << k++;
        }
        cout << "\n";
    }
}