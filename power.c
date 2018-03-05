#include <stdio.h>

int main(void) 
{
	int num,a=0,temp;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp!=1)
	{
		if(temp%2!=0)
		{
		a=1;
			break;
			
		}
		temp=temp/2;
	}
	if(a==0)
	{
		printf("\n %d is a power of 2",num);
	}
	else if(a==1)
	{
		printf("\n %d is not a power of 2",num);
	}
	return 0;
}
