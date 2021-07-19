#include<stdio.h>
int main()
{
	int num,rem,number,reverse=0;
	printf("\nEnter the number:");
	scanf("%d",&num);
	number = num;
	while(num>0)
	{
	rem = num%10;
	reverse = reverse * 10 +rem;
	num/=10;
	}
	if(number==reverse)
	printf("\nThe given no is palindrome");
	else
	printf("\nThe given no is not palindrome");
	return 0;
}
