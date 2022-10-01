#include<stdio.h>
int main()
{
	int a=10,*b;

	printf("\n value a:%d",a);
	printf("\n address a:%u",&a);
	b=&a;
	printf("\n value b / address of a:%d",b);
	printf("\n address b:%u",b);
	printf("\n value of a using b :%d",*b);
}