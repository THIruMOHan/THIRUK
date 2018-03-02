#include <stdio.h>

int main(void) 
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if(a>=1 && a<=10)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
