#include<stdio.h>
int main()
{
	int l,b,r,area;
	printf("\nenter the l of rectangle:");
	scanf("%d",&l);
	printf("\nenter the b of rectangle:");
	scanf("%d",&b);
	area=l*b;
	printf("\n area of rectangle=%d",area);
	printf("\n enter r of circle:");
	scanf("%d",&r);
	area=3.14*2*r;
	printf("\narea of circle = %d",area);
	return 0;
	
}
