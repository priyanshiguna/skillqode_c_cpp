#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j,x=0,y=0,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n your Matrix is \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		for(j=0;j<3;j++)
		{
			if(i=j)
			{
				sum=sum+a[i][j];
			}
			else if(j<i)
			{
				x=x+a[i][j];
			}
			else
			{
				y=y+a[i][j];
			}
		}		
		printf("\n");
	}
	
	printf("\n Diagonal total of a :%d\n",sum);
	
	printf("\n upper triangle total of a:%d\n",x);
	
	printf("\n lower triangle total of a :%d\n",y);
	
	return 0;
}
	