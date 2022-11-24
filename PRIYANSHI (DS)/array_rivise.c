#include<stdio.h>
int main()
{
    int printarray();
    int i;
    int a[100];
    for(int i=0;i<5;i++)
    {
        printf("enter a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n your array is \n\n");
    for(int i=0;i<5;i++)
    {
        printf("\na[%d]: %d :",i,a[i]);
    }
     //printf("\n %d",sizeof(int));
}
int printarray()
{
   int main();
}
