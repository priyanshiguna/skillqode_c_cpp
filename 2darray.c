#include<stdio.h>
int main()
{
	int a[5][5],b[5][5];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\tenter b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n your Matrix is \n\n");
	printf("\n\t\t (A)\t\t\t (B)\t\t\t  (total of A=B)\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}	
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}	
		printf("\t==>");
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]+b[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
	