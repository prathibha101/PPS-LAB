#include<stdio.h>
int main()
{
	char c;
	printf("enter character:");
	scanf("%c",&c);
	if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
	printf("%c is an character",c);
	else
	printf("%c is not an alphabet",c);
	return 0;
}
