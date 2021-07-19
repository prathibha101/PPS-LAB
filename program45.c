#include<stdio.h>
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	(num%2==0)?printf("\nnum=%d is even",num):printf("odd");
	
	return 0;
}
