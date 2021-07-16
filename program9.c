#include<Stdio.h>
int main()
{
	int emp_id,hrs;
	float tot_salary,amount_per_hr;
	printf("enter employee id:");
	scanf("%d",&emp_id);
	printf("number of working hours:");
	scanf("%d",&hrs);
	printf("amount recives per hour:");
	scanf("%f",&amount_per_hr);
	tot_salary = hrs*amount_per_hr;
	printf("\n employee id = %d,\n total salary = %f",emp_id,tot_salary);
	return 0;
}
