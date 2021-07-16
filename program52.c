#include<stdio.h>
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	if(num>0)
		printf("positive");
	if(num<0)
		printf("negitive");
	if(num=0)
		printf("zero");
	return 0;
}
