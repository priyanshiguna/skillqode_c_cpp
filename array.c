#include<stdio.h>
int main()
{
	int i,j,total;
	int a[10];
	for(i=0;i<10;i++)
	{
		printf("\n enter value : ",i);
		scanf("%d";&a[10]);
	}
	printf("\n your array is \n\n");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
		{
			printf("\n a[%d] :%d",i,a[i]);
			j=j+a[i];
		}
	}
	printf("\n odd possition total = %d",j);
}
	