#include<stdio.h>
int main()
{
	float principle,time,rate,SI;
	printf("\n enter principle:");
	scanf("%f",&principle);
	printf("\n enter time:");
	scanf("%f",&time);
	printf("\n enter rate:");
	scanf("%f",&rate);
	SI = (principle*time*rate)/100;
	printf("\n SI = %f",SI);
	return 0;
}
