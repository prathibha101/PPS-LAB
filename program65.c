#include<Stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("\nenter your operators (+, -, /, %, *):");
	scanf("%c",&ch);
	printf("\n enter 2 integers:");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case '+':c=a+b;
			printf("addition of two numbers = %d",c);
			break;
		case '-':c=a-b;
			printf("substracion of two numbers = %d",c);
			break;
		case '/':c=a/b;
			printf("reminder of two numbers = %d",c);
			break;
		case '%':c=a%b;
			printf("quotient of two numbers = %d",c);
			break;
		case '*':c=a*b;
			printf("multiplication of two numbers = %d",c);
			break;
		default:printf("invalid operator");
			
	}
	return 0;
	
}
