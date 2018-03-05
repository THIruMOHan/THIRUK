#include <stdio.h>

int main(void) 
{
	int num,r,rev=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		rev=(rev*10)+r;
		num=num/10;
	}
	num=rev;
	while(num!=0)
	{
		r=num%10;
		printf("%d ",r);
		num=num/10;
	}
	return 0;

}
