#include<stdio.h>
int main()
{
	int i,sum=0,oddsum=0,evensum=0,oddnum=0,evennum=0;
	int a[10];
	for(i=0;i<10;i++)
	{
		printf("enter the value a[%d]: ",i);
		scanf(" %d ",&a[i]);
	}
	printf("\n your array is" );
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
		{
			oddnum=oddnum+a[i];
		}
		else
		{
			evennum=evennum+a[i];
		}
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
		{
			oddsum = oddsum + a[i];
		}
		else
		{
			evensum = evensum + a[i]; 
		}
	}
	for(i=0;i<10;i+=2)
	{
		sum=sum + i;
	}
	printf("\n sum of the odd position are : %d",oddsum);
	printf("\n sum of the even position are : %d",evensum);
	printf("\n sum of the odd element are : %d",oddnum);
	printf("\n sum of the even element are : %d",evennum);
	printf("\n sum of all element are : %d",sum); 
	return 0;
}