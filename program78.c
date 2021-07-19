#include<stdio.h>
int main()
{
	int A[4],max,i,sum=0;
	printf("enter numbers:");
	max=0;
	for(i=0;i<4;i++)
	{
		scanf("%d",&A[i]);
		max=max<A[i]?A[i]:max;
		sum+=A[i];
		
	}

	printf("\nmax=%d",max);
	return 0;
}
