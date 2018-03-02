#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int n,m;
	printf("enter the string1:");
	scanf("%s",str1);
	printf("enter the string2:");
	scanf("%s",str2);
	n=strlen(str1);
  m=strlen(str2);
	if(n>m)
	{
		printf("\n%s",str1);
	}
	else if(m>n)
	{
		printf("\n%s",str2);
	}
	else
	{
		printf("\n %s",str2);
	}
	return 0;
}
