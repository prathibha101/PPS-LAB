#include<stdio.h>
int main()
{
	int arr[5],n,i,sum;
	printf("enter the value of n: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter element %d",i+1);
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("\n sum of the arr is %d",sum);
	printf("\n average of the arr is %0.1f",(float)sum/n);
	
	
	
}
