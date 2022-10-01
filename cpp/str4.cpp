#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, k, j = 0, length;
    char str1[50], str2[50];
    printf("\n enter string : ");
    gets(str1);

    for (i = 0; str1[i] != '\0'; i++)
        ;
    printf("\n str length =%d", i);
    k = i - 1;
    for (j = 0; j <= i; j++)
    {
        str2[j] = str1[k];
        k--;
    }
    printf("\n reverse string = %s", str2);
    length = i;
    for (i = 0; i <= length / 2; i++)
    {
        if (str1[i - 1] || str1[length - i])
        {
            j++;
        }
    }
}