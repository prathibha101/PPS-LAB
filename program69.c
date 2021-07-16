#include<stdio.h>
int main()
{
	int num,rem,count=0;
	printf("enter number:");
	scanf("%d",&num);
	while(num>0)
	{
		num=num/10;
		count=count+1;
	}
	printf("number of digits=%d",count);
	return 0;
}
