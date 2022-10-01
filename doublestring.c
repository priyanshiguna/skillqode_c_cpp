#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str1[10],str2[10];
	printf(" enter string 1 :");
	gets(str1); 
		
	strcpy(str2,str1);
	printf("\n str2 : %s",str2);

	printf(" enter string 2 :");
	gets(str2);

	//strcat(str2,str1);
	//printf("\n str2 : %s",str2);

	strcmpi(str1,str2);
	printf("\n compare i :%d",strcmpi(str1,str2));
}

	

	