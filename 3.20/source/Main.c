#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i;
	int H;
	double R;
	for (i = 1; i < 5; i--)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &H);

		if (H == -1)
		{
			printf("\n");
			system("Pause");
			return 0;
		}

		else
		{
			printf("Enter hourly rate of the worker($00.00):");
			scanf_s("%lf",&R);
				if (H<=40)
				{
					printf("Salary is $%.2f\n\n",H*R +0.005);
				}
				else
				{
					printf("Salary is $%.2f\n\n", 40*R+(H-40)*1.5*R + 0.005);
				}
			
		}

	}
}


