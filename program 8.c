#include<stdio.h>
int main()
{
	int weight,cost,units,totalwt,totalcost;
	printf("\nenter weight:");
	scanf("%d",&weight);
	printf("\n enter cost:");
	scanf("%d",&cost);
	printf("\n enter units:");
	scanf("%d",&units);
	totalwt = weight*units;
	totalcost = cost*units;
	printf("\n totalwt = %d \n totalcost = %d",totalwt,totalcost);
	return 0;
}
