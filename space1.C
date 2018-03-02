#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int a,b;
	printf("enter the string1:");
	scanf("%s",str1);
	printf("\n enter the string2:");
	scanf("%s",str2);
	for(a=0;str1[a]!='\0';a++)
	{
		
	}
	for(b=0;str2[b]!='\0';b++)
	{
		str1[a]=str2[b];
		a++;
	}
	str1[a]='\0';
	printf("\n%s",str1);
	
	return 0;
}
