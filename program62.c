#include<stdio.h>
int main()
{
	int mark;
	printf("Enter the percentage of marks: ");
	scanf("%d",&mark);
	
	if (mark>=70)
		printf("You got Distinction.");
	else if (mark>40&&mark<=60)
		printf("You got Second class.");
	else if (mark>60&&mark<=70)
		printf("You got First class.");
	else //(mark<=40)
		printf("You got Failed.");
	return 0;
}

