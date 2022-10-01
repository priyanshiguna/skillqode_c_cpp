//WRWP
#include<stdio.h>
int reverse(int x,int y,int z)
{
	return y;
}
int main()
{
	int number,rev=0,rem;
	printf("enter number=");
	scanf("%d",&number);
	while(number!=0)
	{
		rem=number%10;
		rev=(rev*10)+rem;
		number=number/10;
	}
	printf("revers number=%d",reverse(number,rev,rem));
} 