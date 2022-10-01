#include<stdio.h>
void dosum()
{
	int a,b;
	printf("\n Enter value A :");
	scanf("%d",&a);
	printf("\n Enter  value B :");
	scanf("%d",&b);

	printf("\n sum  a+b :%d",a+b);
	printf("\n   a-b :%d",a-b);
	printf("\n multiplication  a*b :%d",a*b);
	printf("\n divison  a/b :%d",a/b);
}
int main()
{
	dosum();
}