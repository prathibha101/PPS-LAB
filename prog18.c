#include<stdio.h>
int main()
{
	int hrs,min,sec;
	printf("input sec:");
	scanf("%d",&sec);
	hrs = sec/3600;
	min = (sec%3600)/60;
	sec = (sec%3600)%60;
	printf("%d:%d:%d",hrs,min,sec);
	return 0;
	
}
