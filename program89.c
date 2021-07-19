/* Read and print employee details using structures (Empname ,eno,salary)*/
#include<stdio.h>
struct employee
{
	char name[50];
	int age;
	float salary;
}e;
int main()
{
	printf("\nEntering the information regarding empolyee details:");
	printf("\nEnter the name of the employee:");
	fgets(e.name,sizeof(e.name),stdin);
	
	printf("\nEnter the salary of the employee:");
	scanf("%f",&e.salary);
	
	printf("\nDisplaying information regarding the employee :");
	printf("\nName:");
	printf("%s",e.name);
	printf("\nsalary: %.lf",e.salary);
	return 0;
	
}

