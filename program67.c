#include<stdio.h>
int main()
{
	int num,i=1;
	
	printf("enter number:");
	scanf("%d",&num);
	
	printf("\n natural number from %d to %d:\n",i,num);
	while(i <= num)
	{
		printf("%d",i);
		i++;
	}
	printf("\n");
	return 0;
}
