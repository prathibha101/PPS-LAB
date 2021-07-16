#include<stdio.h>
int main()
{
	int days,years,months,weeks;
	printf("\n input days:");
	scanf("%d",&days);
	years = days/365;
	weeks = days/7;
	months = days/30;
	printf("\n days to years = %d",years);
	printf("\n days to weeks = %d",weeks);
	printf("\n days to months = %d",months);
	return 0;
}
