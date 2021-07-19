#include<stdio.h>
struct student
{
	char name[50];
	int rollno;
	float marks;

}s;
int main()
{
	printf("\nEnter information regarding student:");
	printf("\nEnter name:");
	fgets(s.name,sizeof(s.name),stdin);
	
	printf("\nEnter the roll number:");
	scanf("%d",&s.rollno);
	printf("\nEnter Marks:");
	scanf("%f",&s.marks);
	
	printf("\nDisplaying Information:");
	printf("\nName:");
	printf("%s",s.name);
	printf("\nRoll number: %d",s.rollno);
	printf("\nMarks:%.lf",s.marks);
	return 0;
	
	
	
}
	
