#include<stdio.h>
int main()
{
	int A[4],min,i,sum=0;
	printf("enter numbers:");
	min=10000;
	for(i=0;i<4;i++)
	{
		scanf("%d",&A[i]);
		min=min>A[i]?A[i]:min;
		sum+=A[i];
		
	}

	printf("\nmin=%d",min);
	return 0;
}
