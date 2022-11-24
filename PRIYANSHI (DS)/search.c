#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[]={11,12,13,14,15,16,17,18,19,20};
    int n ,i, x;
    printf("\n enter a number to search" );
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
      if (a[i] == x)   
      {
        printf("\n %d : at position %d .", x, i+1);
      }
    }
} 