#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("a is greater than b");
	else
		printf("b is greater than a");
	return 0;
}
