#include<stdio.h>
struct student
{
	char name[50];
	int marks,rollno;
}s;
int main()
{
	struct student s[10];
	int i,j,n;
	printf("\nEnter the no.of studnts:");
	scanf("d",&n);
	for(i=0;i<n;i++)
	{
	printf("\nEnter the details of the student %d:",i+1);
	scanf("%s%d",s[i].name,&s[i].rollno);
	printf("\nEnter the 3 subject marks :");
	for(j=0;j<3;j++)
	   scanf("%d",&s[i].marks[j])
	}
	
	
	printf("\n The student Details are:");
	printf("\n----------------------------");
	printf("\n NAME    ROLLNO    M1    M2   M3");
	for(i=0;i<n;i++)
	{
		printf("%4d",i+1,s[i].name,s[i].rollno);
	
	}
	for(j=0;j<3;j++)
	{
			printf("the marks are : %4d",s[i].marks[j]);

	}
	return 0;
	
	
		
	
}

