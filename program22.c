#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter two numbers:");
	scanf("%d%d",&num1,&num2);
	num1 = num1+num2;
	num2 = num1-num2;
	num1 = num1-num2;
	printf("\nnum1 = %d\n num2 = %d",num1,num2);
	return 0;
}
