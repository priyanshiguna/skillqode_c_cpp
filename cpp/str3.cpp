#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i;
	char str1[10],str2[10];
	printf(" enter string 1 :");
	gets(str1); 
		
	printf("\n len : %d",strlen(str1));
	strcpy(str2,str1);
	strrev(str2);
	
	if(strcmp(str1,str2)==0)
	{
		printf("\n palindrom ");
	}
	else
	{
		printf("\n not palindrom");
	}
	
}
