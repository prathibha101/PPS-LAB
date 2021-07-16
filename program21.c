#include<stdio.h>
int main()
{
	int num1,num2,i,value;
	printf("\n enter two numbers:");
	scanf("%d%d",&num1,&num2);
	value = 0;
	for(i=1;i<=num2;i++)
	value = value+num1;
	printf("result = %d",value);
	return 0;
}
