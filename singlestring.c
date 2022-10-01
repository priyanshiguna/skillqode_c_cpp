#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[10];
	printf(" Enter string :");
	gets(str);

	//int len = strlen(str);
	//printf("\n len : %d",strlen(str));
	
	//strrev(str);
	//printf("\n Reverse : %s",str);

	//strupr(str);
	//printf("\n upper : %s",str);
	
	strlwr(str);
	printf("\n lower : %s",str);
}