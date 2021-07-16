#include<stdio.h>
int main()
{
	int x;
	float y,averageconsumption;
	printf("\n total distance in km:");
	scanf("%d",&x);
	printf("\n total fuel spent in liters:");
	scanf("%f",&y);
	averageconsumption = x/y;
	printf("\n averagecomsumption=%f",averageconsumption);
	return 0;
	
}
