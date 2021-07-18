#include<stdio.h>
#include<math.h>
int main()
{
	int num,cube,cube2;
	printf("enter a number:");
	scanf("%d",&num);
	
	/*without built-in function*/
	cube = num*num*num;
	printf("cube of given number=%d",cube);
	
	/*using built-in function*/
	cube2=pow(num,3);
	printf("\ncube of given number = %d",cube2);
}
