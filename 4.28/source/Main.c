#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i;
	int A;
	int h;
	int o;
	double money;
	for (i = 1; i < 5; i--)
	{
		printf("Enter pay code (-1 to end):");
		scanf_s("%d", &A);

		if (A == -1)
		{
			printf("\n");
			system("Pause");
			return 0;
		}

		else if (A==1)
		{
			printf("managers mode\n");
			printf("Enter the fixed salary:");
			scanf_s("%lf", &money);
			printf("salary is %g\n\n",money);
		}
		else if (A==2)
		{
			printf("hourly workers mode\n");
			printf("Enter # of hours worked:");
			scanf_s("%d",&h);
			printf("Enter hourly rate of the worker($00.00):");
			scanf_s("%lf", &money);
			if (h <= 40)
			{
				printf("Salary is $%.2f\n\n", h*money + 0.005);
			}
			else
			{
				printf("Salary is $%.2f\n\n", 40 * money + (h - 40)*1.5*money + 0.005);
			}

		}
		else if (A == 3)
		{
			printf("commission workers mode\n");
			printf("Enter sales in dollars:");
			scanf_s("%lf", &money);
			printf("Salary is $%.2f\n\n", 250+0.057*money + 0.005);
		}
		else if (A == 4)
		{
			printf("pieceworkers mode\n");
			printf("How many item were sold:");
			scanf_s("%d", &o);
			printf("Enter how much he/she can earn by selling an item:");
			scanf_s("%lf", &money);
			printf("Salary is $%.2f\n\n", o*money );
		}
		else
		{
			printf("wrong pay code\n\n");
		}
	}
		

		

}


