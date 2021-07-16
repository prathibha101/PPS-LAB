#include<stdio.h>
int main()
{
	int a,b,c,sum,product,average;
	printf("\nenter a :");
	scanf("%d",&a);
	printf("\nenter b:");
	scanf("%d",&b);
	printf("\nenter c:");
	scanf("%d",&c);
	sum = a+b+c;
	product = a*b*c;
	average = (a+b+c)/3;
	printf("\n sum = %d \n product = %d \n average = %d",sum,product,average);
	return 0;
}
