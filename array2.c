#include<stdio.h>
int main()
{
	int i;
	float unit[5],bill[5];
	for(i=0;i<5;i++)
	{
		printf("\n enter unit for user %d :",i+1);
		scanf("%f",&unit[i]);
		
	}
	printf("\nunit \tbill");
	for(i=0;i<5;i++)
	{
		
		if(unit[i]<=100)
		{
			bill[i]=unit[i]*0.60+50;
		}
		else if(unit[i]>100 && unit[i]<=300)
		{
			bill[i]=((100*0.60)+((unit[i]-100)*0.80)+50);
		}
		else if(unit[i]>100 && unit[i]<=300)
		{
			bill[i]=((100*0.60)+(200*0.80)+((unit[i]-300)*0.90))+50;
		}
		if(bill[i]>300)
		{
			bill[i]=(bill[i]*1.15);
			printf("\n%f\t%f",unit[i],bill[i]);
		}
		else
		{
			printf("\n%f\t%f",unit[i],bill[i]);
		}
	}
	return 0;
}
		
		
		