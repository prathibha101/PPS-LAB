#include<stdio.h>
int main()
{
	int n1,n2,max;
	printf("enter two numbers:");
	scanf("%d%d",&n1,&n2);
	max=(n1>n2)?n1:n2;
	printf("%d is maximum",max);
	return 0;
}
