#include <stdio.h>
 
int main(void) 
{
	int num,t,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	t=num;
	while(num!=0)
	{
		t=num%10;
		sum=sum+t;
		num=num/10;
 
	}
	printf("\n%d",sum);
	return 0;
}
