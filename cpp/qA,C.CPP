#include <iostream>
using namespace std;
int main()
{
    char i, A = 65,Z = 90;

    for (i = 65; i <= 90; i++)
    {

        if (i % 2 == 1)
        {
            cout << "\n  " << i+65-1;
        }
    }
}
