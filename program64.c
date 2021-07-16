#include<stdio.h>
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("\n sunday ");
			break;
		case 2:printf("\n monday");
			break;
		case 3:printf("tuesday");
			break;
		case 4:printf("wednesday");
			break;
		case 5:printf("thursday");
			break;
		case 6:printf("friday");
			break;
		case 7:printf("saturday");
			break;
		default:printf("no days");
				
	}
	return 0;
}
