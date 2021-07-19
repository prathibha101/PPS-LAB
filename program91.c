#include<stdio.h>
struct sz
{
	int roll,marks;
	char name[10];
	
};
int main()
{
	int size;
	struct sz s;
	
	size = sizeof(s);
	printf("\nSize of the structure : %d",size);
	return 0;
	
	
}
