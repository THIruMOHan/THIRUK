#include <stdio.h>

int main(void) 
{
	char str[50];
	int a,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(a=0;str[a]!='\0';a++)
	{
		if(str[a]>='0' && str[a]<='9')
		{
			count=count+1;
		}
	}
	printf("\nthe number of numeric in the sentence is:%d",count);
	return 0;
}
