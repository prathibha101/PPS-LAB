#include<stdio.h>
int main()
{
	float years,months,weeks,days;
	printf("enter the value of days:");
	scanf("%f",&days);
	years = days/365;
	months = days/30;
	weeks = days/52;
	printf("\n years = %f,\n months = %f,\n weeks = %f",years,months,weeks);
	return 0;
}
