#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,distance;
	printf("\nx1:");
	scanf("%f",&x1);
	printf("\n x2:");
	scanf("%f",&x2);
	printf("\n y1:");
	scanf("%f",&y1);
	printf("\n y2:");
	scanf("%f",&y2);
	distance = sqrt((x2-x1)*(x2-x2)+(y2-y1)*(y2-y1));
	printf("distance = %f",distance);
	return 0;
}
