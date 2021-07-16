#include<stdio.h>
int main()
{
	char ch;
	printf("enter gender(F,M):");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'F':printf(" Female");
		break;
		case 'M':printf("Male");
		break;
	}
	return 0;
}
