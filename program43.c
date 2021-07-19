#include<stdio.h>
int main()
{
	int n1,n2,n3,max1,max2;
	printf("enter three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	max1=(n1>n2)?n1:n2;
	max2=(max1>n3)?max1:n3;
	printf("%d is maximum",max2);
	return 0;
}
