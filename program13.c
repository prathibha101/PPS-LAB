#include<stdio.h>
int main()
{
	int hrs,min,secs;
	printf("\n input secs :");
	scanf("%d",&secs);
	hrs = secs/3600;
	min = secs/60;
	printf("\n hrs  = %d",hrs);
	printf("\n min = %d",min);
	return 0;
	
}
