#include<stdio.h>
int main()
{
	int i,j,length;
	char str1[15],str2[15];
	printf(" enter string :");
	gets(str1);

	for(i=0;str1[i]!='\0';i++);
	{
		printf("\n str length=%d",i);
	}
	
	for(j=0;j<=i;j++)
	{
		str2[j]=str1[i];
	}
	printf("\n str2 =%s",str1);
	return 0;
}

	