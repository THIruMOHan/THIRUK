#include <stdio.h>

int main(void) 
{
	char a[50];
	int i,count=0;
	printf("enter the string:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
	return 0;
}
